/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029DA0
 * Callers:
 *     ?_RegisterListenerOnTileCollection@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4CollectionProvider@Shim@UnifiedTile@Shell@WindowsInternal@@AEAV?$ComPtr@UIUnifiedTileCollection@Shim@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@PEAUEventRegistrationToken@@@Z @ 0x18001DE80 (-_RegisterListenerOnTileCollection@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Win.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028C50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListS.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028C90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180028C90.c)
 *     ?QueryInterface@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029EC0 (-QueryInterface@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != -1350114592 )
    {
      if ( *a2 == 769462127
        && a2[1] == *(_DWORD *)&GUID_2ddd0f6f_9c66_4b05_945c_d6ed78491b8c.Data2
        && a2[2] == *(_DWORD *)GUID_2ddd0f6f_9c66_4b05_945c_d6ed78491b8c.Data4
        && a2[3] == *(_DWORD *)&GUID_2ddd0f6f_9c66_4b05_945c_d6ed78491b8c.Data4[4] )
      {
LABEL_23:
        *a3 = a1;
        a1 = *a3;
        goto LABEL_24;
      }
LABEL_15:
      v5 = a1 + 8;
      a1 += 8LL;
      if ( *a2 != 56
        || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        a1 = v5 + 8;
        if ( *a2 != 962535576
          || a2[1] != *(_DWORD *)&GUID_395f2098_ea1a_45aa_9268_a83905686f27.Data2
          || a2[2] != *(_DWORD *)GUID_395f2098_ea1a_45aa_9268_a83905686f27.Data4
          || a2[3] != *(_DWORD *)&GUID_395f2098_ea1a_45aa_9268_a83905686f27.Data4[4] )
        {
          return (unsigned int)-2147467262;
        }
      }
      goto LABEL_23;
    }
    if ( a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      goto LABEL_15;
    }
    v4 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
  }
  else
  {
    if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_15;
    }
    v4 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
  }
  if ( a2[3] != v4 )
    goto LABEL_15;
  *a3 = a1;
LABEL_24:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
