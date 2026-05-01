/*
 * XREFs of ?VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x18056641C
 * Callers:
 *     ?_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18056068C (-_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18055F09C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00V-$VirtualDesktopNotifi.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x180565A54 (--$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEA.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x180565F54 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopItemCollection_CreateInstance(
        struct IVirtualDesktopItemFactory *a1,
        struct IVirtualDesktopManagerInternal *a2,
        struct IVirtualDesktopNotificationService *a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  int CanCastTo; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  _DWORD *v11; // r9
  _DWORD *v12; // rdx
  void **v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopItemFactory *v16; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopManagerInternal *v17; // [rsp+48h] [rbp+28h] BYREF
  struct IVirtualDesktopNotificationService *v18; // [rsp+50h] [rbp+30h] BYREF

  v18 = a3;
  v17 = a2;
  v16 = a1;
  v5 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease((__int64 *)&a5);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItemCollection,VirtualDesktopItemCollection,IVirtualDesktopItemFactory * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopNotificationService * &>(
         (VirtualDesktopItemCollection **)&a5,
         &v16,
         &v17,
         &v18);
  CanCastTo = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 164LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)v8);
    goto LABEL_12;
  }
  *v5 = 0LL;
  if ( InlineIsEqualGUID(&GUID_e75e99cc_8d45_406e_9a90_c6f3656ea2fd, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = a5;
    *v5 = a5;
    (*((void (__fastcall **)(void **))*v13 + 1))(v13);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v10, v11) )
    {
      *v5 = a5;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
                    (__int64)(a5 + 18),
                    v12);
      if ( CanCastTo < 0 )
        goto LABEL_9;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v5 + 8LL))(*v5);
  }
LABEL_9:
  if ( CanCastTo < 0 )
  {
    v8 = (unsigned int)CanCastTo;
    v9 = 165LL;
    goto LABEL_11;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease((__int64 *)&a5);
  return (unsigned int)CanCastTo;
}
