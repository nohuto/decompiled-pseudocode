/*
 * XREFs of sub_140B1AE4C @ 0x140B1AE4C
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_1403AD034 @ 0x1403AD034 (sub_1403AD034.c)
 *     sub_140B1AEBC @ 0x140B1AEBC (sub_140B1AEBC.c)
 */

struct _KTHREAD *sub_140B1AE4C()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // rdx
  __int64 v2; // r9

  v0 = 0xFFFFF68000000000uLL;
  v1 = 0xFFFFF6C000000000uLL;
  v2 = 3LL;
  do
  {
    v0 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v2;
  }
  while ( v2 );
  sub_140B1AEBC(v0, v1);
  return sub_1403AD034(1u);
}
