/*
 * XREFs of sub_140A89FE0 @ 0x140A89FE0
 * Callers:
 *     sub_140A7C528 @ 0x140A7C528 (sub_140A7C528.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A934D8 @ 0x140A934D8 (sub_140A934D8.c)
 *     sub_140B53B5C @ 0x140B53B5C (sub_140B53B5C.c)
 */

__int64 __fastcall sub_140A89FE0(__int64 **a1)
{
  unsigned int v1; // esi
  __int64 *i; // rbx

  v1 = 0;
  if ( !(_QWORD)xmmword_140C1B2B0 )
    return 0LL;
  for ( i = *a1; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    if ( !RtlEqualUnicodeString(&stru_140A75038, (PCUNICODE_STRING)(i + 11), 1u) && (i[13] & 0x2000000) != 0 )
    {
      sub_140A89D58();
      if ( (unsigned int)sub_140B53B5C(i + 11) )
        v1 = sub_140A934D8(i);
      qword_140C1AD40 = 0LL;
      KeReleaseMutex(&stru_140C1AD60, 0);
    }
  }
  return v1;
}
