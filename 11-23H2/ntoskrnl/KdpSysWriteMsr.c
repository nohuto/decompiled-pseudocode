/*
 * XREFs of KdpSysWriteMsr @ 0x1405686CC
 * Callers:
 *     KdSystemDebugControl @ 0x1409722F0 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140AB07C8 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
