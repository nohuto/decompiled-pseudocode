/*
 * XREFs of sub_1409A5540 @ 0x1409A5540
 * Callers:
 *     sub_1409A3450 @ 0x1409A3450 (sub_1409A3450.c)
 *     sub_1409A40F8 @ 0x1409A40F8 (sub_1409A40F8.c)
 *     sub_1409A5C10 @ 0x1409A5C10 (sub_1409A5C10.c)
 *     sub_1409AB5A0 @ 0x1409AB5A0 (sub_1409AB5A0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409A5540(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
