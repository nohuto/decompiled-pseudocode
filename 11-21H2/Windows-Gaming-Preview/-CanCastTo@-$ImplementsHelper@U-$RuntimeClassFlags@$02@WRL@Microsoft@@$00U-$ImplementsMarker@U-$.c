/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@Details@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18003D764
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003D8B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18003D8B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>>,CFTMCrossProcClientImpl>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ecx
  __int64 v4; // r9
  unsigned int v5; // eax
  __int64 v6; // r9

  if ( *a2 == 1935221971
    && a2[1] == *(_DWORD *)&GUID_735924d3_811f_4494_b69c_c641a0c61543.Data2
    && a2[2] == *(_DWORD *)GUID_735924d3_811f_4494_b69c_c641a0c61543.Data4
    && a2[3] == *(_DWORD *)&GUID_735924d3_811f_4494_b69c_c641a0c61543.Data4[4] )
  {
    goto LABEL_5;
  }
  v4 = a1 + 8;
  if ( *a2 == -666202229
    && a2[1] == *(_DWORD *)&GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d.Data2
    && a2[2] == *(_DWORD *)GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d.Data4
    && a2[3] == *(_DWORD *)&GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d.Data4[4]
    || (v4 = a1 + 24, *a2 == 3)
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = v4;
    return 0;
  }
  a1 += 32LL;
  if ( *a2 == -1796592748
    && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
LABEL_5:
    *a3 = a1;
    return 0;
  }
  v3 = 0;
  if ( *a2 == 64
    && a2[1] == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000040_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = v4 + 16;
    v5 = 0;
  }
  else
  {
    v5 = -2147467262;
  }
  if ( v5 == -2147467262 )
  {
    v6 = v4 + 56;
    if ( *a2 == 324
      && a2[1] == *(_DWORD *)&GUID_00000144_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000144_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000144_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = v6;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
  }
  else
  {
    return v5;
  }
  return v3;
}
