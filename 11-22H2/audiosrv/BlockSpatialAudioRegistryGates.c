/*
 * XREFs of BlockSpatialAudioRegistryGates @ 0x18001E4B4
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18002EE90 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAX_N@Z @ 0x180044C90 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAX_N@Z.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x180060AC4 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PE.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800612A0 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x1801532D4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSetti.c)
 * Callees:
 *     <none>
 */

__int64 BlockSpatialAudioRegistryGates()
{
  unsigned int v0; // ebx
  int pvData; // [rsp+50h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+18h] BYREF

  pvData = 0;
  pcbData = 4;
  v0 = 2;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"DisableSpatialAudioGlobal",
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
    v0 = (pvData != 0) + 2;
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"DisableSpatialAudioPerEndpoint",
          0x10u,
          0LL,
          &pvData,
          &pcbData)
    && !pvData )
  {
    v0 &= ~2u;
  }
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"DisableSpatialAudioVssFeature",
          0x10u,
          0LL,
          &pvData,
          &pcbData)
    && pvData )
  {
    v0 |= 4u;
  }
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"SpatialAudioHrtfOnByDefault",
          0x10u,
          0LL,
          &pvData,
          &pcbData)
    && pvData )
  {
    v0 |= 8u;
  }
  return v0;
}
