/*
 * XREFs of ?VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DA5A0
 * Callers:
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopPerMonitorCollection@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180029B60 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopPerMonitorCollection@@AEAAJPEAUIVirtual.c)
 *     ?Initialize@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18010E880 (-Initialize@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVi.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DAA74 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopInterna.c)
 *     ??$MakeAndInitialize@VVirtualDesktop@@V1@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktop@@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x18010EE74 (--$MakeAndInitialize@VVirtualDesktop@@V1@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x18017CA98 (-InternalRelease@-$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
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
  int CanCastTo; // ebx
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // r9
  _DWORD *v12; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  char *v17; // r8
  __int64 v18; // r9
  void **v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IVirtualDesktop *v21; // [rsp+50h] [rbp+20h] BYREF
  struct IThumbnailDeviceSource *v22; // [rsp+58h] [rbp+28h] BYREF
  struct IVirtualDesktopManagerInternal *v23; // [rsp+60h] [rbp+30h] BYREF
  struct IVirtualDesktopNotificationService *v24; // [rsp+68h] [rbp+38h] BYREF

  v24 = a4;
  v23 = a3;
  v22 = a2;
  v21 = a1;
  v6 = a6;
  *a6 = 0LL;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktop>::InternalRelease(&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktop,VirtualDesktop,IVirtualDesktop * &,IThumbnailDeviceSource * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopNotificationService * &>(
         (unsigned int)&a6,
         (unsigned int)&v21,
         (unsigned int)&v22,
         (unsigned int)&v23,
         (__int64)&v24);
  CanCastTo = v7;
  if ( v7 < 0 )
  {
    v14 = (unsigned int)v7;
    v15 = 91LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)v14);
    goto LABEL_9;
  }
  *v6 = 0LL;
  if ( InlineIsEqualGUID(&GUID_ec6e8d5a_3efb_5952_b98a_c11f3376f828, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v19 = a6;
    *v6 = a6;
    (*((void (__fastcall **)(void **))*v19 + 1))(v19);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v10, v11) )
    {
      *v6 = a6;
LABEL_6:
      CanCastTo = 0;
LABEL_7:
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v6 + 8LL))(*v6);
      goto LABEL_8;
    }
    if ( InlineIsEqualGUID(v12, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
      || InlineIsEqualGUID(v16, &GUID_cd403e52_deed_4c13_b437_b98380f2b1e8) )
    {
      *v6 = v17;
      goto LABEL_6;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::CanCastTo(
                  v17 + 8,
                  v18,
                  v6);
    if ( CanCastTo >= 0 )
      goto LABEL_7;
  }
LABEL_8:
  if ( CanCastTo < 0 )
  {
    v14 = (unsigned int)CanCastTo;
    v15 = 92LL;
    goto LABEL_18;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<VirtualDesktop>::InternalRelease(&a6);
  return (unsigned int)CanCastTo;
}
