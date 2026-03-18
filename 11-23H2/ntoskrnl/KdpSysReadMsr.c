/*
 * XREFs of KdpSysReadMsr @ 0x140567F18
 * Callers:
 *     KdSystemDebugControl @ 0x1409720F0 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140AB07C8 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
