/*
 * XREFs of sub_140407E00 @ 0x140407E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_140400FC8 @ 0x140400FC8 (sub_140400FC8.c)
 *     sub_140401210 @ 0x140401210 (sub_140401210.c)
 */

__int64 __fastcall sub_140407E00(__int64 a1)
{
  _DWORD *v1; // r15

  v1 = *(_DWORD **)(a1 + 616);
  sub_140400F4C();
  sub_140401210(v1);
  sub_140400FC8();
  sub_140401210(v1);
  return sub_140400FC8();
}
