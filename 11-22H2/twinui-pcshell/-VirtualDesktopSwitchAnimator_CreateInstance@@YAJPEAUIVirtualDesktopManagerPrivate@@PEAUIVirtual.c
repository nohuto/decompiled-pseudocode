/*
 * XREFs of ?VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x180147798
 * Callers:
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180145BA0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopSwitchAnimator@@UIWeakReferenceSource@@UIVirtualDesktopSwitchAnimator2@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180147728 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopSwitchA.c)
 *     ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x180147878 (--$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@IEAAKXZ @ 0x180197664 (-InternalRelease@-$ComPtr@VVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopSwitchAnimator_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopAnimationSyncNotificationServicePrivate *a2,
        struct IMultitaskingViewVisibilityService *a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  int CanCastTo; // ebx
  _DWORD *v8; // rcx
  _DWORD *v9; // r9
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  void *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopManagerPrivate *v15; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopAnimationSyncNotificationServicePrivate *v16; // [rsp+48h] [rbp+28h] BYREF
  struct IMultitaskingViewVisibilityService *v17; // [rsp+50h] [rbp+30h] BYREF
  void *v18; // [rsp+58h] [rbp+38h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v5 = a5;
  *a5 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopSwitchAnimator>::InternalRelease(&v18);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopSwitchAnimator,VirtualDesktopSwitchAnimator,IVirtualDesktopManagerPrivate * &,IVirtualDesktopAnimationSyncNotificationServicePrivate * &,IMultitaskingViewVisibilityService * &>(
         &v18,
         &v15,
         &v16,
         &v17);
  CanCastTo = v6;
  if ( v6 < 0 )
  {
    v11 = (unsigned int)v6;
    v12 = 406LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)v11);
    goto LABEL_7;
  }
  *v5 = 0LL;
  if ( InlineIsEqualGUID(&GUID_907b2c66_7a43_4ab6_8800_edbee992f3b2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v13 = v18;
    *v5 = v18;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopSwitchAnimator,IWeakReferenceSource,IVirtualDesktopSwitchAnimator2>::CanCastTo(
                  (__int64)v18 + 8,
                  v9);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v5 + 8LL))(*v5);
  }
  if ( CanCastTo < 0 )
  {
    v11 = (unsigned int)CanCastTo;
    v12 = 407LL;
    goto LABEL_11;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<VirtualDesktopSwitchAnimator>::InternalRelease(&v18);
  return (unsigned int)CanCastTo;
}
