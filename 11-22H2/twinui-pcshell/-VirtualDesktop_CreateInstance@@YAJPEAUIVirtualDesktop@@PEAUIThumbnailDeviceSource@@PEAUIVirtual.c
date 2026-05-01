/*
 * XREFs of ?VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x18013F228
 * Callers:
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18003B12C (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@P.c)
 *     ?Initialize@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18013B380 (-Initialize@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktop2@5678@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktop2@5678@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18012738C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktop@@V1@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktop@@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x18013E074 (--$MakeAndInitialize@VVirtualDesktop@@V1@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B99FC (-InternalRelease@-$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktop_CreateInstance(
        struct IVirtualDesktop *a1,
        struct IThumbnailDeviceSource *a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IVirtualDesktopNotificationService *a4,
        const struct _GUID *a5,
        void **a6)
{
  void **v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IVirtualDesktop *v12; // [rsp+50h] [rbp+20h] BYREF
  struct IThumbnailDeviceSource *v13; // [rsp+58h] [rbp+28h] BYREF
  struct IVirtualDesktopManagerInternal *v14; // [rsp+60h] [rbp+30h] BYREF
  struct IVirtualDesktopNotificationService *v15; // [rsp+68h] [rbp+38h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = a2;
  v12 = a1;
  v6 = a6;
  *a6 = 0LL;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktop>::InternalRelease(&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktop,VirtualDesktop,IVirtualDesktop * &,IThumbnailDeviceSource * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopNotificationService * &>(
         (volatile signed __int64 **)&a6,
         &v12,
         &v13,
         &v14,
         &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 92LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_3;
  }
  v7 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop2,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>>(
         (char *)a6,
         &GUID_c9f125fc_77cc_5ce0_87f4_f94b7a67d80b,
         v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 93LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<VirtualDesktop>::InternalRelease(&a6);
  return v8;
}
