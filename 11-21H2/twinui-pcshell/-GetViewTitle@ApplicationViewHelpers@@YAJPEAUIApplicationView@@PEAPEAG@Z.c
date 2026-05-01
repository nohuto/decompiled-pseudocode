/*
 * XREFs of ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180032CA8
 * Callers:
 *     ?UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180032BB0 (-UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@.c)
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x1804438E0 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 *     ?_LoadTitle@SwitchItem@@AEAAJXZ @ 0x1804B6684 (-_LoadTitle@SwitchItem@@AEAAJXZ.c)
 *     ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z @ 0x18052B5A0 (-UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z.c)
 *     ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@_K@Z @ 0x18052B720 (-UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@_K@Z.c)
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180532EC0 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x18053BAF0 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x180146FA0 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetViewTitle(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64),
        unsigned __int16 **a2,
        unsigned __int16 **a3)
{
  __int64 (__fastcall **v3)(ApplicationViewHelpers *, GUID *, __int64); // rax
  int (__fastcall *v6)(ApplicationViewHelpers *, GUID *, __int64); // rdi
  __int64 v7; // rbx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned __int16 *v12; // rax
  __int64 (__fastcall **v14)(ApplicationViewHelpers *, GUID *, __int64); // rax
  __int64 (__fastcall *v15)(ApplicationViewHelpers *, GUID *, __int64); // rdi
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // r8
  HWND v19; // rbx
  __int64 (__fastcall *v20)(HWND, __int64); // rdi
  _QWORD *v21; // rax
  __int64 AddressOf; // rax
  int NormalDisplayNameWithTitleSafe; // eax
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v24; // rdx
  __int64 v25; // rdx
  HWND hWnd; // [rsp+20h] [rbp-E0h] BYREF
  struct IImmersiveApplication *v27; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v29; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h]
  __int64 v31; // [rsp+48h] [rbp-B8h]
  _BYTE v32[16]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR pString[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v3 = *this;
  v28 = 0LL;
  v6 = (int (__fastcall *)(ApplicationViewHelpers *, GUID *, __int64))*v3;
  v7 = *(_QWORD *)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v28, &hWnd, a3);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v7);
  if ( v6((ApplicationViewHelpers *)this, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v7) < 0 )
  {
    v14 = *this;
    hWnd = 0LL;
    v15 = *v14;
    v16 = *(_QWORD *)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&hWnd, v32, v8);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
    v17 = v15((ApplicationViewHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v16);
    v10 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
        (const char *)(unsigned int)v17,
        (int)hWnd);
    }
    else
    {
      v19 = hWnd;
      v27 = 0LL;
      v20 = *(__int64 (__fastcall **)(HWND, __int64))(*(_QWORD *)hWnd + 24LL);
      v21 = (_QWORD *)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v27, v32, v18);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(*v21);
      NormalDisplayNameWithTitleSafe = v20(v19, AddressOf);
      v10 = NormalDisplayNameWithTitleSafe;
      if ( NormalDisplayNameWithTitleSafe < 0 )
      {
        v25 = 39LL;
      }
      else
      {
        NormalDisplayNameWithTitleSafe = IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(v27, v24, a2);
        v10 = NormalDisplayNameWithTitleSafe;
        if ( NormalDisplayNameWithTitleSafe >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&hWnd);
          goto LABEL_5;
        }
        v25 = 41LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
        (const char *)(unsigned int)NormalDisplayNameWithTitleSafe,
        (int)hWnd);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&hWnd);
    goto LABEL_6;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v28 + 24LL))(v28, &hWnd);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
      (const char *)(unsigned int)v9,
      (int)hWnd);
    goto LABEL_6;
  }
  InternalGetWindowText(hWnd, pString, 260);
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          &v29,
          pString,
          -1LL);
  v10 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
      (const char *)(unsigned int)v11,
      (int)hWnd);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v29);
    goto LABEL_6;
  }
  v12 = v29;
  v29 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  *a2 = v12;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v29);
LABEL_5:
  v10 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
  return v10;
}
