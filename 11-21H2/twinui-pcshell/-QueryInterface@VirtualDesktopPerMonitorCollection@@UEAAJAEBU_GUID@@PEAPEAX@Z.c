/*
 * XREFs of ?QueryInterface@VirtualDesktopPerMonitorCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B13B0
 * Callers:
 *     ?QueryInterface@VirtualDesktopPerMonitorCollection@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180206CA0 (-QueryInterface@VirtualDesktopPerMonitorCollection@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopPerMonitorCollection@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180206CC0 (-QueryInterface@VirtualDesktopPerMonitorCollection@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopPerMonitorCollection@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180206CE0 (-QueryInterface@VirtualDesktopPerMonitorCollection@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopPerMonitorCollection@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180206D00 (-QueryInterface@VirtualDesktopPerMonitorCollection@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800B1484 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00V-$VirtualDesktopNotifi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopPerMonitorCollection::QueryInterface(
        VirtualDesktopPerMonitorCollection *this,
        struct _GUID *a2,
        void **a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r11
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r11
  _DWORD *v10; // rcx
  __int64 v11; // r9
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_3b2e9187_6ab7_5cc2_9bf8_b5e483be106f)
    || InlineIsEqualGUID(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
    || InlineIsEqualGUID(v10, &GUID_505ba63e_e2d2_4612_bf9e_378fc429a542) )
  {
    *v8 = v9;
    CanCastTo = 0;
    goto LABEL_7;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::CanCastTo(
                v9 + 8,
                v11,
                v8);
  if ( CanCastTo >= 0 )
LABEL_7:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  return (unsigned int)CanCastTo;
}
