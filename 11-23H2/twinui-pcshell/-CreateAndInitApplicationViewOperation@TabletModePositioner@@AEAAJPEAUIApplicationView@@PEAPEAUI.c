/*
 * XREFs of ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1805BAFE0
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1805B8FC4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x1805B9CC8 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1805BA030 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1805BD330 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 * Callees:
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x180026A20 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180057794 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWindowingEnvironmentConfig@@@Z @ 0x1800588CC (--4-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWindowingEnvironmentC.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180074D98 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803ECA80 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1803ECA80.c)
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1805BB244 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositioner::CreateAndInitApplicationViewOperation(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewOperation **a3)
{
  __int64 v5; // rbx
  int CanCastTo; // ebx
  __int64 v7; // rsi
  void (__fastcall *v8)(__int64, __int64, __int64 *); // rdi
  struct IApplicationView *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // r9
  _DWORD *v13; // rdx
  _BYTE v15[24]; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IApplicationViewTitlebarConfiguration *v17; // [rsp+88h] [rbp+38h] BYREF
  __int64 v18; // [rsp+90h] [rbp+40h] BYREF
  __int64 v19; // [rsp+98h] [rbp+48h] BYREF

  v17 = a2;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v19);
  v5 = v19;
  if ( !v19 )
  {
    CanCastTo = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC57,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_14;
  }
  *(_DWORD *)(v19 + 116) = 255;
  *(_DWORD *)(v5 + 120) = 23;
  *(_DWORD *)(v5 + 180) = 1;
  *(_DWORD *)(v5 + 200) = 0;
  *(_QWORD *)(v5 + 220) = 0LL;
  *(_QWORD *)(v5 + 228) = 0LL;
  *(_QWORD *)(v5 + 204) = 0LL;
  *(_QWORD *)(v5 + 212) = 0LL;
  *(_BYTE *)(v5 + 236) = 1;
  *(_QWORD *)(v5 + 240) = 0LL;
  v18 = 0LL;
  v7 = *((_QWORD *)this + 56);
  v8 = *(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  v8(v7, 2LL, &v18);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::operator=((__int64 *)(v5 + 184), v18);
  *(_QWORD *)v15 = 0LL;
  *(__m128i *)&v15[8] = _mm_load_si128((const __m128i *)&_xmm);
  *(_OWORD *)(v5 + 132) = 0LL;
  *(_OWORD *)(v5 + 148) = *(_OWORD *)v15;
  *(_OWORD *)(v5 + 164) = *(unsigned __int64 *)&v15[16];
  *(_BYTE *)(v5 + 128) = 1;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  TabletModePositioner::CreateTitlebarConfiguration(v9, &v17);
  Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)(v5 + 192), (__int64)v17);
  *(_DWORD *)(v5 + 124) = 1;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_cc6192be_2002_4cd1_a603_e3b6795b4000, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v10, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a3 = (struct IApplicationViewOperation *)v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    CanCastTo = 0;
    goto LABEL_10;
  }
  if ( InlineIsEqualGUID(v11, v12) )
  {
    *a3 = (struct IApplicationViewOperation *)v5;
    CanCastTo = 0;
LABEL_8:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    goto LABEL_10;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::CanCastTo(
                v5 + 8,
                v13);
  if ( CanCastTo >= 0 )
    goto LABEL_8;
LABEL_10:
  if ( CanCastTo >= 0 )
    CanCastTo = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC76,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)CanCastTo);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
LABEL_14:
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v19);
  return (unsigned int)CanCastTo;
}
