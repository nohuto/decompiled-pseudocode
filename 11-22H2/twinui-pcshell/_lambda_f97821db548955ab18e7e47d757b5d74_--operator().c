/*
 * XREFs of _lambda_f97821db548955ab18e7e47d757b5d74_::operator() @ 0x180286234
 * Callers:
 *     _lambda_f97821db548955ab18e7e47d757b5d74_::_lambda_invoker_cdecl_ @ 0x180286220 (_lambda_f97821db548955ab18e7e47d757b5d74_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1801CE4C6 (wcscmp_0.c)
 *     ?CallFunction@alchemy_client_dwm@@YAJUapi_spec@api_alchemy@@PEAUHWND__@@KPEBXK@Z @ 0x18074BE48 (-CallFunction@alchemy_client_dwm@@YAJUapi_spec@api_alchemy@@PEAUHWND__@@KPEBXK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ContextMenuSmallRoundedCorner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18074C1A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ContextMenuSmallRoundedCorner@@@details@w.c)
 */

__int64 __fastcall lambda_f97821db548955ab18e7e47d757b5d74_::operator()(__int64 a1, HWND a2, __int64 a3)
{
  DWORD WindowThreadProcessId; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  HRESULT v8; // eax
  DWORD dwProcessId; // [rsp+30h] [rbp-D0h] BYREF
  COLORREF pColor; // [rsp+34h] [rbp-CCh] BYREF
  int pvAttribute; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v13; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR ClassName[1024]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+878h] [rbp+778h]

  dwProcessId = 0;
  WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
  if ( dwProcessId != GetCurrentProcessId() )
    return 1LL;
  if ( WindowThreadProcessId != GetCurrentThreadId() )
    return 1LL;
  GetClassNameW(a2, ClassName, 1024);
  if ( wcscmp_0(ClassName, L"#32768") || *(_QWORD *)a3 != SendMessageW(a2, 0x1E1u, 0LL, 0LL) )
    return 1LL;
  if ( !(unsigned int)GetPropW(a2, L"IsZachMenuDWMAttributeSet") )
  {
    pColor = 0;
    if ( GetThemeColor(*(HTHEME *)(a3 + 8), 10, 0, 3821, &pColor) >= 0 )
    {
      v13 = unk_1807CC780;
      alchemy_client_dwm::CallFunction(&v13, a2, v7, &pColor);
    }
    LOBYTE(v6) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ContextMenuSmallRoundedCorner>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ContextMenuSmallRoundedCorner>::GetImpl'::`2'::impl,
      v6);
    pvAttribute = 3;
    v8 = DwmSetWindowAttribute(a2, 0x21u, &pvAttribute, 4u);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x99,
        (int)"shell\\lib\\immersivecontextmenu\\immersivecontextmenuownerdrawhelper.cpp",
        (const char *)(unsigned int)v8);
    SetPropW(a2, L"IsZachMenuDWMAttributeSet", HANDLE_FLAG_INHERIT);
  }
  return 0LL;
}
