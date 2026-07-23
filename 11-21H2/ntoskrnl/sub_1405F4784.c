/*
 * XREFs of sub_1405F4784 @ 0x1405F4784
 * Callers:
 *     sub_1405F43E0 @ 0x1405F43E0 (sub_1405F43E0.c)
 *     sub_1405F47B0 @ 0x1405F47B0 (sub_1405F47B0.c)
 * Callees:
 *     <none>
 */

__int64 sub_1405F4784()
{
  if ( KeGetCurrentIrql() )
    return 2LL;
  else
    return *((_BYTE *)KeGetCurrentThread() + 192) & 1;
}
