/*
 * XREFs of sub_140250FF0 @ 0x140250FF0
 * Callers:
 *     sub_1406D8150 @ 0x1406D8150 (sub_1406D8150.c)
 *     sub_1408036C8 @ 0x1408036C8 (sub_1408036C8.c)
 *     sub_14080422C @ 0x14080422C (sub_14080422C.c)
 *     sub_140812318 @ 0x140812318 (sub_140812318.c)
 *     sub_140812F84 @ 0x140812F84 (sub_140812F84.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 */

NTSTATUS __fastcall sub_140250FF0(void *a1)
{
  return ZwClose(a1);
}
