/*
 * XREFs of LdrpAppxEtwGenericIntegrityFailure @ 0x1800D6810
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800D6600 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwEventWrite @ 0x1800061F0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x1800065F0 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x180015AA0 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpAppxEtwGenericIntegrityFailure(int a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // [rsp+20h] [rbp-28h] BYREF
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
