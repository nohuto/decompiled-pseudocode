/*
 * XREFs of ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0D10
 * Callers:
 *     ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x1800B0638 (-RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ScreenManager@@QEAA@XZ @ 0x1800B0E0C (--0ScreenManager@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1801573AC (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18018FE0C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerManagerNotification@@UIApplicationViewChangeListener@@UIScreenManagerTestHook@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18050D1CC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerM.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ScreenManager_CreateInstance(const struct _GUID *a1, ScreenManager **a2)
{
  ScreenManager *v3; // rax
  ScreenManager *v4; // rax
  volatile int *v5; // rdx
  ScreenManager *v6; // r9
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rcx
  int CanCastTo; // ebx
  __int64 v12; // rdx
  ScreenManager *v13; // r8
  __int64 v14; // r9
  ScreenManager *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  ScreenManager *v17; // [rsp+30h] [rbp+10h] BYREF
  ScreenManager *v18; // [rsp+38h] [rbp+18h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(&v17);
  v17 = 0LL;
  v3 = (ScreenManager *)operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v18);
    CanCastTo = -2147024882;
    v12 = 334LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)(unsigned int)CanCastTo);
    goto LABEL_10;
  }
  v4 = ScreenManager::ScreenManager(v3);
  v6 = v4;
  v18 = v4;
  if ( v4 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((ScreenManager *)((char *)v4 + 44), v5);
  v17 = v6;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(&v18);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_d14291a4_8dc6_4788_b850_8b00ca5c80e0, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v15 = v17;
    *a2 = v17;
    (*(void (__fastcall **)(ScreenManager *))(*(_QWORD *)v15 + 8LL))(v15);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v7, v8) )
    {
      *a2 = v17;
LABEL_7:
      CanCastTo = 0;
LABEL_8:
      (*(void (__fastcall **)(ScreenManager *))(*(_QWORD *)*a2 + 8LL))(*a2);
      goto LABEL_9;
    }
    if ( InlineIsEqualGUID(v9, &GUID_859cc9da_cb27_4a90_b8fa_749bb1944473) )
    {
      *a2 = v13;
      goto LABEL_7;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModePositionerManagerNotification,IApplicationViewChangeListener,IScreenManagerTestHook>::CanCastTo(
                  (char *)v13 + 8,
                  v14,
                  a2);
    if ( CanCastTo >= 0 )
      goto LABEL_8;
  }
LABEL_9:
  if ( CanCastTo < 0 )
  {
    v12 = 335LL;
    goto LABEL_18;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(&v17);
  return (unsigned int)CanCastTo;
}
