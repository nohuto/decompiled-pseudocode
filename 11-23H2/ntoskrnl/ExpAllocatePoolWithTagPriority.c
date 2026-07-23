/*
 * XREFs of ExpAllocatePoolWithTagPriority @ 0x140AAECF4
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x14034EBA0 (ExAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402AD4E0 (ExpAllocatePoolWithTagFromNode.c)
 *     MmResourcesAvailable @ 0x1402AF160 (MmResourcesAvailable.c)
 */

__int64 __fastcall ExpAllocatePoolWithTagPriority(POOL_TYPE a1, ULONG_PTR a2, unsigned int a3, unsigned int a4, int a5)
{
  if ( a4 == 32 || (a1 & 2) != 0 || (unsigned int)MmResourcesAvailable(a1 & 0xDF, a2, a4) || a2 <= 0xFE0 )
    return ExpAllocatePoolWithTagFromNode(a1, a2, a3, a5, (a4 >> 3) & 1);
  else
    return 0LL;
}
