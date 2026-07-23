/*
 * XREFs of sub_14080AB10 @ 0x14080AB10
 * Callers:
 *     sub_1409EA760 @ 0x1409EA760 (sub_1409EA760.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 */

int __fastcall sub_14080AB10(__int64 a1, volatile signed __int64 *a2)
{
  int result; // eax
  volatile __int64 *v3; // rcx
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd64(a2, 1uLL);
  v3 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v4, 0);
  if ( *v3 )
    return ExfUnblockPushLock(v3, 0LL);
  return result;
}
