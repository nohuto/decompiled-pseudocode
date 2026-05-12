/*
 * XREFs of StorAllocateGatewayLockHandleArray @ 0x1C0023B58
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0033A68 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 */

bool __fastcall StorAllocateGatewayLockHandleArray(__int64 a1)
{
  __int64 v2; // rcx
  __int64 Pool; // rax
  bool result; // al

  *(_QWORD *)(a1 + 5928) = 0LL;
  v2 = *(unsigned int *)(a1 + 840);
  result = 0;
  if ( (unsigned int)v2 > 1 )
  {
    Pool = RaidAllocatePool(64LL, 24 * v2, 1095197010LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 5928) = Pool;
    if ( Pool )
      return 1;
  }
  return result;
}
