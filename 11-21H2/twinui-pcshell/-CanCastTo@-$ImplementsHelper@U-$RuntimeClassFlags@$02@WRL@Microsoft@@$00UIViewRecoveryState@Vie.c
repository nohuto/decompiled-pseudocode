/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewRecoveryState@ViewManagerInterop@Shell@Internal@Windows@@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800827C0
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$ChainInterfaces@UIWindowWrapperInternal@@UIWindowWrapper@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@UIViewVisibilityOverride@5Desktop@678@UIViewResourcePolicies@5678@UIClientWindowState@5678@UIViewRecoveryState@5678@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800817D0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewWrapper@ViewManag.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@UIClientWindowState@5678@UIViewRecoveryState@5678@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803FB350 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewResourcePolicies@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v3; // r9d

  v3 = *a2;
  if ( *a2 == 1906570277
    && a2[1] == *(_DWORD *)&GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data2
    && a2[2] == *(_DWORD *)GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data4
    && a2[3] == *(_DWORD *)&GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data4[4] )
  {
    goto LABEL_12;
  }
  a1 += 8LL;
  if ( v3 == 994192510
    && a2[1] == *(_DWORD *)&GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data2
    && a2[2] == *(_DWORD *)GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data4
    && a2[3] == *(_DWORD *)&GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data4[4] )
  {
    goto LABEL_12;
  }
  a1 += 8LL;
  if ( v3 != -1796592748 )
  {
    if ( v3 == 3
      && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = a1;
      return 0LL;
    }
    return 2147500034LL;
  }
  if ( a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
LABEL_12:
    *a3 = a1;
    return 0LL;
  }
  return 2147500034LL;
}
