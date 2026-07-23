/*
 * XREFs of sub_140B536A4 @ 0x140B536A4
 * Callers:
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140A89F08 @ 0x140A89F08 (sub_140A89F08.c)
 *     sub_140A8A0C8 @ 0x140A8A0C8 (sub_140A8A0C8.c)
 */

void __fastcall sub_140B536A4(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  unsigned __int8 v3; // al

  v1 = a1 + 16;
  for ( i = *(_QWORD *)(a1 + 16); i != v1; i = *(_QWORD *)i )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 88), &stru_140D4E150, 1u) == 1 )
    {
      if ( i )
      {
        qword_140C1AD20 = *(_QWORD *)(i + 48);
        dword_140C1AD18 = *(_DWORD *)(i + 64);
        v3 = sub_140A8A0C8(i);
        dword_140D5750C = v3;
        if ( v3 )
          sub_140A89F08(0, 0LL);
      }
      return;
    }
  }
}
