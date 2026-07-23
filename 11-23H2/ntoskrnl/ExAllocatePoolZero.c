/*
 * XREFs of ExAllocatePoolZero @ 0x14031CA50
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExAllocatePoolZero(int a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithTag((POOL_TYPE)(a1 | 0x400), a2, a3);
}
