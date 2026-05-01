/*
 * XREFs of ?RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@W4GhostDividerSize@@@Z @ 0x1805E7148
 * Callers:
 *     ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Z @ 0x1805E67C8 (--$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@UIPriviledgedPositioner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPriviledgedPositioner@@@Z @ 0x18013AB40 (--4-$ComPtr@UIPriviledgedPositioner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPriviledgedPositioner@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetColor@GhostDivider@@AEAAKXZ @ 0x1805E6D60 (-GetColor@GhostDivider@@AEAAKXZ.c)
 *     ?IsTransparencyEnabled@GhostDivider@@AEAA_NXZ @ 0x1805E6FF4 (-IsTransparencyEnabled@GhostDivider@@AEAA_NXZ.c)
 *     ?RegisterWindowClass@GhostDivider@@AEAAXXZ @ 0x1805E70C8 (-RegisterWindowClass@GhostDivider@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GhostDivider::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int ScaleFactorForMonitor; // eax
  unsigned int LastError; // ebx
  __int64 v13; // rdx
  _DWORD *v14; // rdi
  int v15; // edx
  unsigned __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // r8d
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  GhostDivider *v24; // rcx
  HWND Window; // rax
  const char *v26; // r9
  HWND v27; // rdi
  GhostDivider *v28; // rcx
  bool IsTransparencyEnabled; // al
  int v30; // eax
  HRESULT v31; // eax
  __int64 v32; // rdx
  void *v33; // rbx
  __int64 (__fastcall *v34)(void *, HWND, __int64, __int64); // r14
  IUnknown *punk; // [rsp+60h] [rbp-61h] BYREF
  void *ppvOut; // [rsp+68h] [rbp-59h] BYREF
  int pvAttribute; // [rsp+70h] [rbp-51h] BYREF
  __int64 v39; // [rsp+78h] [rbp-49h] BYREF
  int v40; // [rsp+80h] [rbp-41h] BYREF
  _DWORD *v41; // [rsp+88h] [rbp-39h]
  int v42; // [rsp+90h] [rbp-31h]
  HWND v43; // [rsp+98h] [rbp-29h]
  __int128 v44; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-11h] BYREF
  _DWORD v46[4]; // [rsp+C0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  *(_BYTE *)(a1 + 93) = a4 <= 1;
  punk = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&punk);
  ScaleFactorForMonitor = v9(a3, AddressOf);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 71LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    goto LABEL_45;
  }
  v45 = 0LL;
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(IUnknown *, __int128 *))punk->lpVtbl[3].Release)(punk, &v45);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 74LL;
    goto LABEL_11;
  }
  v44 = 0LL;
  ScaleFactorForMonitor = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 128LL))(a3, &v44);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 77LL;
    goto LABEL_11;
  }
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(IUnknown *, __int64 *))punk->lpVtbl[1].Release)(punk, &v39);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 80LL;
    goto LABEL_11;
  }
  v14 = (_DWORD *)(a1 + 72);
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v39, a1 + 72);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 81LL;
    goto LABEL_11;
  }
  if ( *(_BYTE *)(a1 + 93) )
  {
    v15 = 16 * *v14 / 100;
    *(_DWORD *)(a1 + 84) = v15;
    v16 = DWORD1(v44);
    if ( a5 )
      v17 = HIDWORD(v44) - DWORD1(v44);
    else
      v17 = HIDWORD(v45) - DWORD1(v45);
    *(_DWORD *)(a1 + 88) = v17;
    v18 = v15 / 2;
    v19 = v44;
    if ( a4 )
      v19 = DWORD2(v44);
    *(_DWORD *)(a1 + 76) = v19 - v18;
    if ( !a5 )
      v16 = DWORD1(v45);
  }
  else
  {
    v20 = v44;
    if ( a5 )
      v21 = DWORD2(v44) - v44;
    else
      v21 = DWORD2(v45) - v45;
    *(_DWORD *)(a1 + 84) = v21;
    v22 = 16 * *v14 / 100;
    *(_DWORD *)(a1 + 88) = v22;
    if ( !a5 )
      v20 = v45;
    *(_DWORD *)(a1 + 76) = v20;
    v23 = DWORD1(v44);
    if ( a4 != 2 )
      v23 = HIDWORD(v44);
    v16 = (unsigned int)(v23 - v22 / 2);
  }
  *(_DWORD *)(a1 + 80) = v16;
  *(_DWORD *)(a1 + 96) = GhostDivider::GetColor((GhostDivider *)v16);
  GhostDivider::RegisterWindowClass(v24);
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
  v27 = Window;
  v43 = Window;
  if ( !Window )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x71,
                  (int)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
                  v26);
    goto LABEL_43;
  }
  SetLayeredWindowAttributes(Window, 0, 0xFFu, 2u);
  v46[3] = 0;
  if ( (unsigned __int8)GetIsImmersiveColorUsingHighContrast(0LL)
    || (IsTransparencyEnabled = GhostDivider::IsTransparencyEnabled(v28), v46[0] = 4, !IsTransparencyEnabled) )
  {
    v46[0] = 1;
  }
  v46[2] = *(_DWORD *)(a1 + 96);
  v46[1] = *(_BYTE *)(a1 + 93) != 0 ? 161 : 321;
  v40 = 19;
  v41 = v46;
  v42 = 16;
  SetWindowCompositionAttribute(v27, &v40);
  pvAttribute = 1;
  DwmSetWindowAttribute(*(HWND *)(a1 + 24), 0xDu, &pvAttribute, 4u);
  SetWindowPos(v27, 0LL, *(_DWORD *)(a1 + 76), *(_DWORD *)(a1 + 80), *(_DWORD *)(a1 + 84), *(_DWORD *)(a1 + 88), 0x54u);
  v30 = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)a2 + 40LL))(a2, v27, -1LL);
  LastError = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (int)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)v30);
    goto LABEL_43;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v31 = IUnknown_QueryService(punk, &stru_18089FB10, &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41, &ppvOut);
  LastError = v31;
  if ( v31 >= 0 )
  {
    v33 = ppvOut;
    v34 = *(__int64 (__fastcall **)(void *, HWND, __int64, __int64))(*(_QWORD *)ppvOut + 56LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 48));
    v31 = v34(v33, v27, 1LL, a1 + 48);
    LastError = v31;
    if ( v31 >= 0 )
    {
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IPriviledgedPositioner>::operator=((__int64 *)(a1 + 32), a2);
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 40), a3);
      LastError = 0;
      goto LABEL_42;
    }
    v32 = 154LL;
  }
  else
  {
    v32 = 153LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v32,
    (int)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
    (const char *)(unsigned int)v31);
LABEL_42:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
LABEL_43:
  if ( v27 )
    DestroyWindow(v27);
LABEL_45:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
  return LastError;
}
