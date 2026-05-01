/*
 * XREFs of ?GetWindow@UwpWindowWrapperBase@@UEAAJPEAPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180415130
 * Callers:
 *     ?v_OnWindowSet@UwpWindowWrapper@@EEAAXXZ @ 0x180406880 (-v_OnWindowSet@UwpWindowWrapper@@EEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$copy_to@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180408E20 (--$copy_to@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UIWindow@Wi.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetWindow(
        UwpWindowWrapperBase *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow **a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 32);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 232LL))(v4);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::copy_to<Windows::Internal::ApplicationModel::WindowManagement::IWindow>(
      (__int64 *)this + 13,
      a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6ED,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v5);
  }
  return result;
}
