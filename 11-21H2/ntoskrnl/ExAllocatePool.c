/*
 * XREFs of ExAllocatePool @ 0x14025D110
 * Callers:
 *     sub_140A8FF70 @ 0x140A8FF70 (sub_140A8FF70.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePool(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}
