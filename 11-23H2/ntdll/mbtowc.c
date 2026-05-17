/*
 * XREFs of mbtowc @ 0x1800995D4
 * Callers:
 *     _woutput_l @ 0x1800965C0 (_woutput_l.c)
 *     ReadString @ 0x180098868 (ReadString.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x18005F9D0 (RtlAnsiCharToUnicodeChar.c)
 */

int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  int result; // eax
  int v4; // ebx
  char *v5; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  v4 = (int)SrcCh;
  if ( SrcCh && SrcSizeInBytes )
  {
    if ( *SrcCh )
    {
      v5 = (char *)SrcCh;
      *DstCh = RtlAnsiCharToUnicodeChar(&v5);
      return (_DWORD)v5 - v4;
    }
    else if ( DstCh )
    {
      *DstCh = 0;
    }
  }
  return result;
}
