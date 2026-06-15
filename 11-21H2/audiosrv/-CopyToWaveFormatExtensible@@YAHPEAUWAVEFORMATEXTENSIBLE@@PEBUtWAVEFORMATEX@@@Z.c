/*
 * XREFs of ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x1800F862C
 * Callers:
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18013D7C4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyToWaveFormatExtensible(struct WAVEFORMATEXTENSIBLE *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = 0;
  if ( a1 && a2 )
  {
    if ( a2->wFormatTag == 0xFFFE )
    {
      if ( a2->cbSize == 22 )
        goto LABEL_11;
      v3 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( !v3 )
        v3 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( !v3 )
        goto LABEL_11;
      v4 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v4 )
        v4 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( !v4 )
      {
LABEL_11:
        v2 = 1;
        *(_OWORD *)&a1->Format.wFormatTag = *(_OWORD *)&a2->wFormatTag;
        *(_OWORD *)&a1->Format.cbSize = *(_OWORD *)&a2->cbSize;
        *(_QWORD *)a1->SubFormat.Data4 = *(_QWORD *)&a2[1].wBitsPerSample;
        a1->Format.cbSize = 22;
      }
    }
    else if ( (!a2->cbSize || ((a2->wFormatTag - 1) & 0xFFFD) == 0)
           && (unsigned __int16)(a2->nChannels - 1) <= 1u
           && ((a2->wBitsPerSample - 8) & 0xFFE7) == 0 )
    {
      v2 = 1;
      *(_OWORD *)&a1->Format.wFormatTag = *(_OWORD *)&a2->wFormatTag;
      a1->Format.wFormatTag = -2;
      a1->Format.cbSize = 22;
      a1->Samples.wValidBitsPerSample = a2->wBitsPerSample;
      a1->SubFormat = GUID_00000000_0000_0010_8000_00aa00389b71;
      a1->SubFormat.Data1 = a2->wFormatTag;
      a1->dwChannelMask = 4 - (a2->nChannels != 1);
    }
  }
  return v2;
}
