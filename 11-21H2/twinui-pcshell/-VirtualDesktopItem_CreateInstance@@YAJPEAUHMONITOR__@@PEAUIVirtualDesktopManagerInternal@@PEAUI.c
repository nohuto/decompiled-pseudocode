/*
 * XREFs of ?VirtualDesktopItem_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktop@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B73DC
 * Callers:
 *     ?CreateVirtualDesktopItem@VirtualDesktopItemFactory@@UEAAJPEAUIVirtualDesktop@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A8B10 (-CreateVirtualDesktopItem@VirtualDesktopItemFactory@@UEAAJPEAUIVirtualDesktop@@AEBU_GUID@@PEAPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@U?$ChainInterfaces@UIVirtualDesktopItemInternal@@UIVirtualDesktopItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@U?$ChainInterfaces@UIVirtualDesktopItemInternal@@UIVirtualDesktopItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804B6C4C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItem@@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Z @ 0x1804B6D04 (--$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInt.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItem@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B7288 (-InternalRelease@-$ComPtr@VVirtualDesktopItem@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopItem_CreateInstance(
        HMONITOR a1,
        struct IVirtualDesktopManagerInternal *a2,
        struct IVirtualDesktop *a3,
        struct _GUID *a4,
        void **a5)
{
  void **v6; // rdi
  void *v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktopManagerInternal *v13; // [rsp+38h] [rbp+10h] BYREF
  struct IVirtualDesktop *v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  v6 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopItem>::InternalRelease((__int64 *)&a5);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItem,VirtualDesktopItem,HMONITOR__ * &,IVirtualDesktopManagerInternal * &,IVirtualDesktop * &>(
         (__int64 **)&a5,
         v7,
         (__int64 *)&v13,
         (__int64 *)&v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 102LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitem.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_6;
  }
  v8 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableItem,Microsoft::WRL::ChainInterfaces<IVirtualDesktopItemInternal,IVirtualDesktopItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>>(
         (__int64)a5,
         a4,
         v6);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 103LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<VirtualDesktopItem>::InternalRelease((__int64 *)&a5);
  return v9;
}
