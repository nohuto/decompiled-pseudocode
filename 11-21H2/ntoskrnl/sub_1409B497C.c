/*
 * XREFs of sub_1409B497C @ 0x1409B497C
 * Callers:
 *     sub_1409B3D44 @ 0x1409B3D44 (sub_1409B3D44.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall sub_1409B497C(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x48457350u);
}
