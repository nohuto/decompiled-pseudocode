/*
 * XREFs of ?VirtualDesktopItemCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A96F8
 * Callers:
 *     ?_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804A0D08 (-_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopM.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180432014 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00V-$VirtualDesktopNotifi.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1804A8CB8 (--$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktop.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A91D4 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopItemCollection_CreateInstance(
        HMONITOR a1,
        struct IVirtualDesktopItemFactory *a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IVirtualDesktopNotificationService *a4,
        const struct _GUID *a5,
        void **a6)
{
  void **v6; // rdi
  VirtualDesktopItemCollection *v7; // rdx
  int v8; // eax
  int CanCastTo; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  _DWORD *v13; // r9
  _DWORD *v14; // rdx
  void **v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IVirtualDesktopItemFactory *v18; // [rsp+58h] [rbp+28h] BYREF
  struct IVirtualDesktopManagerInternal *v19; // [rsp+60h] [rbp+30h] BYREF
  struct IVirtualDesktopNotificationService *v20; // [rsp+68h] [rbp+38h] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  v6 = a6;
  *a6 = 0LL;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease((__int64 *)&a6);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItemCollection,VirtualDesktopItemCollection,HMONITOR__ * &,IVirtualDesktopItemFactory * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopNotificationService * &>(
         (VirtualDesktopItemCollection **)&a6,
         v7,
         &v18,
         &v19,
         &v20);
  CanCastTo = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 194LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)v10);
    goto LABEL_12;
  }
  *v6 = 0LL;
  if ( InlineIsEqualGUID(&GUID_e75e99cc_8d45_406e_9a90_c6f3656ea2fd, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v15 = a6;
    *v6 = a6;
    (*((void (__fastcall **)(void **))*v15 + 1))(v15);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v12, v13) )
    {
      *v6 = a6;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
                    (__int64)(a6 + 18),
                    v14);
      if ( CanCastTo < 0 )
        goto LABEL_9;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v6 + 8LL))(*v6);
  }
LABEL_9:
  if ( CanCastTo < 0 )
  {
    v10 = (unsigned int)CanCastTo;
    v11 = 195LL;
    goto LABEL_11;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease((__int64 *)&a6);
  return (unsigned int)CanCastTo;
}
