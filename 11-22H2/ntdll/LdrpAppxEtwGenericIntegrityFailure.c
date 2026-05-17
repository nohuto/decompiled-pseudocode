/*
 * XREFs of LdrpAppxEtwGenericIntegrityFailure @ 0x1800D6874
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800D6680 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x1800301E0 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x180030310 (EtwEventWrite.c)
 *     EtwEventRegister @ 0x180031B90 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpAppxEtwGenericIntegrityFailure(int a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  int *v3; // [rsp+28h] [rbp-20h] BYREF
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+34h] [rbp-14h]
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = a1;
  v5 = 0;
  v3 = &v6;
  v4 = 4;
  result = EtwEventRegister((int)&AppModelRuntimeProviderId, 0LL, 0LL, (__int64)&v2);
  if ( !(_DWORD)result )
  {
    EtwEventWrite(v2, (int)&AppModelGenericLibraryLoadFailureNoTermination, 1, (__int64)&v3);
    return EtwNotificationUnregister(v2, 0LL);
  }
  return result;
}
