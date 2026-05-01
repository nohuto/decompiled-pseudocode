/*
 * XREFs of CrmSessionUserNotification @ 0x180042A9C
 * Callers:
 *     PsmCrmSessionUserNotification @ 0x180042A90 (PsmCrmSessionUserNotification.c)
 * Callees:
 *     CrmGlobalsRundown @ 0x18003E8B8 (CrmGlobalsRundown.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x180042B40 (CrmStateMonitorTimeSinceLogonReset.c)
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
    v1 = qword_1800DC0B0;
    if ( qword_1800DC0B0 )
    {
      RtlAcquireSRWLockExclusive((char *)qword_1800DC0B0 + 8);
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
