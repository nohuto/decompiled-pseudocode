/*
 * XREFs of sub_140360674 @ 0x140360674
 * Callers:
 *     sub_1407DB830 @ 0x1407DB830 (sub_1407DB830.c)
 *     sub_1407DBEE0 @ 0x1407DBEE0 (sub_1407DBEE0.c)
 * Callees:
 *     sub_1407D933C @ 0x1407D933C (sub_1407D933C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140360674(_DWORD *a1)
{
  if ( a1[7] == 1 )
    sub_1407D933C();
  else
    ExFreePoolWithTag(a1, 0);
}
