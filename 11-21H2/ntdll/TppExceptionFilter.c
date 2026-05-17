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

__int64 __fastcall TppExceptionFilter(const void **a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 (__fastcall *v8)(const void **); // rbx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  v4 = RtlpUnhandledExceptionFilter;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v5 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &v10, 4u, 0LL);
    if ( v5 < 0 )
      RtlRaiseStatus(v5, v6, v7);
    v2 = v10;
    `RtlpGetCookieValue'::`2'::CookieValue = v10;
  }
  v8 = (__int64 (__fastcall *)(const void **))(v2 ^ __ROR8__(v4, 64 - (v2 & 0x3F)));
  if ( v8 )
    return v8(a1);
  else
    return RtlUnhandledExceptionFilter2(a1);
}
