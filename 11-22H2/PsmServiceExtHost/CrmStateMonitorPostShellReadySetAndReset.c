/*
 * XREFs of CrmStateMonitorPostShellReadySetAndReset @ 0x180043034
 * Callers:
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x180008880 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 *     CrmStateMonitorPostShellReadyTimerCallback @ 0x18006E6D0 (CrmStateMonitorPostShellReadyTimerCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorListenerRemove @ 0x18000A7B8 (CrmStateMonitorListenerRemove.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadySetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    CrmStateMonitorListenerRemove((char *)qword_1800DC110, a1 + 88, 0);
  if ( *(_QWORD *)(a1 + 120) != a1 + 120 )
    CrmStateMonitorListenerRemove((char *)qword_1800DC118, a1 + 112, 0);
  return CrmStateMonitorStateSet((void **)a1, &v4, 4uLL, 0);
}
