/*
 * XREFs of sub_140371248 @ 0x140371248
 * Callers:
 *     sub_140370928 @ 0x140370928 (sub_140370928.c)
 *     sub_140370C40 @ 0x140370C40 (sub_140370C40.c)
 * Callees:
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 */

KIRQL __fastcall sub_140371248(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return sub_140365AF4((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
