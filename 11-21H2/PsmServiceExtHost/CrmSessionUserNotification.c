/*
 * XREFs of CrmSessionUserNotification @ 0x180046C2C
 * Callers:
 *     PsmCrmSessionUserNotification @ 0x180046C20 (PsmCrmSessionUserNotification.c)
 * Callees:
 *     CrmGlobalsRundown @ 0x18002E744 (CrmGlobalsRundown.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x180046CD0 (CrmStateMonitorTimeSinceLogonReset.c)
 */

void __fastcall CrmSessionUserNotification(int a1)
{
  _DWORD *v1; // rdi

  if ( a1 == 6 )
  {
    CrmGlobalsRundown();
  }
  else if ( a1 == 5 )
  {
    RtlAcquireSRWLockShared(&CrmGlobals);
    v1 = qword_1800DD090;
    if ( qword_1800DD090 )
    {
      RtlAcquireSRWLockExclusive((char *)qword_1800DD090 + 8);
      v1[4] = GetCurrentThreadId();
    }
    RtlReleaseSRWLockShared(&CrmGlobals);
    if ( v1 )
    {
      CrmStateMonitorTimeSinceLogonReset(v1);
      v1[4] = 0;
      RtlReleaseSRWLockExclusive(v1 + 2);
    }
  }
}
