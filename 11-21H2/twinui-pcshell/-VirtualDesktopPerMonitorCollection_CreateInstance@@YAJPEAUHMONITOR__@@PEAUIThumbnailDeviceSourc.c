/*
 * XREFs of ?VirtualDesktopPerMonitorCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z @ 0x1800B12C4
 * Callers:
 *     ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18014B9C0 (-Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800B1484 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00V-$VirtualDesktopNotifi.c)
 *     ??$MakeAndInitialize@VVirtualDesktopPerMonitorCollection@@V1@AEAPEAUHMONITOR__@@AEAPEAUIThumbnailDeviceSource@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopPerMonitorCollection@@AEAPEAUHMONITOR__@@AEAPEAUIThumbnailDeviceSource@@@Z @ 0x1800B14D8 (--$MakeAndInitialize@VVirtualDesktopPerMonitorCollection@@V1@AEAPEAUHMONITOR__@@AEAPEAUIThumbnai.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopPerMonitorCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180175B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopPe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopPerMonitorCollection_CreateInstance(
        HMONITOR a1,
        struct IThumbnailDeviceSource *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  int CanCastTo; // edi
  void *v7; // rbx
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  _DWORD *v10; // r9
  _DWORD *v11; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  char *v16; // r8
  __int64 v17; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HMONITOR v19; // [rsp+40h] [rbp+8h] BYREF
  struct IThumbnailDeviceSource *v20; // [rsp+48h] [rbp+10h] BYREF
  void *v21; // [rsp+50h] [rbp+18h] BYREF

  v20 = a2;
  v19 = a1;
  *a4 = 0LL;
  v21 = 0LL;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopPerMonitorCollection,VirtualDesktopPerMonitorCollection,HMONITOR__ * &,IThumbnailDeviceSource * &>(
         &v21,
         &v19,
         &v20);
  CanCastTo = v5;
  v7 = v21;
  if ( v5 >= 0 )
  {
    *a4 = 0LL;
    if ( !v7 )
    {
      CanCastTo = 0;
      goto LABEL_10;
    }
    if ( InlineIsEqualGUID(&GUID_3b2e9187_6ab7_5cc2_9bf8_b5e483be106f, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a4 = v7;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
      CanCastTo = 0;
      goto LABEL_9;
    }
    if ( InlineIsEqualGUID(v9, v10) )
    {
      *a4 = v7;
    }
    else
    {
      if ( !InlineIsEqualGUID(v11, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
        && !InlineIsEqualGUID(v15, &GUID_505ba63e_e2d2_4612_bf9e_378fc429a542) )
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::CanCastTo(
                      v16 + 8,
                      v17,
                      a4);
        if ( CanCastTo < 0 )
          goto LABEL_9;
        goto LABEL_8;
      }
      *a4 = v16;
    }
    CanCastTo = 0;
LABEL_8:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
LABEL_9:
    if ( CanCastTo >= 0 )
      goto LABEL_10;
    v13 = (unsigned int)CanCastTo;
    v14 = 109LL;
    goto LABEL_16;
  }
  v13 = (unsigned int)v5;
  v14 = 108LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktoppermonitorcollection.cpp",
    (const char *)v13);
LABEL_10:
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection,IVirtualDesktopPerMonitorCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release(v7);
  return (unsigned int)CanCastTo;
}
