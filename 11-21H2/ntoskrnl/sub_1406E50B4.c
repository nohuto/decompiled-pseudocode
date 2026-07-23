/*
 * XREFs of sub_1406E50B4 @ 0x1406E50B4
 * Callers:
 *     sub_1406E4FA4 @ 0x1406E4FA4 (sub_1406E4FA4.c)
 *     sub_140AFF540 @ 0x140AFF540 (sub_140AFF540.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406E50B4(_QWORD *a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x240uLL, 0x74537350u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v4 = 32LL;
  do
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag += 2;
    --v4;
  }
  while ( v4 );
  v3[64] = 0LL;
  result = 0LL;
  *a1 = v3;
  return result;
}
