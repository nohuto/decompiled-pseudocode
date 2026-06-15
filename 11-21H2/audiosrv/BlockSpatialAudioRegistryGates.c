/*
 * XREFs of BlockSpatialAudioRegistryGates @ 0x180055048
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800526A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXT.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800675AC (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@P.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXXZ @ 0x18013D594 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXXZ.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18013D7C4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFO.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18013E334 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSe.c)
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
