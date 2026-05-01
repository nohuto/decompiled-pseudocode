/*
 * XREFs of ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x1803AFF8C
 * Callers:
 *     _lambda_667ec943145f044c0b36791820c9a348_::operator() @ 0x1803ACA30 (_lambda_667ec943145f044c0b36791820c9a348_--operator().c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803B8114 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800DD81C (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x1802D05FC (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     _lambda_3a9e679f41fabe06be00bfd1589ed9cc_::operator() @ 0x1803AC984 (_lambda_3a9e679f41fabe06be00bfd1589ed9cc_--operator().c)
 *     ?CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z @ 0x18073C158 (-CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MoveTryPositionPropertiesToPropertySet(
        HWND a1,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2)
{
  bool *v3; // r9
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r8
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // r8
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // r8
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // r8
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // r8
  unsigned __int16 v14; // [rsp+20h] [rbp-50h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-48h] BYREF
  HWND *p_hWnd; // [rsp+30h] [rbp-40h] BYREF
  char v17; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v19; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  hWnd = a1;
  if ( (unsigned int)GetPropW(a1, L"TryPositionView") )
  {
    p_hWnd = &hWnd;
    v17 = 1;
    LOBYTE(v14) = 0;
    if ( CallerIdentity::CheckCapabilityFromWindow((CallerIdentity *)hWnd, (HWND)&stru_1808866D8, &v14, v3) >= 0
      && (_BYTE)v14 )
    {
      v19 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView", 0x10u, 0xFu);
      v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(a2, v19, v4, 1);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 456LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v5);
        v17 = 0;
        lambda_3a9e679f41fabe06be00bfd1589ed9cc_::operator()(&p_hWnd);
        return v6;
      }
      GetPropW(hWnd, L"TryPositionView.Left");
      v19 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Left", 0x15u, 0x14u);
      v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v19, v8);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 460LL;
        goto LABEL_16;
      }
      GetPropW(hWnd, L"TryPositionView.Top");
      v19 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Top", 0x14u, 0x13u);
      v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v19, v9);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 464LL;
        goto LABEL_16;
      }
      GetPropW(hWnd, L"TryPositionView.Right");
      v19 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"TryPositionView.Right",
        0x16u,
        0x15u);
      v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v19, v10);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 468LL;
        goto LABEL_16;
      }
      GetPropW(hWnd, L"TryPositionView.Bottom");
      v19 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"TryPositionView.Bottom",
        0x17u,
        0x16u);
      v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v19, v11);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 472LL;
        goto LABEL_16;
      }
      GetPropW(hWnd, L"TryPositionView.Flags");
      v19 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"TryPositionView.Flags",
        0x16u,
        0x15u);
      v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v19, v12);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 476LL;
        goto LABEL_16;
      }
    }
    v17 = 0;
    lambda_3a9e679f41fabe06be00bfd1589ed9cc_::operator()(&p_hWnd);
  }
  return 0LL;
}
