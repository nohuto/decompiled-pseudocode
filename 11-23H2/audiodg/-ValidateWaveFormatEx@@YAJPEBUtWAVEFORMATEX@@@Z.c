/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1400187D8
 * Callers:
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140005A58 (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14001C3AC (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140095CEC (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall ValidateWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r8d
  int nChannels; // r10d
  const struct _GUID *v4; // rbx
  __int64 v5; // r9
  int v6; // r10d
  int v7; // r11d
  unsigned __int16 v8; // ax
  __int16 v9; // cx
  bool v10; // zf
  int wBitsPerSample; // ecx

  v1 = 0;
  if ( !a1 )
    return (unsigned int)-2147467261;
  nChannels = a1->nChannels;
  if ( !(_WORD)nChannels || !a1->nSamplesPerSec || !a1->nAvgBytesPerSec || !a1->nBlockAlign || a1->cbSize > 0x400u )
    return (unsigned int)-2147024809;
  if ( ((a1->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    if ( a1->cbSize )
      return (unsigned int)-2147024809;
    wBitsPerSample = a1->wBitsPerSample;
    if ( (wBitsPerSample & 7) != 0 || (unsigned __int16)nChannels > 2u )
      return (unsigned int)-2147024809;
    v10 = a1->nAvgBytesPerSec == (a1->nSamplesPerSec * wBitsPerSample * nChannels) >> 3;
    goto LABEL_19;
  }
  if ( a1->wFormatTag == 0xFFFE )
  {
    if ( a1->cbSize < 0x16u )
      return (unsigned int)-2147024809;
    v4 = (const struct _GUID *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( (unsigned int)IsEqualGUID(
                         &GUID_00000001_0000_0010_8000_00aa00389b71,
                         (const struct _GUID *)((char *)&a1[1].nSamplesPerSec + 2))
      || (unsigned int)IsEqualGUID(&GUID_00000003_0000_0010_8000_00aa00389b71, v4) )
    {
      if ( (unsigned int)IsEqualGUID(&GUID_00000001_0000_0010_8000_00aa00389b71, v4) )
      {
        v9 = -25;
        v8 = v7 - 8;
      }
      else
      {
        v8 = v7 - 32;
        v9 = -33;
      }
      if ( (v8 & (unsigned __int16)v9) != 0
        || (_WORD)v1 == *(_WORD *)(v5 + 18)
        || (unsigned __int16)v7 < *(_WORD *)(v5 + 18)
        || *(_DWORD *)(v5 + 8) != (unsigned int)(*(_DWORD *)(v5 + 4) * v7 * v6) >> 3 )
      {
        return (unsigned int)-2147024809;
      }
      v10 = *(unsigned __int16 *)(v5 + 12) == v7 * v6 / 8;
LABEL_19:
      if ( v10 )
        return v1;
      return (unsigned int)-2147024809;
    }
  }
  return v1;
}
