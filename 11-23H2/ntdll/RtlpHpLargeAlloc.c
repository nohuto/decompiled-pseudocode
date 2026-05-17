/*
 * XREFs of RtlpHpLargeAlloc @ 0x1800642B8
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x180043810 (RtlpHpSegReAlloc.c)
 *     RtlpHpAllocateHeapInternal @ 0x180066E14 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x180039210 (RtlRbInsertNodeEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpHeapValidateProtection @ 0x1800466F8 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x180047270 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x180047764 (RtlpHpFreeVA.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x180064294 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpQueryVA @ 0x18006462C (RtlpHpQueryVA.c)
 *     RtlpHpMetadataFree @ 0x180064720 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180065DE8 (RtlpHpMetadataAlloc.c)
 *     RtlHeapZero @ 0x18008F720 (RtlHeapZero.c)
 *     RtlpHeapLogRangeReserve @ 0x180116924 (RtlpHeapLogRangeReserve.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAlloc(__m128i *a1, __int16 a2, unsigned __int64 a3, char a4)
{
  __m128i v4; // xmm0
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // r14
  unsigned __int64 v10; // rcx
  int v11; // r8d
  bool v12; // cf
  unsigned __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // r13
  int v17; // r12d
  int v18; // r14d
  int v19; // r8d
  unsigned __int64 v20; // r9
  int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 *v24; // rcx
  unsigned __int64 v25; // rdx
  bool v26; // al
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v30; // [rsp+38h] [rbp-59h] BYREF
  __int64 v31; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-49h]
  unsigned __int64 v33; // [rsp+50h] [rbp-41h] BYREF
  __m128i v34; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v35[8]; // [rsp+68h] [rbp-29h] BYREF
  __m128i **v36; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-19h]
  __m128i v38; // [rsp+88h] [rbp-9h] BYREF
  __m128i v39; // [rsp+98h] [rbp+7h] BYREF
  __m128i v40[4]; // [rsp+A8h] [rbp+17h] BYREF

  v4 = *a1;
  v30 = 0LL;
  v7 = 0LL;
  v37 = 0LL;
  v38 = v4;
  v8 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v38);
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    if ( (a1[1].m128i_i32[1] & 0x4000000) != 0 && 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2 )
      LOBYTE(v7) = 1;
    if ( BYTE1(a1->m128i_i64[0]) == 3 )
      LOBYTE(v7) = 3;
    if ( BYTE1(a1->m128i_i64[0]) == 2 )
      LOBYTE(v7) = 7;
    while ( 1 )
    {
      v32 = 0;
      if ( (v7 & 1) != 0 )
      {
        v9 = 0x200000LL;
        v10 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        v9 = 0LL;
        v32 = BYTE1(a1->m128i_i64[0]) < 2u;
        v10 = a3 + (v32 << 12);
      }
      v31 = v10;
      if ( v10 < a3 )
        goto LABEL_53;
      v11 = (unsigned __int8)BYTE1(a1->m128i_i64[0]);
      v12 = (a1[1].m128i_i32[1] & 0x40000000) != 0;
      v13 = _mm_srli_si128(*a1, 8).m128i_u64[0];
      v39 = *a1;
      v14 = RtlpHpHeapValidateProtection((__int64)a1, v12 ? 64 : 4, v11, v13);
      if ( (int)RtlpHpAllocVA((__int64 *)&v30, &v31, v9, 0x2000, v14, (__int128 *)v39.m128i_i8) < 0 )
      {
        v30 = 0LL;
LABEL_53:
        v34 = *a1;
        RtlpHpMetadataFree(v8, &v34);
        v7 = v37;
        goto LABEL_54;
      }
      RtlpHpQueryVA(v30, v15, &v36, v35);
      v16 = (a3 + 4095) >> 12;
      *v36 = a1;
      v33 = v16 << 12;
      if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v16 << 12, a1->m128i_i64) )
        goto LABEL_53;
      v17 = 4096;
      if ( (v7 & 1) != 0 )
      {
        v33 = (v16 << 12) - (((v16 << 12) - 1) & 0x1FFFFF) + 0x1FFFFF;
        v17 = ((v7 & 4) << 20) | 0x20001000;
        v18 = a4 & 2;
      }
      else
      {
        v18 = a4 & 2;
        if ( (a4 & 2) != 0 )
          v17 = 1073745920;
      }
      v19 = (unsigned __int8)BYTE1(a1->m128i_i64[0]);
      v12 = (a1[1].m128i_i32[1] & 0x40000000) != 0;
      v20 = _mm_srli_si128(*a1, 8).m128i_u64[0];
      v40[0] = *a1;
      v21 = RtlpHpHeapValidateProtection((__int64)a1, v12 ? 64 : 4, v19, v20);
      if ( (int)RtlpHpAllocVA((__int64 *)&v30, (__int64 *)&v33, 0LL, v17, v21, (__int128 *)v40[0].m128i_i8) >= 0 )
        break;
      if ( (v7 & 3) != 1 )
        goto LABEL_53;
      LOBYTE(v7) = v7 & 0xFE;
      v34 = *a1;
      RtlpHpFreeVA(&v30, (unsigned __int64 *)&v31, 0x8000, (__int128 *)v34.m128i_i8);
      v30 = 0LL;
    }
    if ( (v7 & 1) != 0 && v18 )
      RtlHeapZero(v30, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(v8 + 24) = v30;
    v22 = *(_DWORD *)(v8 + 32) & 0xFFD | (2 * (v32 | (v16 << 11)));
    *(_QWORD *)(v8 + 32) = v22;
    _BitScanForward64(&v23, v31);
    *(_QWORD *)(v8 + 32) = v22 ^ (unsigned __int8)(v22 ^ (4 * v23)) & 0xFC;
    *(_WORD *)(v8 + 24) = ((_WORD)v16 << 12) - a2;
    if ( (a4 & 1) == 0 )
      RtlAcquireSRWLockExclusive(a1[4].m128i_i64);
    v24 = &a1[4].m128i_u64[1];
    v25 = a1[4].m128i_u64[1];
    if ( (a1[5].m128i_i8[0] & 1) != 0 && v25 )
      v25 ^= (unsigned __int64)v24;
    v26 = 0;
    if ( v25 )
    {
      while ( 1 )
      {
        if ( v30 >= (*(_QWORD *)(v25 + 24) & 0xFFFFFFFFFFFF0000uLL) )
        {
          v27 = *(_QWORD *)(v25 + 8);
          if ( (a1[5].m128i_i8[0] & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_31;
            v27 ^= v25;
          }
          if ( !v27 )
          {
LABEL_31:
            v26 = 1;
            break;
          }
        }
        else
        {
          v27 = *(_QWORD *)v25;
          if ( (a1[5].m128i_i8[0] & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_32;
            v27 ^= v25;
          }
          if ( !v27 )
          {
LABEL_32:
            v26 = 0;
            break;
          }
        }
        v25 = v27;
      }
    }
    RtlRbInsertNodeEx(v24, v25, v26, v8);
    if ( (a4 & 1) == 0 )
      RtlReleaseSRWLockExclusive(a1[4].m128i_i64);
    _InterlockedExchangeAdd64(&a1[5].m128i_i64[1], v31 / 4096);
    _InterlockedExchangeAdd64(a1[6].m128i_i64, v16);
    v7 = v30;
    v30 = 0LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v28 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v28 = 2147353480LL;
    if ( *(_BYTE *)v28 )
    {
      RtlpHeapLogRangeReserve(a1, v7, v31);
      goto LABEL_54;
    }
  }
  else
  {
LABEL_54:
    if ( v30 )
    {
      v34 = *a1;
      RtlpHpFreeVA(&v30, (unsigned __int64 *)&v31, 0x8000, (__int128 *)v34.m128i_i8);
    }
  }
  return v7;
}
