/*
 * XREFs of TppExceptionFilter @ 0x18012423C
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x180124DB8 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180124E40 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010D530 (RtlUnhandledExceptionFilter2.c)
 */

LONG __fastcall TppExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  int v5; // eax
  __int64 (__fastcall *v6)(PEXCEPTION_POINTERS); // rbx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  v4 = RtlpUnhandledExceptionFilter;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v5 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &v8, 4u, 0LL);
    if ( v5 < 0 )
      RtlRaiseStatus(v5);
    v2 = v8;
    `RtlpGetCookieValue'::`2'::CookieValue = v8;
  }
  v6 = (__int64 (__fastcall *)(PEXCEPTION_POINTERS))(v2 ^ __ROR8__(v4, 64 - (v2 & 0x3F)));
  if ( v6 )
    return v6(ExceptionPointers);
  else
    return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
}
