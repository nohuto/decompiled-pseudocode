/*
 * XREFs of RtlpHpLargeAlloc @ 0x1800643E8
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003CD60 (RtlpAllocateHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x180043970 (RtlpHpSegReAlloc.c)
 *     RtlpHpAllocateHeapInternal @ 0x180066E30 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x180039370 (RtlRbInsertNodeEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpHeapValidateProtection @ 0x180046858 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x1800473D0 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x1800478C4 (RtlpHpFreeVA.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1800643C4 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpQueryVA @ 0x18006475C (RtlpHpQueryVA.c)
 *     RtlpHpMetadataFree @ 0x180064850 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180065F18 (RtlpHpMetadataAlloc.c)
 *     RtlHeapZero @ 0x18008EF20 (RtlHeapZero.c)
 *     RtlpHeapLogRangeReserve @ 0x180115474 (RtlpHeapLogRangeReserve.c)
 */

PVOID __fastcall RtlpHpLargeAlloc(char *BaseAddress, __int16 a2, unsigned __int64 a3, char a4)
{
  __int128 v4; // xmm0
  PVOID v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r14
  unsigned __int64 v10; // rcx
  int v11; // r8d
  bool v12; // cf
  unsigned __int64 v13; // r9
  ULONG v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // r13
  int v17; // r12d
  int v18; // r14d
  int v19; // r8d
  unsigned __int64 v20; // r9
  ULONG v21; // eax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  _RTL_RB_TREE *v24; // rcx
  unsigned __int64 v25; // rdx
  BOOLEAN v26; // al
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  PVOID BaseAddressa; // [rsp+38h] [rbp-59h] BYREF
  signed __int64 v31; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-49h]
  __int64 v33; // [rsp+50h] [rbp-41h] BYREF
  __m128i v34; // [rsp+58h] [rbp-39h] BYREF
  char v35[8]; // [rsp+68h] [rbp-29h] BYREF
  _QWORD *v36; // [rsp+70h] [rbp-21h] BYREF
  void *v37; // [rsp+78h] [rbp-19h]
  __int128 v38; // [rsp+88h] [rbp-9h] BYREF
  __int64 v39[2]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v40[2]; // [rsp+A8h] [rbp+17h] BYREF

  v4 = *(_OWORD *)BaseAddress;
  BaseAddressa = 0LL;
  v7 = 0LL;
  v37 = 0LL;
  v38 = v4;
  v8 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v38);
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    if ( (*((_DWORD *)BaseAddress + 5) & 0x4000000) != 0 && 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2 )
      LOBYTE(v7) = 1;
    if ( BYTE1(*(_QWORD *)BaseAddress) == 3 )
      LOBYTE(v7) = 3;
    if ( BYTE1(*(_QWORD *)BaseAddress) == 2 )
      LOBYTE(v7) = 7;
    while ( 1 )
    {
      v32 = 0;
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        v9 = 0x200000LL;
        v10 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        v9 = 0LL;
        v32 = BYTE1(*(_QWORD *)BaseAddress) < 2u;
        v10 = a3 + (v32 << 12);
      }
      v31 = v10;
      if ( v10 < a3 )
        goto LABEL_53;
      v11 = (unsigned __int8)BYTE1(*(_QWORD *)BaseAddress);
      v12 = (*((_DWORD *)BaseAddress + 5) & 0x40000000) != 0;
      v13 = _mm_srli_si128(*(__m128i *)BaseAddress, 8).m128i_u64[0];
      *(_OWORD *)v39 = *(_OWORD *)BaseAddress;
      v14 = RtlpHpHeapValidateProtection(BaseAddress, v12 ? 64 : 4, v11, v13);
      if ( (int)RtlpHpAllocVA(&BaseAddressa, (ULONG_PTR *)&v31, v9, 0x2000, v14, (__int128 *)v39) < 0 )
      {
        BaseAddressa = 0LL;
LABEL_53:
        v34 = *(__m128i *)BaseAddress;
        RtlpHpMetadataFree(v8, &v34);
        v7 = v37;
        goto LABEL_54;
      }
      RtlpHpQueryVA(BaseAddressa, v15, &v36, v35);
      v16 = (a3 + 4095) >> 12;
      *v36 = BaseAddress;
      v33 = v16 << 12;
      if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v16 << 12, (__int64 *)BaseAddress) )
        goto LABEL_53;
      v17 = 4096;
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        v33 = (v16 << 12) - (((v16 << 12) - 1) & 0x1FFFFF) + 0x1FFFFF;
        v17 = (((unsigned __int8)v7 & 4) << 20) | 0x20001000;
        v18 = a4 & 2;
      }
      else
      {
        v18 = a4 & 2;
        if ( (a4 & 2) != 0 )
          v17 = 1073745920;
      }
      v19 = (unsigned __int8)BYTE1(*(_QWORD *)BaseAddress);
      v12 = (*((_DWORD *)BaseAddress + 5) & 0x40000000) != 0;
      v20 = _mm_srli_si128(*(__m128i *)BaseAddress, 8).m128i_u64[0];
      *(_OWORD *)v40 = *(_OWORD *)BaseAddress;
      v21 = RtlpHpHeapValidateProtection(BaseAddress, v12 ? 64 : 4, v19, v20);
      if ( (int)RtlpHpAllocVA(&BaseAddressa, (ULONG_PTR *)&v33, 0LL, v17, v21, (__int128 *)v40) >= 0 )
        break;
      if ( ((unsigned __int8)v7 & 3) != 1 )
        goto LABEL_53;
      LOBYTE(v7) = (unsigned __int8)v7 & 0xFE;
      v34 = *(__m128i *)BaseAddress;
      RtlpHpFreeVA(&BaseAddressa, (ULONG_PTR *)&v31, 0x8000, &v34);
      BaseAddressa = 0LL;
    }
    if ( ((unsigned __int8)v7 & 1) != 0 && v18 )
      RtlHeapZero(BaseAddressa, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(v8 + 24) = BaseAddressa;
    v22 = *(_DWORD *)(v8 + 32) & 0xFFD | (2 * (v32 | (v16 << 11)));
    *(_QWORD *)(v8 + 32) = v22;
    _BitScanForward64(&v23, v31);
    *(_QWORD *)(v8 + 32) = v22 ^ (unsigned __int8)(v22 ^ (4 * v23)) & 0xFC;
    *(_WORD *)(v8 + 24) = ((_WORD)v16 << 12) - a2;
    if ( (a4 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
    v24 = (_RTL_RB_TREE *)(BaseAddress + 72);
    v25 = *((_QWORD *)BaseAddress + 9);
    if ( (BaseAddress[80] & 1) != 0 && v25 )
      v25 ^= (unsigned __int64)v24;
    v26 = 0;
    if ( v25 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)BaseAddressa >= (*(_QWORD *)(v25 + 24) & 0xFFFFFFFFFFFF0000uLL) )
        {
          v27 = *(_QWORD *)(v25 + 8);
          if ( (BaseAddress[80] & 1) != 0 )
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
          if ( (BaseAddress[80] & 1) != 0 )
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
    RtlRbInsertNodeEx(v24, (PRTL_BALANCED_NODE)v25, v26, (PRTL_BALANCED_NODE)v8);
    if ( (a4 & 1) == 0 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
    _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 11, v31 / 4096);
    _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 12, v16);
    v7 = BaseAddressa;
    BaseAddressa = 0LL;
    if ( RtlGetCurrentServiceSessionId() )
      v28 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v28 = 2147353480LL;
    if ( *(_BYTE *)v28 )
    {
      RtlpHeapLogRangeReserve(BaseAddress, v7, v31);
      goto LABEL_54;
    }
  }
  else
  {
LABEL_54:
    if ( BaseAddressa )
    {
      v34 = *(__m128i *)BaseAddress;
      RtlpHpFreeVA(&BaseAddressa, (ULONG_PTR *)&v31, 0x8000, &v34);
    }
  }
  return v7;
}
