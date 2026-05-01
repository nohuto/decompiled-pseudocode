/*
 * XREFs of ?GetAppView@WindowWrapperBase@@UEAAJPEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804E9CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::GetAppView(
        WindowWrapperBase *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **a2,
        __int64 a3,
        const char *a4)
{
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v4; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v4 = (struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *)*((_QWORD *)this + 11);
    if ( v4 )
    {
      *a2 = v4;
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      *a2 = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x69C,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           a4);
  }
  return result;
}
