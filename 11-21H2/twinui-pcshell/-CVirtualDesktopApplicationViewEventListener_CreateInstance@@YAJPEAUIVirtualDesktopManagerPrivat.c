/*
 * XREFs of ?CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1801114B0
 * Callers:
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800DD660 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopApplicationViewEventListener@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180111598 (--$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopMana.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopApplicationViewEventListener@@@WRL@Microsoft@@IEAAKXZ @ 0x180127010 (-InternalRelease@-$ComPtr@VCVirtualDesktopApplicationViewEventListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopApplicationViewEventListener_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopSwitchAnimator *a2,
        struct IVirtualDesktopForegroundPolicy *a3,
        struct IVirtualDesktopWindowMoveManager *a4,
        struct IVirtualDesktopPinnedAppsPrivate *a5,
        struct IVirtualDesktopLock *a6,
        const struct _GUID *a7,
        void **a8)
{
  void **v8; // rdi
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // rcx
  _DWORD *v12; // r9
  const struct _GUID *v13; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int CanCastTo; // eax
  void **v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IVirtualDesktopManagerPrivate *v20; // [rsp+60h] [rbp+20h] BYREF
  struct IVirtualDesktopSwitchAnimator *v21; // [rsp+68h] [rbp+28h] BYREF
  struct IVirtualDesktopForegroundPolicy *v22; // [rsp+70h] [rbp+30h] BYREF
  struct IVirtualDesktopWindowMoveManager *v23; // [rsp+78h] [rbp+38h] BYREF

  v23 = a4;
  v22 = a3;
  v21 = a2;
  v20 = a1;
  v8 = a8;
  *a8 = 0LL;
  a8 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopApplicationViewEventListener>::InternalRelease(&a8);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopApplicationViewEventListener,CVirtualDesktopApplicationViewEventListener,IVirtualDesktopManagerPrivate * &,IVirtualDesktopSwitchAnimator * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopWindowMoveManager * &,IVirtualDesktopPinnedAppsPrivate * &,IVirtualDesktopLock * &>(
         (unsigned int)&a8,
         (unsigned int)&v20,
         (unsigned int)&v21,
         (unsigned int)&v22,
         (__int64)&v23,
         (__int64)&a5,
         (__int64)&a6);
  v10 = v9;
  if ( v9 < 0 )
  {
    v15 = (unsigned int)v9;
    v16 = 144LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
      (const char *)v15);
    goto LABEL_7;
  }
  *v8 = 0LL;
  if ( InlineIsEqualGUID(&GUID_727f9e97_76ee_497b_a942_b6371328485c, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v18 = a8;
    *v8 = a8;
    (*((void (__fastcall **)(void **))*v18 + 1))(v18);
    v10 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v11, v12) )
    {
      *v8 = a8;
      v10 = 0;
LABEL_5:
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v8 + 8LL))(*v8);
      goto LABEL_6;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a8 + 1), v13, v8);
    v10 = -2147467262;
    if ( CanCastTo != -2147467262 )
    {
      v10 = CanCastTo;
      if ( CanCastTo >= 0 )
        goto LABEL_5;
    }
  }
LABEL_6:
  if ( v10 < 0 )
  {
    v15 = (unsigned int)v10;
    v16 = 145LL;
    goto LABEL_14;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<CVirtualDesktopApplicationViewEventListener>::InternalRelease(&a8);
  return (unsigned int)v10;
}
