/*
 * XREFs of LdrpAppxEtwGenericIntegrityFailure @ 0x1800D61D4
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800D5FE0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x180030010 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x180030140 (EtwEventWrite.c)
 *     EtwEventRegister @ 0x180031A30 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpAppxEtwGenericIntegrityFailure(int a1)
{
  NTSTATUS result; // eax
  ULONGLONG RegHandle; // [rsp+20h] [rbp-28h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-20h] BYREF
  int v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1;
  UserData.Reserved = 0;
  UserData.Ptr = (unsigned __int64)&v4;
  UserData.Size = 4;
  result = EtwEventRegister(&AppModelRuntimeProviderId, 0LL, 0LL, &RegHandle);
  if ( !result )
  {
    EtwEventWrite(RegHandle, &AppModelGenericLibraryLoadFailureNoTermination, 1u, &UserData);
    return EtwNotificationUnregister(RegHandle, 0LL);
  }
  return result;
}
