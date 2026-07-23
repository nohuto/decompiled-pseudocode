/*
 * XREFs of sub_1402ABBD0 @ 0x1402ABBD0
 * Callers:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     sub_140284C74 @ 0x140284C74 (sub_140284C74.c)
 *     sub_140297EF0 @ 0x140297EF0 (sub_140297EF0.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1402AB9C0 @ 0x1402AB9C0 (sub_1402AB9C0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_140579780 @ 0x140579780 (sub_140579780.c)
 *     sub_1405970A0 @ 0x1405970A0 (sub_1405970A0.c)
 *     sub_140A7F8F2 @ 0x140A7F8F2 (sub_140A7F8F2.c)
 *     sub_140A8A8D4 @ 0x140A8A8D4 (sub_140A8A8D4.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
 *     sub_140A8CA78 @ 0x140A8CA78 (sub_140A8CA78.c)
 *     sub_140A8CC6C @ 0x140A8CC6C (sub_140A8CC6C.c)
 *     sub_140A96540 @ 0x140A96540 (sub_140A96540.c)
 *     sub_140A96894 @ 0x140A96894 (sub_140A96894.c)
 *     sub_140AA3F40 @ 0x140AA3F40 (sub_140AA3F40.c)
 *     sub_140AA41A0 @ 0x140AA41A0 (sub_140AA41A0.c)
 *     sub_140AA4380 @ 0x140AA4380 (sub_140AA4380.c)
 * Callees:
 *     <none>
 */

bool sub_1402ABBD0()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
