/*
 * XREFs of sub_1403A7848 @ 0x1403A7848
 * Callers:
 *     sub_1408036C8 @ 0x1408036C8 (sub_1408036C8.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x14041EDA0 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall sub_1403A7848(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
