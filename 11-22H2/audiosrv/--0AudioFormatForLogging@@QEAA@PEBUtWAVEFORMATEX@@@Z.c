/*
 * XREFs of ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x180044F08
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x18002C994 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18002EE90 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x180060AC4 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PE.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800612A0 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x1801532D4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSetti.c)
 * Callees:
 *     <none>
 */

AudioFormatForLogging *__fastcall AudioFormatForLogging::AudioFormatForLogging(
        AudioFormatForLogging *this,
        const struct tWAVEFORMATEX *a2)
{
  *(_WORD *)this = 0;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_OWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 7) = 0;
  if ( a2 )
  {
    *(_WORD *)this = a2->nChannels;
    *((_DWORD *)this + 1) = a2->nSamplesPerSec;
    *((_WORD *)this + 4) = a2->wBitsPerSample;
    if ( a2->wFormatTag == 0xFFFE )
    {
      *((_WORD *)this + 5) = a2[1].wFormatTag;
      *((_DWORD *)this + 7) = *(_DWORD *)&a2[1].nChannels;
      *(_OWORD *)((char *)this + 12) = *(_OWORD *)((char *)&a2[1].nSamplesPerSec + 2);
    }
  }
  return this;
}
