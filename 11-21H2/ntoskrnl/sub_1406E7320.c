/*
 * XREFs of sub_1406E7320 @ 0x1406E7320
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140B050A8 @ 0x140B050A8 (sub_140B050A8.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_1406E7320(PCUNICODE_STRING String1)
{
  __int64 i; // rbx

  if ( (dword_140D06880 & 0x4000) != 0 || (dword_140D06880 & 0x8000) != 0 || dword_140C4F478 )
    return 0LL;
  if ( byte_140C4F4A9 != 1 )
  {
    for ( i = qword_140C4F4B0; (__int64 *)i != &qword_140C4F4B0; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(i + 16), 1u) )
        return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
