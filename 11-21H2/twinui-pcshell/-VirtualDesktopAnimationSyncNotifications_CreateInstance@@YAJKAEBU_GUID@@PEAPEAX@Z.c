/*
 * XREFs of ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x180101DE4
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800DE300 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0VirtualDesktopAnimationSyncNotifications@@QEAA@XZ @ 0x180101F10 (--0VirtualDesktopAnimationSyncNotifications@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopAnimationSyncNotifications@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C908 (-InternalRelease@-$ComPtr@VVirtualDesktopAnimationSyncNotifications@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18018FE0C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopAnimationSyncNotifications_CreateInstance(int a1, const struct _GUID *a2, void **a3)
{
  VirtualDesktopAnimationSyncNotifications *v5; // rax
  VirtualDesktopAnimationSyncNotifications *v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // r9
  _DWORD *v9; // rcx
  _DWORD *v10; // r9
  _DWORD *v11; // rcx
  const struct _GUID *v12; // r9
  int v13; // ebx
  int CanCastTo; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v19; // [rsp+38h] [rbp+18h] BYREF
  VirtualDesktopAnimationSyncNotifications *v20; // [rsp+40h] [rbp+20h] BYREF

  *a3 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopAnimationSyncNotifications>::InternalRelease(&v19);
  v19 = 0LL;
  v5 = (VirtualDesktopAnimationSyncNotifications *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v5;
  if ( !v5 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v20);
    v13 = -2147024882;
    v16 = 149LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_8;
  }
  v6 = VirtualDesktopAnimationSyncNotifications::VirtualDesktopAnimationSyncNotifications(v5);
  v20 = v6;
  *((_DWORD *)v6 + 22) = a1;
  Microsoft::WRL::Details::SafeUnknownIncrementReference(
    (VirtualDesktopAnimationSyncNotifications *)((char *)v6 + 44),
    v7);
  v19 = v8;
  Microsoft::WRL::ComPtr<VirtualDesktopAnimationSyncNotifications>::InternalRelease(&v20);
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_5c757a3f_6157_41b3_a760_926c0b131916, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v17 = v19;
    *a3 = (void *)v19;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v13 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v9, v10) || InlineIsEqualGUID(v11, &GUID_0ddaf2d8_c38f_4638_95fc_fb9c6ddae52f) )
    {
      *a3 = (void *)v19;
      v13 = 0;
LABEL_6:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      goto LABEL_7;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v19 + 8), v12, a3);
    v13 = -2147467262;
    if ( CanCastTo != -2147467262 )
    {
      v13 = CanCastTo;
      if ( CanCastTo >= 0 )
        goto LABEL_6;
    }
  }
LABEL_7:
  if ( v13 < 0 )
  {
    v16 = 150LL;
    goto LABEL_15;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<VirtualDesktopAnimationSyncNotifications>::InternalRelease(&v19);
  return (unsigned int)v13;
}
