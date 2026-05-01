/*
 * XREFs of CrmStateMonitorPostShellReadySetAndReset @ 0x180047160
 * Callers:
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x18003C4F0 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 *     CrmStateMonitorPostShellReadyTimerCallback @ 0x18006E440 (CrmStateMonitorPostShellReadyTimerCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002E9A4 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorListenerRemove @ 0x180036060 (CrmStateMonitorListenerRemove.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadySetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    CrmStateMonitorListenerRemove((char *)qword_1800DD0F0, a1 + 88, 0);
  if ( *(_QWORD *)(a1 + 120) != a1 + 120 )
    CrmStateMonitorListenerRemove((char *)qword_1800DD0F8, a1 + 112, 0);
  return CrmStateMonitorStateSet((void **)a1, &v4, 4uLL, 0);
}
