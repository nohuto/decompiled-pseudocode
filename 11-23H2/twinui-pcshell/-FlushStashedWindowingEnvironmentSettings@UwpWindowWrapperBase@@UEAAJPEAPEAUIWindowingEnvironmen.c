/*
 * XREFs of ?FlushStashedWindowingEnvironmentSettings@UwpWindowWrapperBase@@UEAAJPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804F0F10
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$copy_to@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802D74EC (--$copy_to@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::FlushStashedWindowingEnvironmentSettings(
        UwpWindowWrapperBase *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rcx
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (__int64 *)((char *)this - 16);
  v3 = (__int64 *)((char *)this + 128);
  try
  {
    wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::copy_to<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings>(
      v3,
      a2);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v2 + 18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x881,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v4);
  }
  return result;
}
