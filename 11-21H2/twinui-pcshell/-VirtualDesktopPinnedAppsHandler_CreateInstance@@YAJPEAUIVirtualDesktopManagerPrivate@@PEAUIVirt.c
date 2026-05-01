/*
 * XREFs of ?VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180110458
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800DE300 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualPinnedAppsHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1801105BC (--$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopPinnedAppsHandler_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopRegistryHelpers *a2,
        struct IVirtualDesktopVisibilityPolicy *a3,
        struct IVirtualDesktopGroupedViewsPolicy *a4,
        struct IVirtualDesktopLock *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IVirtualDesktopManagerPrivate *v13; // [rsp+50h] [rbp+20h] BYREF
  struct IVirtualDesktopRegistryHelpers *v14; // [rsp+58h] [rbp+28h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v15; // [rsp+60h] [rbp+30h] BYREF
  struct IVirtualDesktopGroupedViewsPolicy *v16; // [rsp+68h] [rbp+38h] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v13 = a1;
  v7 = a7;
  *a7 = 0LL;
  a7 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a7);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<VirtualPinnedAppsHandler,VirtualPinnedAppsHandler,IVirtualDesktopManagerPrivate * &,IVirtualDesktopRegistryHelpers * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopGroupedViewsPolicy * &,IVirtualDesktopLock * &>(
         (unsigned int)&a7,
         (unsigned int)&v13,
         (unsigned int)&v14,
         (unsigned int)&v15,
         (__int64)&v16,
         (__int64)&a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 380LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_3;
  }
  v8 = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a7)(a7, &GUID_eb8033b6_74a3_4bd8_9b46_400d380a753c, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 381LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a7);
  return v9;
}
