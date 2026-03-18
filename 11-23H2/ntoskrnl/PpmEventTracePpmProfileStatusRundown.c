/*
 * XREFs of PpmEventTracePpmProfileStatusRundown @ 0x1409992B8
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140864C90 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

void PpmEventTracePpmProfileStatusRundown()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_STATUS_RUNDOWN) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PpmProfileStatus;
      UserData.Size = 4;
      EtwWrite(v0, &PPM_ETW_PROCESSOR_PROFILE_STATUS_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
