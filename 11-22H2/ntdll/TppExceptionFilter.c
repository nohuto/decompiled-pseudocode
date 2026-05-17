/*
 * XREFs of TppExceptionFilter @ 0x180125C7C
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x1801267F8 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180126890 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18009F110 (NtQueryInformationProcess.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010D6B0 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

__int64 __fastcall TppExceptionFilter(const void **a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 (__fastcall *v6)(const void **); // rbx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  v4 = RtlpUnhandledExceptionFilter;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v5 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &v8, 4u, 0LL);
    if ( v5 < 0 )
      RtlRaiseStatus(v5);
    v2 = v8;
    `RtlpGetCookieValue'::`2'::CookieValue = v8;
  }
  v6 = (__int64 (__fastcall *)(const void **))(v2 ^ __ROR8__(v4, 64 - (v2 & 0x3F)));
  if ( v6 )
    return v6(a1);
  else
    return RtlUnhandledExceptionFilter2(a1);
}
