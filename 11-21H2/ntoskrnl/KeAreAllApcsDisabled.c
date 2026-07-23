/*
 * XREFs of KeAreAllApcsDisabled @ 0x140281980
 * Callers:
 *     sub_140243500 @ 0x140243500 (sub_140243500.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1402E08F8 @ 0x1402E08F8 (sub_1402E08F8.c)
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     sub_140417DE0 @ 0x140417DE0 (sub_140417DE0.c)
 *     sub_1406F6CA4 @ 0x1406F6CA4 (sub_1406F6CA4.c)
 *     sub_1406F84B0 @ 0x1406F84B0 (sub_1406F84B0.c)
 *     sub_1407460A4 @ 0x1407460A4 (sub_1407460A4.c)
 *     sub_14079D948 @ 0x14079D948 (sub_14079D948.c)
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 *     sub_140A95858 @ 0x140A95858 (sub_140A95858.c)
 * Callees:
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return *((_WORD *)KeGetCurrentThread() + 243) || !(unsigned __int8)sub_1402ABBD0() || KeGetCurrentIrql();
}
