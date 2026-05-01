/*
 * XREFs of ?FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z @ 0x1805D094C
 * Callers:
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1801D4E00 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ApplicationFlyoutView::Hide$_ResumeCoro$1 @ 0x1801D5250 (ApplicationFlyoutView--Hide$_ResumeCoro$1.c)
 *     ?IsVisible@FallbackFlyoutView@@UEAA_NXZ @ 0x1805D1E80 (-IsVisible@FallbackFlyoutView@@UEAA_NXZ.c)
 *     ?IsVisible@ApplicationFlyoutView@@UEAA_NXZ @ 0x1805D2960 (-IsVisible@ApplicationFlyoutView@@UEAA_NXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Utils::FindWindowByPropertyName(Utils *this, const unsigned __int16 *a2)
{
  const char *v2; // r9
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+28h] [rbp-20h]
  Utils *v6; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  v6 = this;
  v5 = 0;
  if ( !EnumWindows((WNDENUMPROC)lambda_d48f3a1ea110d944c644bf6678f6e1fb_::_lambda_invoker_cdecl_, (LPARAM)&v4) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x1A6,
      (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      v2);
  if ( v5 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A7,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)0x802A000ALL,
      v4);
  return v4;
}
