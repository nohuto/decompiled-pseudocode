/*
 * XREFs of sub_140A7C224 @ 0x140A7C224
 * Callers:
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140A89F08 @ 0x140A89F08 (sub_140A89F08.c)
 *     sub_140A8A0C8 @ 0x140A8A0C8 (sub_140A8A0C8.c)
 */

void __fastcall sub_140A7C224(__int64 a1)
{
  unsigned __int8 v2; // al

  if ( byte_140C1AD98
    && a1
    && !dword_140D5750C
    && RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &stru_140D4E150, 1u) == 1 )
  {
    if ( !qword_140C1AD20 )
    {
      qword_140C1AD20 = *(_QWORD *)(a1 + 48);
      dword_140C1AD18 = *(_DWORD *)(a1 + 64);
    }
    v2 = sub_140A8A0C8(a1);
    dword_140D5750C = v2;
    if ( v2 )
      sub_140A89F08(0LL, 0LL);
  }
}
