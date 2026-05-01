/*
 * XREFs of ?QueryInterface@VirtualDesktopDataSource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085460
 * Callers:
 *     ?QueryInterface@VirtualDesktopDataSource@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180206720 (-QueryInterface@VirtualDesktopDataSource@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180206740 (-QueryInterface@VirtualDesktopDataSource@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180206760 (-QueryInterface@VirtualDesktopDataSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180206780 (-QueryInterface@VirtualDesktopDataSource@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802067A0 (-QueryInterface@VirtualDesktopDataSource@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013C0D8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopDataSou.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopDataSource::QueryInterface(
        VirtualDesktopDataSource *this,
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
  if ( InlineIsEqualGUID(v6, &_uuidof__AUIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows__)
    || InlineIsEqualGUID(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
    || InlineIsEqualGUID(v10, &GUID_7f331592_08ca_41ff_a77d_f2138806e857) )
  {
    *v8 = v9;
    CanCastTo = 0;
    goto LABEL_7;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::CanCastTo(
                v9 + 8,
                v11);
  if ( CanCastTo >= 0 )
LABEL_7:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  return (unsigned int)CanCastTo;
}
