/*
 * XREFs of sub_140661C18 @ 0x140661C18
 * Callers:
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_140764DB0 @ 0x140764DB0 (sub_140764DB0.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_14095336C @ 0x14095336C (sub_14095336C.c)
 *     sub_14095341C @ 0x14095341C (sub_14095341C.c)
 *     sub_140953CF8 @ 0x140953CF8 (sub_140953CF8.c)
 * Callees:
 *     sub_140661C4C @ 0x140661C4C (sub_140661C4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140661C18(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    sub_140661C4C();
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
