/*
 * XREFs of wistd::__function::__func__lambda_a0755dde8b594d59faba0fbbcacd729d__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1806E1D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_N@Z @ 0x1801B6FDC (-HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_.c)
 *     ??$try_query@UIUnknown@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@1@XZ @ 0x1805B2688 (--$try_query@UIUnknown@@@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA-AV-.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wistd::__function::__func__lambda_a0755dde8b594d59faba0fbbcacd729d__void___cdecl_unsigned_long_const____::operator()(
        __int64 a1,
        void *a2)
{
  __int64 v2; // rdx
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::try_query<IUnknown>(
    (struct IWeakReference **)(a1 + 16),
    &v8);
  if ( v8 )
  {
    v6 = winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::HandlePackageServicing(v3, v2, v4, v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x52,
        (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
        (const char *)(unsigned int)v6);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v8);
}
