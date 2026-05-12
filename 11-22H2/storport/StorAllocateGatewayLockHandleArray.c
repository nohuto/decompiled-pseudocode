/*
 * XREFs of StorAllocateGatewayLockHandleArray @ 0x1C0065EFC
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C00346D8 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 */

bool __fastcall StorAllocateGatewayLockHandleArray(__int64 a1)
{
  __int64 v2; // rax
  __int64 Pool; // rax

  *(_QWORD *)(a1 + 6024) = 0LL;
  v2 = *(unsigned int *)(a1 + 904);
  if ( (unsigned int)v2 <= 1 )
    return 0;
  Pool = RaidAllocatePool(64LL, 24 * v2, 1095197010LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 6024) = Pool;
  return Pool != 0;
}
