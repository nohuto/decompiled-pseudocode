/*
 * XREFs of sub_1406EBE54 @ 0x1406EBE54
 * Callers:
 *     sub_1406EBCCC @ 0x1406EBCCC (sub_1406EBCCC.c)
 *     sub_1406EBDB0 @ 0x1406EBDB0 (sub_1406EBDB0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406EBE54(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
