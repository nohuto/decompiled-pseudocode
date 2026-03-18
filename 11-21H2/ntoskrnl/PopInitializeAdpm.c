/*
 * XREFs of PopInitializeAdpm @ 0x140AF33B0
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     PopExtendConnectionState @ 0x14081D3C0 (PopExtendConnectionState.c)
 *     PopAdaptiveInitializeBootContext @ 0x140AF3434 (PopAdaptiveInitializeBootContext.c)
 */

__int64 PopInitializeAdpm()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  ExInitializeResourceLite(&PopAdpmLock);
  memset(&PopAdaptiveContext, 0, 0x50uLL);
  dword_140C1F3B8 = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_140C1F3BC = 3;
  PopExtendConnectionState(0);
  ExSubscribeWnfStateChange(
    (int)&v1,
    (int)&WNF_HPM_GLOBAL_HUMAN_PRESENCE_STATE,
    1,
    0,
    (__int64)PopAdaptiveWnfCallback,
    0LL);
  return PopAdaptiveInitializeBootContext();
}
