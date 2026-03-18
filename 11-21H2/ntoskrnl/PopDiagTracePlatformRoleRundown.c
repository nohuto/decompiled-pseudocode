/*
 * XREFs of PopDiagTracePlatformRoleRundown @ 0x140992B80
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14081CBF0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void PopDiagTracePlatformRoleRundown()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_PLATFORMROLE_RUNDOWN) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PopFirmwarePlatformRole;
      UserData.Size = 4;
      EtwWrite(v0, &POP_ETW_EVENT_PLATFORMROLE_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
