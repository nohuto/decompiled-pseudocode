/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x18004488C
 * Callers:
 *     <none>
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180005F14 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800073B4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_4(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rbx
  __int64 v4; // rax

  v3 = *(unsigned __int16 **)(a2 + 152);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 56) + 8LL))(*(_QWORD *)(a2 + 56));
    StringCchPrintfW(v3, *(_QWORD *)(a2 + 160), L"std::exception: %hs", v4);
  }
  *(_DWORD *)(a2 + 72) = -2147024882;
  *(_DWORD *)(a2 + 76) = wil::details::HrToNtStatus((wil::details *)0x8007000ELL);
  *(_BYTE *)(a2 + 80) = 0;
  return 0LL;
}
