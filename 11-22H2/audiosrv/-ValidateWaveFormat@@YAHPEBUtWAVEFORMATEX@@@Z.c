/*
 * XREFs of ?ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180069804
 * Callers:
 *     ?SetAudioFormat@CAudioMediaType@@IEAAJPEBUtWAVEFORMATEX@@IH@Z @ 0x1800696C0 (-SetAudioFormat@CAudioMediaType@@IEAAJPEBUtWAVEFORMATEX@@IH@Z.c)
 * Callees:
 *     ?FormatTagFromWfx@@YAGPEBUtWAVEFORMATEX@@@Z @ 0x180069140 (-FormatTagFromWfx@@YAGPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidFloatWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800694F8 (-IsValidFloatWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180069570 (-IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall ValidateWaveFormat(const struct tWAVEFORMATEX *a1)
{
  __int16 v2; // ax
  unsigned int v3; // ecx
  unsigned int valid; // eax

  v2 = FormatTagFromWfx(a1);
  if ( v2 == 1 )
  {
    valid = IsValidPcmWfx(a1);
LABEL_6:
    v3 = valid;
    if ( !valid )
      return v3;
    goto LABEL_7;
  }
  if ( v2 == 3 )
  {
    valid = IsValidFloatWfx(a1);
    goto LABEL_6;
  }
  v3 = 1;
LABEL_7:
  if ( a1->wFormatTag == 0xFFFE )
  {
    v3 = 0;
    if ( a1->cbSize >= 0x16u )
      return a1[1].wFormatTag <= a1->wBitsPerSample;
  }
  return v3;
}
