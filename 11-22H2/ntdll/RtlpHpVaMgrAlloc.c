/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x18004A920
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x18004A8B0 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180038A70 (RtlRbRemoveNode.c)
 *     RtlpHpEnvFreeVA @ 0x180047988 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFind @ 0x18004AFF8 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18004B09C (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrFree @ 0x180064BC8 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1800815A4 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x18008163C (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeSplit @ 0x180083D98 (RtlpHpVaMgrRangeSplit.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

PVOID __fastcall RtlpHpVaMgrAlloc(PRTL_SRWLOCK SRWLock, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r14
  _RTL_BALANCED_NODE *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  void *v11; // rsi
  PVOID result; // rax
  __int64 v13; // rax
  char v14; // cl
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-40h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h]
  ULONG_PTR v20; // [rsp+60h] [rbp-10h]

  v3 = *a2;
  HIDWORD(v18) = 0x200000;
  LODWORD(v18) = 0x100000;
  v5 = a3;
  *(_QWORD *)((char *)&v18 + 4) = 0x20000000100000LL;
  v19 = 0x10000040000000LL;
  if ( !v3 )
    __int2c();
  if ( v3 <= (unsigned __int64)(LOWORD(SRWLock[5].Value) << 20) >> 1 )
  {
    v7 = v3 >> 20;
    RtlAcquireSRWLockExclusive(SRWLock);
    v8 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(SRWLock, (unsigned __int16)v7, (unsigned __int16)(v5 >> 20), &v17);
    v9 = (__int64)v8;
    if ( v8 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[1], v8);
      v10 = v17;
      if ( v17 != v9 )
      {
        *(_OWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_BYTE *)v9 = 1;
        *(_BYTE *)(v9 + 1) = BYTE4(SRWLock[5].Ptr);
        RtlpHpVaMgrRangeSplit(SRWLock, v9, (v10 - v9) >> 5);
        RtlpHpVaMgrFree(SRWLock, v9);
        v9 = v10;
      }
      goto LABEL_7;
    }
    RtlReleaseSRWLockExclusive(SRWLock);
    v9 = RtlpHpVaMgrRegionAllocate(SRWLock);
    if ( v9 )
    {
      RtlAcquireSRWLockExclusive(SRWLock);
LABEL_7:
      v11 = (void *)(*(_QWORD *)(SRWLock[3].Value + 8)
                   + ((unsigned __int64)(v9 - *(_QWORD *)(SRWLock[3].Value + 40)) >> *(_DWORD *)(SRWLock[3].Value + 24) << 20));
      *(_OWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_BYTE *)v9 = 1;
      *(_BYTE *)(v9 + 1) = BYTE4(SRWLock[5].Ptr);
      if ( *(_WORD *)(v9 + 24) > (unsigned __int16)v7 )
      {
        v13 = RtlpHpVaMgrRangeSplit(SRWLock, v9, (unsigned __int16)v7);
        RtlpHpVaMgrFree(SRWLock, v13);
      }
      BaseAddress = v11;
      RtlReleaseSRWLockExclusive(SRWLock);
      return BaseAddress;
    }
    return 0LL;
  }
  if ( a3 <= *((unsigned int *)&v18 + (((unsigned __int64)BYTE6(SRWLock[5].Ptr) >> 1) & 7)) )
    v5 = *((unsigned int *)&v18 + (((unsigned __int64)BYTE6(SRWLock[5].Ptr) >> 1) & 7));
  RegionSize = v3 - ((v5 - 1) & (v5 + v3 - 1)) + v5 - 1;
  result = (PVOID)RtlpHpVaMgrAllocAligned(SRWLock, &RegionSize, v5);
  BaseAddress = result;
  if ( result )
  {
    v19 = 0LL;
    v14 = BYTE4(SRWLock[5].Ptr);
    v18 = 0LL;
    BYTE1(v18) = v14;
    v20 = RegionSize >> 20;
    LOBYTE(v18) = 5;
    if ( RtlpHpVaMgrRangeCreate(SRWLock, result, &v18) )
    {
      *a2 = RegionSize;
      return BaseAddress;
    }
    RtlpHpEnvFreeVA(&BaseAddress, &RegionSize, 0x8000, (BYTE6(SRWLock[5].Ptr) >> 1) & 7, SRWLock[4].Value);
    return 0LL;
  }
  return result;
}
