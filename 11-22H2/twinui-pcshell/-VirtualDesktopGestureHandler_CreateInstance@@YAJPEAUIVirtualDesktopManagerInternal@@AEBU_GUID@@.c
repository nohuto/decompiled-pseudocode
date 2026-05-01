/*
 * XREFs of ?VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1801082B4
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800FAD6C (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UITouchpadGesture@@UITouchSwipe@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180108238 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UITouchpadGesture@@UIT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopGestureHandler@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopGestureHandler@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x18013C8CC (--$MakeAndInitialize@VVirtualDesktopGestureHandler@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@D.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopGestureHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180140324 (-InternalRelease@-$ComPtr@VVirtualDesktopGestureHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureHandler_CreateInstance(
        struct IVirtualDesktopManagerInternal *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  int CanCastTo; // ebx
  _DWORD *v6; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  void *v10; // rcx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktopManagerInternal *v13; // [rsp+30h] [rbp+8h] BYREF
  void *v14; // [rsp+38h] [rbp+10h] BYREF

  v13 = a1;
  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopGestureHandler>::InternalRelease(&v14);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopGestureHandler,VirtualDesktopGestureHandler,IVirtualDesktopManagerInternal * &>(
         &v14,
         &v13);
  CanCastTo = v4;
  if ( v4 < 0 )
  {
    v8 = (unsigned int)v4;
    v9 = 1853LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)v8,
      v11);
    goto LABEL_6;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_9cdd8553_04f2_4be1_8210_4911258c7d0e, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v14;
    *a3 = v14;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,ITouchpadGesture,ITouchSwipe,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
                  (__int64)v14,
                  v6);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  if ( CanCastTo < 0 )
  {
    v8 = (unsigned int)CanCastTo;
    v9 = 1854LL;
    goto LABEL_10;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<VirtualDesktopGestureHandler>::InternalRelease(&v14);
  return (unsigned int)CanCastTo;
}
