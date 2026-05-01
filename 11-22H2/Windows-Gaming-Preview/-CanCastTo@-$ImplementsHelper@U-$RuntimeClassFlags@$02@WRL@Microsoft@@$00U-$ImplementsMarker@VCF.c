/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCFTMCrossProcServer@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180011DBC
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180011F30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180011F30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CFTMCrossProcServer>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v6; // ecx
  _DWORD *v7; // r9
  __int64 v8; // rcx
  _DWORD *v9; // r8
  _DWORD *v10; // rdx
  _DWORD *v11; // rdi
  _DWORD *v12; // rbp
  unsigned int v13; // eax
  _DWORD *v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rbx
  bool v17; // zf

  if ( *a2 != 3
    || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    v7 = a2 + 1;
    v8 = a1 + 8;
    v9 = a2 + 2;
    v10 = a2 + 3;
    if ( *a2 == -1796592748
      && *v7 == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && *v9 == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && *v10 == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
    {
      *a3 = v8;
      v11 = v10;
      v6 = 0;
      v12 = v9;
      v13 = 0;
      v14 = v7;
    }
    else
    {
      v15 = v8 + 8;
      v14 = v7;
      v6 = 0;
      v12 = v9;
      v11 = v10;
      if ( *a2 == 64
        && *v7 == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data2
        && *v9 == *(_DWORD *)GUID_00000040_0000_0000_c000_000000000046.Data4
        && *v10 == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data4[4] )
      {
        *a3 = v15;
        v13 = 0;
      }
      else
      {
        v13 = -2147467262;
      }
    }
    if ( v13 != -2147467262 )
      return v13;
    v16 = a1 + 64;
    if ( *a2 == -1796592748 )
    {
      if ( *v14 != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        || *v12 != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
      {
        return (unsigned int)-2147467262;
      }
      v17 = *v11 == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
    }
    else
    {
      if ( *a2 != 3
        || *v7 != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
        || *v9 != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
      {
        return (unsigned int)-2147467262;
      }
      v17 = *v10 == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
    }
    if ( v17 )
    {
      *a3 = v16;
      return v6;
    }
    return (unsigned int)-2147467262;
  }
  *a3 = a1;
  return 0;
}
