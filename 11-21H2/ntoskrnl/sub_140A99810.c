/*
 * XREFs of sub_140A99810 @ 0x140A99810
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_140A99810(POOL_TYPE a1, SIZE_T a2, ULONG a3)
{
  if ( (dword_140D57524 & 2) != 0 )
    return 0LL;
  else
    return ExAllocatePoolWithTag(a1, a2, a3);
}
