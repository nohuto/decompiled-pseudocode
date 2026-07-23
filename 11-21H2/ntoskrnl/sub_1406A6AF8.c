/*
 * XREFs of sub_1406A6AF8 @ 0x1406A6AF8
 * Callers:
 *     sub_1406A6378 @ 0x1406A6378 (sub_1406A6378.c)
 *     sub_1406A6520 @ 0x1406A6520 (sub_1406A6520.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406A6D60 @ 0x1406A6D60 (sub_1406A6D60.c)
 *     sub_1406A6ECC @ 0x1406A6ECC (sub_1406A6ECC.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1406A6F60 (PsChargeProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall sub_1406A6AF8(__int64 a1, char a2)
{
  SIZE_T v4; // rbp
  _QWORD *PoolWithTag; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbp
  _QWORD *result; // rax

  v4 = (unsigned int)((dword_140D3CA8C + 1) << 6);
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, v4, 0x6274624Fu);
  if ( !PoolWithTag )
    return 0LL;
  if ( a1 && (int)PsChargeProcessPagedPoolQuota(a1, 128LL) < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6274624Fu);
    return 0LL;
  }
  memset(PoolWithTag, 0, v4);
  PoolWithTag[2] = a1;
  v6 = (unsigned int)dword_140D3CA8C;
  *((_DWORD *)PoolWithTag + 10) = *(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL);
  if ( (_DWORD)v6 )
  {
    v7 = PoolWithTag + 8;
    do
    {
      *v7 = 0LL;
      v7 += 8;
      --v6;
    }
    while ( v6 );
  }
  v8 = sub_1406A6ECC(PoolWithTag, 0LL);
  v10 = v8;
  if ( !v8 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6274624Fu);
    if ( a1 )
      PsReturnProcessPagedPoolQuota(a1, 128LL);
    return 0LL;
  }
  LOBYTE(v9) = a2;
  sub_1406A6D60(PoolWithTag, v8, PoolWithTag + 8, v9);
  PoolWithTag[1] = v10;
  if ( a1 )
    *((_BYTE *)PoolWithTag + 44) |= 0x10u;
  PoolWithTag[7] = 0LL;
  result = PoolWithTag;
  PoolWithTag[6] = 0LL;
  return result;
}
