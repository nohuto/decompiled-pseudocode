/*
 * XREFs of _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x180044654
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800073B4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch_0(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rbx
  __int64 v4; // rax
  int v5; // eax

  v3 = *(unsigned __int16 **)(a2 + 64);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 32) + 8LL))(*(_QWORD *)(a2 + 32));
    StringCchPrintfW(v3, *(_QWORD *)(a2 + 72), L"std::exception: %hs", v4);
  }
  v5 = *(_DWORD *)(a2 + 80);
  if ( v5 >= 0 )
    v5 = -2147024322;
  *(_DWORD *)(a2 + 80) = v5;
  return 0LL;
}
