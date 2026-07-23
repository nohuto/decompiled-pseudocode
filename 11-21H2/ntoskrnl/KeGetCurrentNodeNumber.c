/*
 * XREFs of KeGetCurrentNodeNumber @ 0x140221E50
 * Callers:
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1406FC590 @ 0x1406FC590 (sub_1406FC590.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 * Callees:
 *     <none>
 */

USHORT KeGetCurrentNodeNumber(void)
{
  return *(_WORD *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL);
}
