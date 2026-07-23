/*
 * XREFs of MiUseLargeDriverPage @ 0x1407E3124
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     MiHandleBootImage @ 0x140B46AA8 (MiHandleBootImage.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall MiUseLargeDriverPage(PCUNICODE_STRING String1)
{
  __int64 i; // rbx

  if ( (MiFlags & 0x4000) != 0 || (MiFlags & 0x8000) != 0 || dword_140C6987C )
    return 0LL;
  if ( byte_140C658F5 != 1 )
  {
    for ( i = qword_140C658F8; (__int64 *)i != &qword_140C658F8; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(i + 16), 1u) )
        return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
