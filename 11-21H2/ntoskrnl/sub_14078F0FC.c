/*
 * XREFs of sub_14078F0FC @ 0x14078F0FC
 * Callers:
 *     sub_1406B9918 @ 0x1406B9918 (sub_1406B9918.c)
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_1406F20E8 @ 0x1406F20E8 (sub_1406F20E8.c)
 *     sub_14078EF08 @ 0x14078EF08 (sub_14078EF08.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_140796530 @ 0x140796530 (sub_140796530.c)
 *     sub_140797054 @ 0x140797054 (sub_140797054.c)
 *     sub_140797468 @ 0x140797468 (sub_140797468.c)
 *     sub_1409E448C @ 0x1409E448C (sub_1409E448C.c)
 *     sub_1409EC340 @ 0x1409EC340 (sub_1409EC340.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14078F0FC(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
