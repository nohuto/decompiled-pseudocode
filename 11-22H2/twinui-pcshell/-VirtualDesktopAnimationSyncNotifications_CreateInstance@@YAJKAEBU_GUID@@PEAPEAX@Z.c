/*
 * XREFs of ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x180191BF8
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800FAD6C (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0VirtualDesktopAnimationSyncNotifications@@QEAA@XZ @ 0x1800FEDC0 (--0VirtualDesktopAnimationSyncNotifications@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180140140 (-InternalRelease@-$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopAnimationSyncNotifications_CreateInstance(int a1, const struct _GUID *a2, void **a3)
{
  VirtualDesktopAnimationSyncNotifications *v5; // rax
  VirtualDesktopAnimationSyncNotifications *v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // rcx
  _DWORD *v10; // r9
  _DWORD *v11; // rcx
  const struct _GUID *v12; // r9
  int CanCastTo; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  const struct _GUID *v18; // [rsp+38h] [rbp+18h] BYREF
  __int64 v19; // [rsp+40h] [rbp+20h] BYREF

  v18 = a2;
  *a3 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(&v19);
  v19 = 0LL;
  v5 = (VirtualDesktopAnimationSyncNotifications *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = (const struct _GUID *)v5;
  if ( !v5 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v18);
    CanCastTo = -2147024882;
    v15 = 149LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
      (const char *)(unsigned int)CanCastTo);
    goto LABEL_11;
  }
  v6 = VirtualDesktopAnimationSyncNotifications::VirtualDesktopAnimationSyncNotifications(v5);
  v18 = (const struct _GUID *)v6;
  *((_DWORD *)v6 + 22) = a1;
  Microsoft::WRL::Details::SafeUnknownIncrementReference(
    (VirtualDesktopAnimationSyncNotifications *)((char *)v6 + 44),
    v7);
  v19 = v8;
  Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease((__int64 *)&v18);
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_5c757a3f_6157_41b3_a760_926c0b131916, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v16 = v19;
    *a3 = (void *)v19;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v9, v10) || InlineIsEqualGUID(v11, &GUID_0ddaf2d8_c38f_4638_95fc_fb9c6ddae52f) )
    {
      *a3 = (void *)v19;
      CanCastTo = 0;
LABEL_9:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      goto LABEL_10;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v19 + 8), v12, a3);
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
    if ( CanCastTo >= 0 )
      goto LABEL_9;
  }
LABEL_10:
  if ( CanCastTo < 0 )
  {
    v15 = 150LL;
    goto LABEL_15;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(&v19);
  return (unsigned int)CanCastTo;
}
