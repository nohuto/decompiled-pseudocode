/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameModeUserConfigurationStatics@GamesEnumeration@Preview@Gaming@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18004221C
 * Callers:
 *     ??$CreateActivationFactory@VGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180041B80 (--$CreateActivationFactory@VGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gami.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameModeUserConfigurationStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180041F50 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameMod_ea_180041F50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v3; // eax

  if ( *a2 == 53
    && a2[1] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_10;
  }
  a1 += 8LL;
  if ( *a2 == -1796592748 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
    {
      goto LABEL_15;
    }
    v3 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
  }
  else
  {
    if ( *a2 != 3
      || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_15;
    }
    v3 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
  }
  if ( a2[3] == v3 )
  {
LABEL_10:
    *a3 = a1;
    return 0LL;
  }
LABEL_15:
  a1 += 32LL;
  if ( *a2 == 1850792316
    && a2[1] == *(_DWORD *)&GUID_6e50d97c_66ea_478e_a4a1_f57c0e8d00e7.Data2
    && a2[2] == *(_DWORD *)GUID_6e50d97c_66ea_478e_a4a1_f57c0e8d00e7.Data4
    && a2[3] == *(_DWORD *)&GUID_6e50d97c_66ea_478e_a4a1_f57c0e8d00e7.Data4[4] )
  {
    goto LABEL_10;
  }
  return 2147500034LL;
}
