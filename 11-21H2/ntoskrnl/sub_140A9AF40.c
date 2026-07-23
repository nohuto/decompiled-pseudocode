/*
 * XREFs of sub_140A9AF40 @ 0x140A9AF40
 * Callers:
 *     sub_140A9A540 @ 0x140A9A540 (sub_140A9A540.c)
 *     sub_140A9AC20 @ 0x140A9AC20 (sub_140A9AC20.c)
 *     sub_140A9AC40 @ 0x140A9AC40 (sub_140A9AC40.c)
 *     sub_140A9ACE0 @ 0x140A9ACE0 (sub_140A9ACE0.c)
 *     sub_140A9CB44 @ 0x140A9CB44 (sub_140A9CB44.c)
 *     sub_140B53B5C @ 0x140B53B5C (sub_140B53B5C.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_140A9AF40(PCUNICODE_STRING String2)
{
  __int64 i; // rbx

  for ( i = qword_140C1B2C0; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &qword_140C1B2C0 )
      return 0LL;
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 24), String2, 1u) )
      break;
  }
  return i;
}
