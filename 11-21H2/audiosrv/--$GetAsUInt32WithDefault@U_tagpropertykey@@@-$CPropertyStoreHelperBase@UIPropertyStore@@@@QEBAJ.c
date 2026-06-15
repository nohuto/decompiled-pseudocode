/*
 * XREFs of ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x18005378C
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800526A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXT.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800675AC (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@P.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18013D7C4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFO.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18013E334 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSe.c)
 * Callees:
 *     ??$GetAsUInt32@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x180053EF8 (--$GetAsUInt32@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagproper.c)
 */

__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
        __int64 a1,
        __int128 *a2,
        int a3,
        _DWORD *a4)
{
  int v5; // eax
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  v5 = *((_DWORD *)a2 + 4);
  v8 = *a2;
  v9 = v5;
  result = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32<_tagpropertykey>(a1, &v8, a4);
  if ( (_DWORD)result == -2147023728 )
  {
    *a4 = a3;
    return 0LL;
  }
  return result;
}
