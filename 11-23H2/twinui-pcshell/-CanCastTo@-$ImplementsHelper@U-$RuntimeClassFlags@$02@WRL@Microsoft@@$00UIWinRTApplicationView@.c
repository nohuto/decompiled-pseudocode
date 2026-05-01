/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800147E0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180014620 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWinRTApplicationView,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v3; // r9d

  v3 = *a2;
  if ( *a2 == -659269936
    && a2[1] == *(_DWORD *)&GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b.Data2
    && a2[2] == *(_DWORD *)GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b.Data4
    && a2[3] == *(_DWORD *)&GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b.Data4[4] )
  {
    goto LABEL_8;
  }
  a1 += 8LL;
  if ( v3 == -1796592748 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
    {
LABEL_8:
      *a3 = a1;
      return 0LL;
    }
    return 2147500034LL;
  }
  if ( v3 != 3
    || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    return 2147500034LL;
  }
  *a3 = a1;
  return 0LL;
}
