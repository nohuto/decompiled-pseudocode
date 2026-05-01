/*
 * XREFs of CrmStateMonitorPostResumeSetAndReset @ 0x180040988
 * Callers:
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x1800431B0 (CrmStateMonitorPostResumeSuspendCallback.c)
 *     CrmStateMonitorPostResumeTimerCallback @ 0x18006E3E0 (CrmStateMonitorPostResumeTimerCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorListenerRemove @ 0x18000A7B8 (CrmStateMonitorListenerRemove.c)
 */

__int64 __fastcall CrmStateMonitorPostResumeSetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
    CrmStateMonitorListenerRemove((char *)qword_1800DC110, a1 + 96, 0);
  if ( *(_QWORD *)(a1 + 128) != a1 + 128 )
    CrmStateMonitorListenerRemove((char *)qword_1800DC118, a1 + 120, 0);
  return CrmStateMonitorStateSet((void **)a1, &v4, 4uLL, 0);
}
