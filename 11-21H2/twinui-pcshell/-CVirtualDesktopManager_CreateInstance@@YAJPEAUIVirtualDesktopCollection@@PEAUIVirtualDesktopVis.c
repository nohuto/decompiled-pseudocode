/*
 * XREFs of ?CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800B5868
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800DE300 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1800B5544 (--$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtu.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWeakReferenceSource@@UIVirtualDesktopManagerInternal@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DAC3C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@U-$Chai.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18013B9E0 (-InternalRelease@-$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopManager_CreateInstance(
        struct IVirtualDesktopCollection *a1,
        struct IVirtualDesktopVisibilityPolicy *a2,
        struct IVirtualDesktopNotification *a3,
        struct IVirtualDesktopForegroundPolicy *a4,
        struct IVirtualDesktopPersistence *a5,
        struct IVirtualDesktopGroupedViewsPolicy *a6,
        struct IVirtualDesktopLock *a7,
        const struct _GUID *a8,
        void **a9)
{
  void **v9; // rdi
  int v10; // eax
  int CanCastTo; // ebx
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  void **v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IVirtualDesktopCollection *v19; // [rsp+60h] [rbp+20h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v20; // [rsp+68h] [rbp+28h] BYREF
  struct IVirtualDesktopNotification *v21; // [rsp+70h] [rbp+30h] BYREF
  struct IVirtualDesktopForegroundPolicy *v22; // [rsp+78h] [rbp+38h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  v9 = a9;
  *a9 = 0LL;
  a9 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease(&a9);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopManager,CVirtualDesktopManager,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopNotification * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopPersistence * &,IVirtualDesktopGroupedViewsPolicy * &,IVirtualDesktopLock * &>(
          (volatile signed __int64 **)&a9,
          &v19,
          &v20,
          &v21,
          &v22,
          &a5,
          &a6,
          &a7);
  CanCastTo = v10;
  if ( v10 < 0 )
  {
    v15 = (unsigned int)v10;
    v16 = 1929LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v15);
    goto LABEL_7;
  }
  *v9 = 0LL;
  if ( InlineIsEqualGUID(&GUID_b0be15a1_5751_488a_9673_448b5ef2d919, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v12, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v17 = a9;
    *v9 = a9;
    (*((void (__fastcall **)(void **))*v17 + 1))(v17);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerPrivate,IVirtualDesktopManagerInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,IVirtualDesktopManagerInternal,ISuspendableVirtualDesktopManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::CanCastTo(
                  a9,
                  v13,
                  v9);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v9 + 8LL))(*v9);
  }
  if ( CanCastTo < 0 )
  {
    v15 = (unsigned int)CanCastTo;
    v16 = 1930LL;
    goto LABEL_11;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease(&a9);
  return (unsigned int)CanCastTo;
}
