/*
 * XREFs of CrmStateMonitorPostResumeSetAndReset @ 0x180044D3C
 * Callers:
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x1800472E0 (CrmStateMonitorPostResumeSuspendCallback.c)
 *     CrmStateMonitorPostResumeTimerCallback @ 0x18006E370 (CrmStateMonitorPostResumeTimerCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002E9A4 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorListenerRemove @ 0x180036060 (CrmStateMonitorListenerRemove.c)
 */

__int64 __fastcall CrmStateMonitorPostResumeSetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
    CrmStateMonitorListenerRemove((char *)qword_1800DD0F0, a1 + 96, 0);
  if ( *(_QWORD *)(a1 + 128) != a1 + 128 )
    CrmStateMonitorListenerRemove((char *)qword_1800DD0F8, a1 + 120, 0);
  return CrmStateMonitorStateSet((void **)a1, &v4, 4uLL, 0);
}
