/*
 * XREFs of ?_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804AE2BC
 * Callers:
 *     ?EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804AB340 (-EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804AB480 (-ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B0808 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x180026A20 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180057794 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180074D98 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804ADFF0 (-_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigu.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1804AE9B8 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::_EnsureHolographicViewConfiguration(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  HolographicPositioner *v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h]
  __int128 v14; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int v16; // [rsp+A0h] [rbp+30h] BYREF
  struct IApplicationViewTitlebarConfiguration *v17; // [rsp+A8h] [rbp+38h] BYREF

  HolographicPositioner::_FindViewHostItem(this, &v11, a2);
  v3 = v11;
  if ( v11 )
  {
    DWORD1(v13) = 0;
    HIDWORD(v13) = 0;
    *(_QWORD *)((char *)&v14 + 4) = 0LL;
    v16 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 112LL))(v11, &v16);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x740,
        (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v4);
LABEL_11:
      v3 = v11;
      goto LABEL_14;
    }
    LODWORD(v13) = v16 == 1;
    DWORD2(v13) = 1;
    LODWORD(v14) = 1;
    HIDWORD(v14) = 1;
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(v12);
    v6 = v12[0];
    if ( !v12[0] )
    {
      v5 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74C,
        (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)0x8007000ELL);
LABEL_10:
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(v12);
      goto LABEL_11;
    }
    *(_OWORD *)(v12[0] + 132) = 0LL;
    *(_OWORD *)(v6 + 148) = v13;
    *(_OWORD *)(v6 + 164) = v14;
    *(_BYTE *)(v6 + 128) = 1;
    *(_DWORD *)(v6 + 116) = 255;
    *(_DWORD *)(v6 + 120) = 16;
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
    v8 = HolographicPositioner::_CreateTitleBarConfiguration(v7, &v17);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x754,
        (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)(v6 + 192), (__int64)v17);
    *(_DWORD *)(v6 + 124) = 0;
    *(_QWORD *)(v6 + 220) = 0LL;
    *(_QWORD *)(v6 + 228) = 0LL;
    *(_QWORD *)(v6 + 204) = 0LL;
    *(_QWORD *)(v6 + 212) = 0LL;
    *(_BYTE *)(v6 + 236) = 1;
    *(_QWORD *)(v6 + 240) = 0LL;
    *(_DWORD *)(v6 + 80) = 2;
    *(_DWORD *)(v6 + 180) = 8;
    v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v6);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x764,
        (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(v12);
    v3 = v11;
  }
  v5 = 0;
LABEL_14:
  if ( v3 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v5;
}
