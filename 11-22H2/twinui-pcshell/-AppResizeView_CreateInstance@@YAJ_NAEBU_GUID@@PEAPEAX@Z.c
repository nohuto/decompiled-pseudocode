/*
 * XREFs of ?AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z @ 0x1805D691C
 * Callers:
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x1805C3FF0 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0AppResizeView@@QEAA@XZ @ 0x1805D64EC (--0AppResizeView@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIAppResizeView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1805D6A58 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1805D6A58.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeView@@@WRL@Microsoft@@IEAAKXZ @ 0x1805D7590 (-InternalRelease@-$ComPtr@VAppResizeView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeView_CreateInstance(char a1, const struct _GUID *a2, void **a3)
{
  AppResizeView *v5; // rax
  int CanCastTo; // ebx
  __int64 v7; // rdx
  AppResizeView *v8; // rax
  volatile int *v9; // rdx
  void *v10; // r8
  __int64 v11; // rcx
  void *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v15; // [rsp+38h] [rbp+10h] BYREF
  AppResizeView *v16; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<AppResizeView>::InternalRelease(&v15);
  v15 = 0LL;
  v5 = (AppResizeView *)operator new(0x1E0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v5;
  if ( !v5 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v16);
    CanCastTo = -2147024882;
    v7 = 766LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)CanCastTo);
    goto LABEL_10;
  }
  v8 = AppResizeView::AppResizeView(v5);
  v16 = v8;
  *((_BYTE *)v8 + 476) = a1;
  Microsoft::WRL::Details::SafeUnknownIncrementReference((AppResizeView *)((char *)v8 + 52), v9);
  v15 = v10;
  Microsoft::WRL::ComPtr<AppResizeView>::InternalRelease(&v16);
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_be98f7f1_c8ba_4e0f_baa2_e07d8df9b391, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v12 = v15;
    *a3 = v15;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 8LL))(v12);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IAppResizeView,ITabletModeInputCallback,IApplicationViewChangeListener>::CanCastTo(
                  v15,
                  v11,
                  a3);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  if ( CanCastTo < 0 )
  {
    v7 = 767LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<AppResizeView>::InternalRelease(&v15);
  return (unsigned int)CanCastTo;
}
