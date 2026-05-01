/*
 * XREFs of ?RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@W4GhostDividerSize@@@Z @ 0x18052C2A8
 * Callers:
 *     ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Z @ 0x18052B868 (--$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     ??4?$ComPtr@UIPriviledgedPositioner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPriviledgedPositioner@@@Z @ 0x1800FE704 (--4-$ComPtr@UIPriviledgedPositioner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPriviledgedPositioner@@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1801712D0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18052A514 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?GetColor@GhostDivider@@AEAAKXZ @ 0x18052BE1C (-GetColor@GhostDivider@@AEAAKXZ.c)
 *     ?GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18052BEB8 (-GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?IsTransparencyEnabled@GhostDivider@@AEAA_NXZ @ 0x18052C14C (-IsTransparencyEnabled@GhostDivider@@AEAA_NXZ.c)
 *     ?RegisterWindowClass@GhostDivider@@AEAAXXZ @ 0x18052C228 (-RegisterWindowClass@GhostDivider@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GhostDivider::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64),
        __int64 a4,
        int a5)
{
  unsigned int v5; // esi
  __int64 (__fastcall *v9)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  __int64 *AddressOf; // rax
  int ScaleFactorForMonitor; // eax
  unsigned int LastError; // ebx
  __int64 v13; // rdx
  _DWORD *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edx
  int v20; // eax
  GhostDivider *v21; // rcx
  GhostDivider *v22; // rcx
  GhostDivider *v23; // rcx
  HWND Window; // rax
  const char *v25; // r9
  HWND v26; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  GhostDivider *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  bool IsTransparencyEnabled; // al
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r9
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  HRESULT v41; // eax
  __int64 v42; // rdx
  void *v43; // rbx
  __int64 (__fastcall *v44)(void *, HWND, __int64, __int64); // r14
  __int64 v45; // r8
  __int64 v46; // r9
  IUnknown *punk; // [rsp+60h] [rbp-61h] BYREF
  void *ppvOut; // [rsp+68h] [rbp-59h] BYREF
  int pvAttribute; // [rsp+70h] [rbp-51h] BYREF
  __int64 v51; // [rsp+78h] [rbp-49h] BYREF
  int v52; // [rsp+80h] [rbp-41h] BYREF
  _DWORD *v53; // [rsp+88h] [rbp-39h]
  int v54; // [rsp+90h] [rbp-31h]
  HWND v55; // [rsp+98h] [rbp-29h]
  __int128 v56; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v57; // [rsp+B0h] [rbp-11h] BYREF
  _DWORD v58[4]; // [rsp+C0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  v5 = a4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  *(_BYTE *)(a1 + 93) = v5 <= 1;
  punk = 0LL;
  v9 = (*a3)[10];
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&punk);
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int64 *))v9)(
                            a3,
                            AddressOf);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 79LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    goto LABEL_47;
  }
  v57 = 0LL;
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(IUnknown *, __int128 *))punk->lpVtbl[3].Release)(punk, &v57);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 82LL;
    goto LABEL_11;
  }
  v56 = 0LL;
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int128 *))(*a3)[16])(
                            a3,
                            &v56);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 85LL;
    goto LABEL_11;
  }
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(IUnknown *, __int64 *))punk->lpVtbl[1].Release)(punk, &v51);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 88LL;
    goto LABEL_11;
  }
  v14 = (_DWORD *)(a1 + 72);
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v51, a1 + 72);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 89LL;
    goto LABEL_11;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    v15,
    v16);
  if ( *(_BYTE *)(a1 + 93) )
  {
    *(_DWORD *)(a1 + 84) = 16 * *v14 / 100;
    if ( a5 )
      v19 = HIDWORD(v56) - DWORD1(v56);
    else
      v19 = HIDWORD(v57) - DWORD1(v57);
  }
  else
  {
    if ( a5 )
      v20 = DWORD2(v56) - v56;
    else
      v20 = DWORD2(v57) - v57;
    *(_DWORD *)(a1 + 84) = v20;
    v19 = 16 * *v14 / 100;
  }
  *(_DWORD *)(a1 + 88) = v19;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
    1u,
    v17,
    v18);
  *(_DWORD *)(a1 + 96) = GhostDivider::GetColor(v21);
  GhostDivider::GetPreviousWindow(v22, a3);
  GhostDivider::RegisterWindowClass(v23);
  Window = CreateWindowExW(
             0x82800A0u,
             L"GhostDivider",
             &LocaleName,
             0x80000000,
             0,
             0,
             0,
             0,
             0LL,
             0LL,
             &_ImageBase,
             (LPVOID)a1);
  v26 = Window;
  v55 = Window;
  if ( !Window )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x8B,
                  (int)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
                  v25);
    goto LABEL_45;
  }
  SetLayeredWindowAttributes(Window, 0, 0xFFu, 2u);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
    1u,
    v27,
    v28);
  v58[3] = 0;
  if ( (unsigned __int8)GetIsImmersiveColorUsingHighContrast(0LL)
    || (IsTransparencyEnabled = GhostDivider::IsTransparencyEnabled(v29), v58[0] = 4, !IsTransparencyEnabled) )
  {
    v58[0] = 1;
  }
  v58[2] = *(_DWORD *)(a1 + 96);
  v58[1] = *(_BYTE *)(a1 + 93) != 0 ? 161 : 321;
  v52 = 19;
  v53 = v58;
  v54 = 16;
  SetWindowCompositionAttribute(v26, &v52, v30, v31);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    v33,
    v34);
  if ( *(_BYTE *)(a1 + 93) )
  {
    v36 = v56;
    if ( v5 )
      v36 = DWORD2(v56);
    *(_DWORD *)(a1 + 76) = v36 - *(_DWORD *)(a1 + 84) / 2;
    v37 = DWORD1(v56);
    if ( !a5 )
      v37 = DWORD1(v57);
  }
  else
  {
    v38 = v56;
    if ( !a5 )
      v38 = v57;
    *(_DWORD *)(a1 + 76) = v38;
    v39 = DWORD1(v56);
    if ( v5 != 2 )
      v39 = HIDWORD(v56);
    v37 = v39 - *(_DWORD *)(a1 + 88) / 2;
  }
  *(_DWORD *)(a1 + 80) = v37;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
    1u,
    2LL,
    v35);
  pvAttribute = 1;
  DwmSetWindowAttribute(*(HWND *)(a1 + 24), 0xDu, &pvAttribute, 4u);
  SetWindowPos(v26, 0LL, *(_DWORD *)(a1 + 76), *(_DWORD *)(a1 + 80), *(_DWORD *)(a1 + 84), *(_DWORD *)(a1 + 88), 0x54u);
  v40 = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)a2 + 40LL))(a2, v26, -1LL);
  LastError = v40;
  if ( v40 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)v40);
    goto LABEL_45;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v41 = IUnknown_QueryService(punk, &stru_1806EBA90, &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41, &ppvOut);
  LastError = v41;
  if ( v41 >= 0 )
  {
    v43 = ppvOut;
    v44 = *(__int64 (__fastcall **)(void *, HWND, __int64, __int64))(*(_QWORD *)ppvOut + 56LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 48));
    v41 = v44(v43, v26, 1LL, a1 + 48);
    LastError = v41;
    if ( v41 >= 0 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
        1u,
        v45,
        v46);
      v26 = 0LL;
      Microsoft::WRL::ComPtr<IPriviledgedPositioner>::operator=((__int64 *)(a1 + 32), a2);
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 40), (__int64)a3);
      LastError = 0;
      goto LABEL_44;
    }
    v42 = 207LL;
  }
  else
  {
    v42 = 206LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v42,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
    (const char *)(unsigned int)v41);
LABEL_44:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
LABEL_45:
  if ( v26 )
    DestroyWindow(v26);
LABEL_47:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
  return LastError;
}
