/*
 * XREFs of ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180093558
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180099AFC (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAE@Z @ 0x1800937C8 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180093960 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x18009B474 (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180141D90 (-IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::_IsPropertySetContextHolographic(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  char v7; // al
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  char v11; // al
  HRESULT v12; // eax
  int v13; // edx
  __int64 v14; // r8
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 v23; // rsi
  int v24; // edi
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // r8
  int v29; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v30; // [rsp+24h] [rbp-4Ch] BYREF
  unsigned int v31; // [rsp+28h] [rbp-48h] BYREF
  int v32; // [rsp+2Ch] [rbp-44h] BYREF
  __int64 v33; // [rsp+30h] [rbp-40h] BYREF
  int v34; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v3 = 0;
  v30 = 0;
  v33 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  string = 0LL;
  v4 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    __debugbreak();
  }
  if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
         string,
         (unsigned __int8 *)&v29) < 0
    || (v7 = 1, !(_BYTE)v29) )
  {
    v7 = 0;
  }
  if ( v7 )
    goto LABEL_34;
  string = 0LL;
  v8 = WindowsCreateStringReference(L"DesignatedHolographicLaunch", 0x1Bu, &hstringHeader, &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
    __debugbreak();
  }
  if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
         string,
         (unsigned __int8 *)&v29) < 0
    || (v11 = 1, !(_BYTE)v29) )
  {
    v11 = 0;
  }
  if ( v11 )
    goto LABEL_34;
  string = 0LL;
  v12 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, &string);
  if ( v12 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12, v13, v14);
    __debugbreak();
  }
  v30 = 1;
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v33, string, v14, &v34) < 0
    || (v15 = 1, v34 != 1) )
  {
    v15 = 0;
  }
  if ( v15 )
  {
    string = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v33, string, v28, &v30) >= 0 )
    {
      v32 = 0;
      if ( (int)HolographicPositioner::IsWindowManaged((HolographicPositioner *)(a1 + 136), (HWND)v30, &v32) >= 0 )
      {
        v24 = (v32 != 0) + 1;
        goto LABEL_33;
      }
    }
  }
  v31 = 0;
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_18061DB90);
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
              &v33,
              *(_QWORD *)(v16 + 24),
              v17,
              &v31) >= 0 )
  {
    v21 = v31;
  }
  else
  {
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_18061DB98);
    v20 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            &v33,
            *(_QWORD *)(v18 + 24),
            v19,
            &v31);
    v21 = v31;
    if ( v20 < 0 )
      v21 = 0LL;
    v31 = v21;
  }
  if ( (_DWORD)v21 )
  {
    v23 = (unsigned int)v21;
    v24 = 0;
    v32 = 0;
    if ( (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(v21, 1LL, &v32) < 0 )
      goto LABEL_28;
    if ( v32 != 1 )
    {
      v24 = 1;
LABEL_28:
      v25 = *(_QWORD *)(a1 + 248);
      if ( v25 )
      {
        v30 = 0;
        v26 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v25 + 40LL))(v25, v23, &v30);
        if ( v26 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x53E,
            (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v26,
            v29);
        }
        else
        {
          v27 = v24;
          if ( v30 )
            v27 = 2;
          v24 = v27;
        }
      }
      goto LABEL_33;
    }
LABEL_34:
    v24 = 2;
LABEL_33:
    v3 = v24;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
  return v3;
}
