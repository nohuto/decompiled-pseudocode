/*
 * XREFs of ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x18039048C
 * Callers:
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x1802C7327 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x1802C74CE (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$7.c)
 *     _winrt::to_hresult_::_1_::catch$19 @ 0x180390573 (_winrt--to_hresult_--_1_--catch$19.c)
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x1803905CD (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x180390670 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x180390713 (_winrt--to_hresult_--_1_--catch$23.c)
 *     _Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::catch$90 @ 0x180717017 (_Util--FileMappingHelpers--ReadBufferFromSharedMemory_--_1_--catch$90.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     SetErrorInfo_0 @ 0x1801CEF83 (SetErrorInfo_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall winrt::hresult_error::to_abi(__int64 a1, _DWORD *a2)
{
  void (__fastcall ***v4)(_QWORD, _QWORD *, IErrorInfo **); // rcx
  IErrorInfo *v5; // rbx
  IErrorInfo *perrinfo; // [rsp+30h] [rbp+8h] BYREF
  IErrorInfo *v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(void (__fastcall ****)(_QWORD, _QWORD *, IErrorInfo **))(a1 + 16);
  if ( v4 )
  {
    perrinfo = 0LL;
    (**v4)(v4, winrt::impl::guid_v<winrt::impl::IErrorInfo>, &perrinfo);
    v5 = perrinfo;
    v8 = perrinfo;
    SetErrorInfo_0(0, perrinfo);
    if ( v5 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v8);
  }
  *a2 = *(_DWORD *)(a1 + 12);
  return a2;
}
