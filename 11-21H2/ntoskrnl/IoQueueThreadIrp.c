/*
 * XREFs of IoQueueThreadIrp @ 0x140389E20
 * Callers:
 *     sub_14084BB98 @ 0x14084BB98 (sub_14084BB98.c)
 *     sub_14095A544 @ 0x14095A544 (sub_14095A544.c)
 * Callees:
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  sub_1402AE1B0((__int64)Irp);
}
