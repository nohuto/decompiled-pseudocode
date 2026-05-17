/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x180055CE8
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x180055C78 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18001A490 (RtlRbRemoveNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrRangeFind @ 0x180055ECC (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrFree @ 0x180055F70 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x180056120 (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x180056194 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrRangeCreate @ 0x180056224 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x18005687C (RtlpHpVaMgrAllocAligned.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(
        unsigned __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  char v18; // dl
  unsigned __int64 v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+28h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h]
  unsigned __int64 v24; // [rsp+50h] [rbp-10h]

  v4 = *a2;
  *(_QWORD *)&v22 = 0x10000000100000LL;
  v5 = a3;
  *((_QWORD *)&v22 + 1) = 0x20000000200000LL;
  LODWORD(v23) = 0x40000000;
  if ( !v4 )
    __int2c();
  if ( v4 <= (unsigned __int64)(*(unsigned __int16 *)(a1 + 40) << 20) >> 1 )
  {
    v8 = v4 >> 20;
    RtlAcquireSRWLockExclusive(a1, (unsigned __int64)a2, a3, a4);
    v9 = RtlpHpVaMgrRangeFind(a1, (unsigned __int16)v8, (unsigned __int16)(v5 >> 20), &v21);
    v10 = v9;
    if ( v9 )
    {
      RtlRbRemoveNode((unsigned __int64 *)(a1 + 8), v9);
      v11 = v21;
      if ( v21 != v10 )
      {
        *(_OWORD *)v10 = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_BYTE *)v10 = 1;
        *(_BYTE *)(v10 + 1) = *(_BYTE *)(a1 + 44);
        RtlpHpVaMgrRangeSplit(a1, v10, (v11 - v10) >> 5);
        RtlpHpVaMgrFree(a1, v10);
        v10 = v11;
      }
      goto LABEL_7;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    v10 = RtlpHpVaMgrRegionAllocate(a1);
    if ( v10 )
    {
      RtlAcquireSRWLockExclusive(a1, v14, v15, v16);
LABEL_7:
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
          + ((unsigned __int64)(v10 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24)
                                                                                             + 24LL) << 20);
      *(_OWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_BYTE *)v10 = 1;
      *(_BYTE *)(v10 + 1) = *(_BYTE *)(a1 + 44);
      if ( *(_WORD *)(v10 + 24) > (unsigned __int16)v8 )
      {
        v17 = RtlpHpVaMgrRangeSplit(a1, v10, (unsigned __int16)v8);
        RtlpHpVaMgrFree(a1, v17);
      }
      v20 = v12;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      return v20;
    }
    return 0LL;
  }
  if ( a3 <= *((unsigned int *)&v22 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7)) )
    v5 = *((unsigned int *)&v22 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7));
  v19 = v4 - ((v5 - 1) & (v5 + v4 - 1)) + v5 - 1;
  result = RtlpHpVaMgrAllocAligned(a1, &v19, v5);
  v20 = result;
  if ( result )
  {
    v18 = *(_BYTE *)(a1 + 44);
    v22 = 0LL;
    BYTE1(v22) = v18;
    v24 = v19 >> 20;
    v23 = 0LL;
    LOBYTE(v22) = 5;
    if ( RtlpHpVaMgrRangeCreate(a1, result, &v22) )
    {
      *a2 = v19;
      return v20;
    }
    ZwFreeVirtualMemory(-1LL, &v20, &v19, 0x8000LL);
    return 0LL;
  }
  return result;
}
