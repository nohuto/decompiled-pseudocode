/*
 * XREFs of sub_140371218 @ 0x140371218
 * Callers:
 *     sub_140370C40 @ 0x140370C40 (sub_140370C40.c)
 * Callees:
 *     sub_140351BF4 @ 0x140351BF4 (sub_140351BF4.c)
 */

__int64 __fastcall sub_140371218(__int64 a1, unsigned __int64 *a2)
{
  return sub_140351BF4(a1, (a2[12] + a2[17]) << 12, (int)a2, a2 + 4);
}
