/*
 * XREFs of sub_1402199B0 @ 0x1402199B0
 * Callers:
 *     sub_140218B60 @ 0x140218B60 (sub_140218B60.c)
 *     sub_14021984C @ 0x14021984C (sub_14021984C.c)
 *     sub_140389ED0 @ 0x140389ED0 (sub_140389ED0.c)
 *     sub_140A1A61C @ 0x140A1A61C (sub_140A1A61C.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1402199B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ExAllocatePool2(KeGetCurrentIrql() < 2u ? 256LL : 64LL, a1, a3, a4);
}
