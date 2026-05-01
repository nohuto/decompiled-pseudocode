/*
 * XREFs of ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x1800288EC
 * Callers:
 *     _lambda_63662cd9376551e4950848a042514280_::operator() @ 0x18002783C (_lambda_63662cd9376551e4950848a042514280_--operator().c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802FD200 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180036348 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180093360 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _lambda_3a9e679f41fabe06be00bfd1589ed9cc_::operator() @ 0x1802F4074 (_lambda_3a9e679f41fabe06be00bfd1589ed9cc_--operator().c)
 *     ?CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z @ 0x1805E7838 (-CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MoveTryPositionPropertiesToPropertySet(
        HWND a1,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2)
{
  bool *v3; // r9
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-50h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-48h] BYREF
  HWND *p_hWnd; // [rsp+30h] [rbp-40h] BYREF
  char v11; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v13; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  hWnd = a1;
  if ( !(unsigned int)GetPropW(a1, L"TryPositionView") )
    return 0LL;
  p_hWnd = &hWnd;
  v11 = 1;
  LOBYTE(v8) = 0;
  if ( CallerIdentity::CheckCapabilityFromWindow(
         (CallerIdentity *)hWnd,
         (HWND)&stru_1806D4E18,
         (const unsigned __int16 *)&v8,
         v3) < 0
    || !(_BYTE)v8 )
  {
    goto LABEL_18;
  }
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView", 0x10u, 0xFu);
  v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(a2, v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    GetPropW(hWnd, L"TryPositionView.Left");
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Left", 0x15u, 0x14u);
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 459LL;
      goto LABEL_17;
    }
    GetPropW(hWnd, L"TryPositionView.Top");
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Top", 0x14u, 0x13u);
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 463LL;
      goto LABEL_17;
    }
    GetPropW(hWnd, L"TryPositionView.Right");
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Right", 0x16u, 0x15u);
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 467LL;
      goto LABEL_17;
    }
    GetPropW(hWnd, L"TryPositionView.Bottom");
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Bottom", 0x17u, 0x16u);
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 471LL;
      goto LABEL_17;
    }
    GetPropW(hWnd, L"TryPositionView.Flags");
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Flags", 0x16u, 0x15u);
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 475LL;
      goto LABEL_17;
    }
LABEL_18:
    v11 = 0;
    lambda_3a9e679f41fabe06be00bfd1589ed9cc_::operator()(&p_hWnd);
    return 0LL;
  }
  v7 = 455LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v5,
    v8);
  v11 = 0;
  lambda_3a9e679f41fabe06be00bfd1589ed9cc_::operator()(&p_hWnd);
  return v6;
}
