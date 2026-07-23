/*
 * XREFs of mbtowc @ 0x1403E1D00
 * Callers:
 *     sub_1403E3D1C @ 0x1403E3D1C (sub_1403E3D1C.c)
 *     sub_1403E85A8 @ 0x1403E85A8 (sub_1403E85A8.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x1407CD880 (RtlAnsiCharToUnicodeChar.c)
 */

int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  int result; // eax
  int v4; // ebx
  PUCHAR SourceCharacter; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  v4 = (int)SrcCh;
  if ( SrcCh && SrcSizeInBytes )
  {
    if ( *SrcCh )
    {
      SourceCharacter = (PUCHAR)SrcCh;
      *DstCh = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      return (_DWORD)SourceCharacter - v4;
    }
    else if ( DstCh )
    {
      *DstCh = 0;
    }
  }
  return result;
}
