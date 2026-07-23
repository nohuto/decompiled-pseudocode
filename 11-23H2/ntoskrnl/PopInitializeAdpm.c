/*
 * XREFs of PopInitializeAdpm @ 0x140B35EB4
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExSubscribeWnfStateChange @ 0x1407DB000 (ExSubscribeWnfStateChange.c)
 *     PopExtendConnectionState @ 0x14080187C (PopExtendConnectionState.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B35F44 (PopAdaptiveInitializeBootContext.c)
 */

__int64 PopInitializeAdpm()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h] BYREF

  ExInitializeResourceLite(&PopAdpmLock);
  memset(&PopAdaptiveContext, 0, 0x50uLL);
  dword_140C39C58 = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_140C39C5C = 3;
  PopExtendConnectionState(0);
  result = ExSubscribeWnfStateChange(
             (__int64)&v1,
             (__int64)&WNF_HPM_GLOBAL_HUMAN_PRESENCE_STATE,
             1,
             0,
             (__int64)PopAdaptiveWnfCallback,
             0LL);
  if ( !CmNtSkipRegistryInit )
    return PopAdaptiveInitializeBootContext();
  return result;
}
