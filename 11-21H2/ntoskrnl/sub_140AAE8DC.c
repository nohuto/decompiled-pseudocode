/*
 * XREFs of sub_140AAE8DC @ 0x140AAE8DC
 * Callers:
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_140AAE9F4 @ 0x140AAE9F4 (sub_140AAE9F4.c)
 */

__int64 sub_140AAE8DC()
{
  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  sub_1403A7C40();
  if ( (dword_140C0DF90 & 1) != 0 )
    sub_140AAE9F4();
  sub_1403A7BF0();
  return 0LL;
}
