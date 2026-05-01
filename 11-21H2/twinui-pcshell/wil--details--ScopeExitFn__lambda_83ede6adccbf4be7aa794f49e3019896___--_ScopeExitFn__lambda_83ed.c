/*
 * XREFs of wil::details::ScopeExitFn__lambda_83ede6adccbf4be7aa794f49e3019896___::_ScopeExitFn__lambda_83ede6adccbf4be7aa794f49e3019896___ @ 0x1805FE3A8
 * Callers:
 *     _TaskViewHost::Show_::_1_::dtor$4 @ 0x180213D14 (_TaskViewHost--Show_--_1_--dtor$4.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_83ede6adccbf4be7aa794f49e3019896___::_ScopeExitFn__lambda_83ede6adccbf4be7aa794f49e3019896___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)(*(_QWORD *)a1 + 232LL));
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1);
  }
  return result;
}
