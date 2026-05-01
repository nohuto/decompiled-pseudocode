/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013C0D8
 * Callers:
 *     ?QueryInterface@VirtualDesktopDataSource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085460 (-QueryInterface@VirtualDesktopDataSource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIWeakReferenceSource@@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013C064 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIVirtualDesktopDataSo.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r10
  BOOL IsEqualGUID; // eax
  _QWORD *v5; // r8
  __int64 v6; // r10
  unsigned int v7; // ecx

  if ( *a2 == 1782886427
    && a2[1] == *(_DWORD *)&GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data2
    && a2[2] == *(_DWORD *)GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data4
    && a2[3] == *(_DWORD *)&GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v3 = a1 + 8;
    if ( *a2 == -851427758
      && a2[1] == *(_DWORD *)&GUID_cd403e52_deed_4c13_b437_b98380f2b1e8.Data2
      && a2[2] == *(_DWORD *)GUID_cd403e52_deed_4c13_b437_b98380f2b1e8.Data4
      && a2[3] == *(_DWORD *)&GUID_cd403e52_deed_4c13_b437_b98380f2b1e8.Data4[4]
      || (v3 = a1 + 16, *a2 == -1796592748)
      && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
    {
      *a3 = v3;
      return 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(a2, &GUID_00000003_0000_0000_c000_000000000046);
      v7 = 0;
      if ( IsEqualGUID )
        *v5 = v6;
      else
        return (unsigned int)-2147467262;
    }
    return v7;
  }
}
