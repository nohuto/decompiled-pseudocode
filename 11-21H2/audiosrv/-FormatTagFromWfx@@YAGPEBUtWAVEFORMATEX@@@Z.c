/*
 * XREFs of ?FormatTagFromWfx@@YAGPEBUtWAVEFORMATEX@@@Z @ 0x180060EF0
 * Callers:
 *     ?ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800615A4 (-ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FormatTagFromWfx(const struct tWAVEFORMATEX *a1)
{
  __int64 result; // rax

  result = a1->wFormatTag;
  if ( (_WORD)result == 0xFFFE )
  {
    if ( a1->cbSize >= 0x16u
      && *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)&a1[1].nAvgBytesPerSec
      && *(_DWORD *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == *(_DWORD *)&a1[1].cbSize
      && *(_WORD *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6] == a1[2].nChannels )
    {
      return HIWORD(a1[1].nSamplesPerSec);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
