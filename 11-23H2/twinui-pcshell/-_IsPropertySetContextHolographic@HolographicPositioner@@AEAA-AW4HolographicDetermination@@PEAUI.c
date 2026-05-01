/*
 * XREFs of ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180076690
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800765C0 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180067AB0 (-IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x1800768C0 (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x1800DDB28 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x1800DDC18 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_IsPropertySetContextHolographic(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  char v5; // al
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // r8
  int v14; // edi
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v20; // [rsp+24h] [rbp-4Ch] BYREF
  int v21; // [rsp+28h] [rbp-48h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  int v23; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v25; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v3 = 0;
  v19 = 0;
  v22 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AppInstanceId", 0xEu, 0xDu);
  if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
         v25) )
  {
    goto LABEL_27;
  }
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"DesignatedHolographicLaunch",
    0x1Cu,
    0x1Bu);
  if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
         v25) )
  {
    goto LABEL_27;
  }
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ClientRequestedNavigationType",
    0x1Eu,
    0x1Du);
  v19 = 1;
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v22, v25, v4, &v23) < 0
    || (v5 = 1, v23 != 1) )
  {
    v5 = 0;
  }
  if ( v5 )
  {
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v22, v25, v13, &v19) >= 0 )
    {
      v21 = 0;
      if ( (int)HolographicPositioner::IsWindowManaged((HolographicPositioner *)(a1 + 136), (HWND)v19, &v21) >= 0 )
      {
        v14 = (v21 != 0) + 1;
LABEL_28:
        v3 = v14;
        goto LABEL_11;
      }
    }
  }
  v20 = 0;
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_1807B8740);
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
              &v22,
              *(_QWORD *)(v6 + 24),
              v7,
              &v20) >= 0 )
  {
    v11 = v20;
  }
  else
  {
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_1807B8748);
    v10 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            &v22,
            *(_QWORD *)(v8 + 24),
            v9,
            &v20);
    v11 = v20;
    if ( v10 < 0 )
      v11 = 0LL;
    v20 = v11;
  }
  if ( (_DWORD)v11 )
  {
    v15 = (unsigned int)v11;
    v14 = 0;
    v21 = 0;
    if ( (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(v11, 1LL, &v21) < 0 )
      goto LABEL_21;
    if ( v21 != 1 )
    {
      v14 = 1;
LABEL_21:
      v16 = *(_QWORD *)(a1 + 240);
      if ( v16 )
      {
        v19 = 0;
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v16 + 40LL))(v16, v15, &v19);
        if ( v17 >= 0 )
        {
          v18 = v14;
          if ( v19 )
            v18 = 2;
          v14 = v18;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x532,
            (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v17,
            v19);
        }
      }
      goto LABEL_28;
    }
LABEL_27:
    v14 = 2;
    goto LABEL_28;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  return v3;
}
