/*
 * XREFs of sub_14097A08C @ 0x14097A08C
 * Callers:
 *     sub_14097A0B0 @ 0x14097A0B0 (sub_14097A0B0.c)
 *     sub_14097B500 @ 0x14097B500 (sub_14097B500.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14097A08C(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 8, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
