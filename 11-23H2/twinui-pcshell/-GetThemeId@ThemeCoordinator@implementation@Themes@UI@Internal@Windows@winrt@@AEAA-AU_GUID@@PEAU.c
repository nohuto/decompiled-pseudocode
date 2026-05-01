/*
 * XREFs of ?GetThemeId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA?AU_GUID@@PEAUIThemeManager2@@H@Z @ 0x1806E29B8
 * Callers:
 *     ?SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x1806E3674 (-SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
struct _GUID *__fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetThemeId(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this,
        struct _GUID *__return_ptr retstr,
        struct IThemeManager2 *a3,
        unsigned int a4)
{
  __int64 v5; // rax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  *retstr = GUID_NULL;
  v5 = *(_QWORD *)a3;
  v9 = 0LL;
  if ( (*(int (__fastcall **)(struct IThemeManager2 *, _QWORD, winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator **))(v5 + 72))(
         a3,
         a4,
         &v9) >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *, struct _GUID *))(*(_QWORD *)v9 + 120LL))(
           v9,
           retstr);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x159,
        (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
        (const char *)(unsigned int)v6);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v9);
  return retstr;
}
