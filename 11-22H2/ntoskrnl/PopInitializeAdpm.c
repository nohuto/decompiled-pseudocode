/*
 * XREFs of PopInitializeAdpm @ 0x140B7454C
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     memset @ 0x140435400 (memset.c)
 *     ExSubscribeWnfStateChange @ 0x1407DB2B0 (ExSubscribeWnfStateChange.c)
 *     PopExtendConnectionState @ 0x1408623E4 (PopExtendConnectionState.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B3963C (PopAdaptiveInitializeBootContext.c)
 */

NTSTATUS PopInitializeAdpm()
{
  NTSTATUS result; // eax
  char v1; // [rsp+40h] [rbp+8h] BYREF

  ExInitializeResourceLite(&PopAdpmLock);
  memset(&PopAdaptiveContext, 0, 0x50uLL);
  dword_140C39CD8 = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_140C39CDC = 3;
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
