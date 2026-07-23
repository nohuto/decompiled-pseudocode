/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x1403136B8
 * Callers:
 *     RtlSparseArrayElementAllocate @ 0x140310714 (RtlSparseArrayElementAllocate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x1403125E0 (RtlCSparseBitmapBitmaskWrite.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1402868B0 (RtlpHpEnvAllocVA.c)
 *     RtlCSparseBitmapEnterLockingRegion @ 0x140313800 (RtlCSparseBitmapEnterLockingRegion.c)
 *     RtlpCSparseBitmapLock @ 0x140313840 (RtlpCSparseBitmapLock.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x140314BC0 (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapUnlock @ 0x140314BF8 (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x1405B7A50 (RtlpCSparseBitmapWaitOnAddress.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // rsi
  int v9; // edi
  __int64 v11; // r8
  int v12; // [rsp+28h] [rbp-58h]
  unsigned __int64 v13; // [rsp+38h] [rbp-48h]
  unsigned __int64 v14[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v16[16]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v18; // [rsp+C8h] [rbp+48h] BYREF

  v18 = a2;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)(a1 + 56), a2 >> 15) )
  {
    v17 = 4096LL;
    v14[0] = *(_QWORD *)a1 + (v5 << 12);
    v9 = RtlpHpEnvAllocVA(v14, &v17, 0LL, 1073745920, 4, v12, *(unsigned __int8 *)(a1 + 50), v13, 0);
    if ( v9 < 0 )
      return (unsigned int)v9;
    _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), v5);
    v7 = v18;
  }
  *a4 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(v16, a1);
  while ( 1 )
  {
    RtlpCSparseBitmapLock(a1, 0LL, a3);
    if ( *(_QWORD *)(a1 + 32) != v7 )
      break;
    RtlpCSparseBitmapUnlock(a3);
    RtlpCSparseBitmapWaitOnAddress(a1 + 32, &v18, v11, a1);
  }
  if ( !_bittest64(*(const signed __int64 **)a1, v7) )
  {
    v17 = 4096LL;
    v14[0] = *(_QWORD *)(a1 + 8) + (v7 << 12);
    v9 = RtlpHpEnvAllocVA(v14, &v17, 0LL, 1073745920, 4, v12, *(unsigned __int8 *)(a1 + 50), v13, 0);
    if ( v9 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3);
      v15 = *a4;
      RtlCSparseBitmapLeaveLockingRegion(&v15);
      return (unsigned int)v9;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)a1, v7);
  }
  return 0;
}
