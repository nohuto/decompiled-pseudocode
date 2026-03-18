/*
 * XREFs of KdpSysReadMsr @ 0x140565D34
 * Callers:
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140A6FB80 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
