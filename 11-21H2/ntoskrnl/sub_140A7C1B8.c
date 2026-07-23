/*
 * XREFs of sub_140A7C1B8 @ 0x140A7C1B8
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 *     sub_140B0DDAC @ 0x140B0DDAC (sub_140B0DDAC.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1402D8104 @ 0x1402D8104 (sub_1402D8104.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140A9A8F8 @ 0x140A9A8F8 (sub_140A9A8F8.c)
 */

BOOLEAN __fastcall sub_140A7C1B8(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  char v6; // al
  BOOLEAN result; // al

  v4 = a3;
  if ( !byte_140C1AD98
    || !a1
    || dword_140D5750C
    || (result = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &stru_140D4E150, 1u)) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
      v6 = *(_BYTE *)(*(_QWORD *)sub_140287970(v5) + 15LL) >> 4;
    else
      v6 = 12;
    if ( (_QWORD)xmmword_140C1B2B0 )
    {
      LOBYTE(a2) = v6;
      return sub_140A9A8F8(a1, a2, v4);
    }
    else
    {
      return sub_1402D8104(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v6, 0LL);
    }
  }
  return result;
}
