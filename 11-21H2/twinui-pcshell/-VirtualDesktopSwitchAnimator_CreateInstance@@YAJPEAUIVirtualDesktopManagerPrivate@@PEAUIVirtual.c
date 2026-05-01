/*
 * XREFs of ?VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1801113CC
 * Callers:
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800DD660 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18005DEE8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x18011242C (--$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@IEAAKXZ @ 0x180161E0C (-InternalRelease@-$ComPtr@VVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
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
  _DWORD *v9; // rcx
  _DWORD *v10; // r9
  _DWORD *v11; // rdx
  void *v12; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  void *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopManagerPrivate *v18; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopAnimationSyncNotificationServicePrivate *v19; // [rsp+48h] [rbp+28h] BYREF
  struct IMultitaskingViewVisibilityService *v20; // [rsp+50h] [rbp+30h] BYREF
  void *v21; // [rsp+58h] [rbp+38h] BYREF

  v20 = a3;
  v19 = a2;
  v18 = a1;
  v5 = a5;
  *a5 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopSwitchAnimator>::InternalRelease(&v21);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopSwitchAnimator,VirtualDesktopSwitchAnimator,IVirtualDesktopManagerPrivate * &,IVirtualDesktopAnimationSyncNotificationServicePrivate * &,IMultitaskingViewVisibilityService * &>(
         &v21,
         &v18,
         &v19,
         &v20);
  CanCastTo = v6;
  if ( v6 < 0 )
  {
    v14 = (unsigned int)v6;
    v15 = 123LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)v14);
    goto LABEL_8;
  }
  *v5 = 0LL;
  if ( InlineIsEqualGUID(&GUID_aa4b02c1_ff78_4a62_a203_61af272897c3, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v16 = v21;
    *v5 = v21;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 8LL))(v16);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v9, v10) )
    {
      *v5 = v12;
      CanCastTo = 0;
LABEL_6:
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v5 + 8LL))(*v5);
      goto LABEL_7;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>::CanCastTo(
                  (__int64)v12 + 8,
                  v11,
                  v5);
    if ( CanCastTo >= 0 )
      goto LABEL_6;
  }
LABEL_7:
  if ( CanCastTo < 0 )
  {
    v14 = (unsigned int)CanCastTo;
    v15 = 124LL;
    goto LABEL_14;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<VirtualDesktopSwitchAnimator>::InternalRelease(&v21);
  return (unsigned int)CanCastTo;
}
