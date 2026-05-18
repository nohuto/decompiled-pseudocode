/*
 * XREFs of sub_1800D91AC @ 0x1800D91AC
 * Callers:
 *     sub_1800D9280 @ 0x1800D9280 (sub_1800D9280.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_1800CC258 @ 0x1800CC258 (sub_1800CC258.c)
 */

void __fastcall sub_1800D91AC(__int64 a1)
{
  void **v1; // rbx
  __int64 *v2; // rcx
  HRESULT v3; // eax
  ULONG_PTR v4; // rbx
  D2D1_FACTORY_OPTIONS pFactoryOptions; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v1 = (void **)(a1 + 512);
  if ( sub_1800CC258((_QWORD *)(a1 + 512)) )
  {
    pFactoryOptions.debugLevel = D2D1_DEBUG_LEVEL_NONE;
    sub_18000E72C(v2);
    v3 = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &stru_18019AE18, &pFactoryOptions, v1);
    v4 = v3;
    if ( v3 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v4;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
}
