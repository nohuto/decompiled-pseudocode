/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopDataSource2@Multitasking@ComposableShell@Internal@Windows@@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D2578
 * Callers:
 *     ?QueryInterface@VirtualDesktopDataSource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CDBA0 (-QueryInterface@VirtualDesktopDataSource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSource2@5678@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSource2@5678@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801A219C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopD.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource2,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  BOOL IsEqualGUID; // eax
  void **v5; // r8
  const struct _GUID *v6; // r9
  __int64 v7; // r10
  unsigned int CanCastTo; // ecx

  if ( *a2 == 39559493
    && a2[1] == *(_DWORD *)&GUID_025ba145_c552_5575_97e0_c4386a7dc346.Data2
    && a2[2] == *(_DWORD *)GUID_025ba145_c552_5575_97e0_c4386a7dc346.Data4
    && a2[3] == *(_DWORD *)&GUID_025ba145_c552_5575_97e0_c4386a7dc346.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v3 = a1 + 8;
    if ( *a2 == 2134054290
      && a2[1] == *(_DWORD *)&GUID_7f331592_08ca_41ff_a77d_f2138806e857.Data2
      && a2[2] == *(_DWORD *)GUID_7f331592_08ca_41ff_a77d_f2138806e857.Data4
      && a2[3] == *(_DWORD *)&GUID_7f331592_08ca_41ff_a77d_f2138806e857.Data4[4]
      || (v3 += 8LL, *a2 == 1782886427)
      && a2[1] == *(_DWORD *)&GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data2
      && a2[2] == *(_DWORD *)GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data4
      && a2[3] == *(_DWORD *)&GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data4[4] )
    {
      *a3 = v3;
      return 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(a2, &GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade);
      CanCastTo = 0;
      if ( IsEqualGUID )
      {
        *v5 = (void *)v7;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v7 + 8), v6, v5);
        if ( CanCastTo == -2147467262 )
          return (unsigned int)-2147467262;
      }
    }
    return CanCastTo;
  }
}
