/*
 * XREFs of ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x180053044
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180051B74 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlob.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800526A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXT.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800675AC (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@P.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18013D7C4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFO.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18013E334 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSe.c)
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
