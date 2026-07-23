/*
 * XREFs of sub_1402DDABC @ 0x1402DDABC
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 *     sub_1403A6D44 @ 0x1403A6D44 (sub_1403A6D44.c)
 *     sub_14056205C @ 0x14056205C (sub_14056205C.c)
 *     sub_14065F5D4 @ 0x14065F5D4 (sub_14065F5D4.c)
 *     sub_1407793D0 @ 0x1407793D0 (sub_1407793D0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402DDABC(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
