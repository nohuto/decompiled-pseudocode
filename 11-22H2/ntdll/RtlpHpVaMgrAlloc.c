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

__int64 __fastcall RtlpHpVaMgrAlloc(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rax
  char v14; // cl
  unsigned __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h]
  unsigned __int64 v20; // [rsp+60h] [rbp-10h]

  v3 = *a2;
  HIDWORD(v18) = 0x200000;
  LODWORD(v18) = 0x100000;
  v5 = a3;
  *(_QWORD *)((char *)&v18 + 4) = 0x20000000100000LL;
  v19 = 0x10000040000000LL;
  if ( !v3 )
    __int2c();
  if ( v3 <= (unsigned __int64)(*(unsigned __int16 *)(a1 + 40) << 20) >> 1 )
  {
    v7 = v3 >> 20;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
    v8 = RtlpHpVaMgrRangeFind(a1, (unsigned __int16)v7, (unsigned __int16)(v5 >> 20), &v17);
    v9 = v8;
    if ( v8 )
    {
      RtlRbRemoveNode(a1 + 8, v8);
      v10 = v17;
      if ( v17 != v9 )
      {
        *(_OWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_BYTE *)v9 = 1;
        *(_BYTE *)(v9 + 1) = *(_BYTE *)(a1 + 44);
        RtlpHpVaMgrRangeSplit(a1, v9, (v10 - v9) >> 5);
        RtlpHpVaMgrFree(a1, v9);
        v9 = v10;
      }
      goto LABEL_7;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    v9 = RtlpHpVaMgrRegionAllocate(a1);
    if ( v9 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
LABEL_7:
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
          + ((unsigned __int64)(v9 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20);
      *(_OWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_BYTE *)v9 = 1;
      *(_BYTE *)(v9 + 1) = *(_BYTE *)(a1 + 44);
      if ( *(_WORD *)(v9 + 24) > (unsigned __int16)v7 )
      {
        v13 = RtlpHpVaMgrRangeSplit(a1, v9, (unsigned __int16)v7);
        RtlpHpVaMgrFree(a1, v13);
      }
      v16 = v11;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      return v16;
    }
    return 0LL;
  }
  if ( a3 <= *((unsigned int *)&v18 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7)) )
    v5 = *((unsigned int *)&v18 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7));
  v15 = v3 - ((v5 - 1) & (v5 + v3 - 1)) + v5 - 1;
  result = RtlpHpVaMgrAllocAligned(a1, &v15, v5);
  v16 = result;
  if ( result )
  {
    v19 = 0LL;
    v14 = *(_BYTE *)(a1 + 44);
    v18 = 0LL;
    BYTE1(v18) = v14;
    v20 = v15 >> 20;
    LOBYTE(v18) = 5;
    if ( RtlpHpVaMgrRangeCreate(a1, result, &v18) )
    {
      *a2 = v15;
      return v16;
    }
    RtlpHpEnvFreeVA(
      (__int64)&v16,
      (__int64)&v15,
      0x8000,
      (*(unsigned __int8 *)(a1 + 46) >> 1) & 7,
      *(_QWORD *)(a1 + 32));
    return 0LL;
  }
  return result;
}
