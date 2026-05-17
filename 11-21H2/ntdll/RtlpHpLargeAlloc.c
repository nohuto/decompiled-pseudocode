/*
 * XREFs of RtlpHpLargeAlloc @ 0x180058D3C
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x18002E5E4 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18001AD20 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpFreeVA @ 0x180021224 (RtlpHpFreeVA.c)
 *     RtlpHpHeapValidateProtection @ 0x1800227CC (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x180022888 (RtlpHpAllocVA.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpMetadataAlloc @ 0x1800557D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180056AB0 (RtlpHpMetadataFree.c)
 *     RtlpHpQueryVA @ 0x180058CE8 (RtlpHpQueryVA.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x18005908C (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlHeapZero @ 0x180093F90 (RtlHeapZero.c)
 *     RtlpHeapLogRangeReserve @ 0x18011508C (RtlpHeapLogRangeReserve.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAlloc(__int64 a1, __int16 a2, unsigned __int64 a3, char a4)
{
  __int128 v4; // xmm0
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  bool v11; // cf
  int v12; // eax
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  int v15; // r12d
  int v16; // esi
  int v17; // eax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 *v23; // rcx
  unsigned __int64 v24; // rdx
  bool v25; // al
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v29; // [rsp+38h] [rbp-59h] BYREF
  __int64 v30; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-49h] BYREF
  __int128 v32; // [rsp+58h] [rbp-39h] BYREF
  int v33; // [rsp+68h] [rbp-29h] BYREF
  __int64 *v34; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-19h]
  unsigned __int64 v36; // [rsp+80h] [rbp-11h]
  __int128 v37; // [rsp+88h] [rbp-9h] BYREF
  __int128 v38; // [rsp+98h] [rbp+7h] BYREF
  __int128 v39[4]; // [rsp+A8h] [rbp+17h] BYREF
  unsigned int v40; // [rsp+F8h] [rbp+67h]

  v4 = *(_OWORD *)a1;
  v29 = 0LL;
  v7 = 0LL;
  v36 = 0LL;
  v37 = v4;
  v8 = RtlpHpMetadataAlloc(0x28uLL, 0x28uLL, 0, &v37);
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    if ( (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
      LOBYTE(v7) = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
    if ( BYTE1(*(_QWORD *)a1) == 3 )
      LOBYTE(v7) = 3;
    if ( BYTE1(*(_QWORD *)a1) == 2 )
      LOBYTE(v7) = 7;
    while ( 1 )
    {
      v40 = 0;
      if ( (v7 & 1) != 0 )
      {
        v9 = 0x200000LL;
        v10 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        v9 = 0LL;
        v40 = BYTE1(*(_QWORD *)a1) < 2u;
        v10 = a3 + (v40 << 12);
      }
      v30 = v10;
      if ( v10 < a3 )
        goto LABEL_52;
      v11 = (*(_DWORD *)(a1 + 20) & 0x40000000) != 0;
      v38 = *(_OWORD *)a1;
      v12 = RtlpHpHeapValidateProtection(a1, v11 ? 64 : 4);
      if ( (int)RtlpHpAllocVA((__int64 *)&v29, &v30, v9, 0x2000, v12, &v38) < 0 )
      {
        v29 = 0LL;
LABEL_52:
        v32 = *(_OWORD *)a1;
        RtlpHpMetadataFree(v8, &v32);
        v7 = v36;
        goto LABEL_53;
      }
      RtlpHpQueryVA(v29, v13, &v34, &v33);
      *v34 = a1;
      v35 = (a3 + 4095) >> 12;
      v14 = v35 << 12;
      v31 = v35 << 12;
      if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v35 << 12, a1) )
        goto LABEL_52;
      v15 = 4096;
      if ( (v7 & 1) != 0 )
      {
        v31 = v14 - ((v14 - 1) & 0x1FFFFF) + 0x1FFFFF;
        v15 = ((v7 & 4) << 20) | 0x20001000;
        v16 = a4 & 2;
      }
      else
      {
        v16 = a4 & 2;
        if ( (a4 & 2) != 0 )
          v15 = 1073745920;
      }
      v11 = (*(_DWORD *)(a1 + 20) & 0x40000000) != 0;
      v39[0] = *(_OWORD *)a1;
      v17 = RtlpHpHeapValidateProtection(a1, v11 ? 64 : 4);
      if ( (int)RtlpHpAllocVA((__int64 *)&v29, (__int64 *)&v31, 0LL, v15, v17, v39) >= 0 )
        break;
      if ( (v7 & 3) != 1 )
        goto LABEL_52;
      LOBYTE(v7) = v7 & 0xFE;
      v32 = *(_OWORD *)a1;
      RtlpHpFreeVA(&v29, (unsigned __int64 *)&v30, 0x8000, &v32);
      v29 = 0LL;
    }
    if ( (v7 & 1) != 0 && v16 )
      RtlHeapZero(v29, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v20 = v35;
    *(_QWORD *)(v8 + 24) = v29;
    v21 = *(_DWORD *)(v8 + 32) & 0xFFD | (2 * (v40 | (v20 << 11)));
    *(_QWORD *)(v8 + 32) = v21;
    _BitScanForward64(&v22, v30);
    *(_QWORD *)(v8 + 32) = v21 ^ (unsigned __int8)(v21 ^ (4 * v22)) & 0xFC;
    *(_WORD *)(v8 + 24) = ((_WORD)v20 << 12) - a2;
    if ( (a4 & 1) == 0 )
      RtlAcquireSRWLockExclusive(a1 + 64, v21, v18, v19);
    v23 = (unsigned __int64 *)(a1 + 72);
    v24 = *(_QWORD *)(a1 + 72);
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
    {
      if ( v24 )
        v24 ^= (unsigned __int64)v23;
      else
        v24 = 0LL;
    }
    v25 = 0;
    if ( v24 )
    {
      while ( 1 )
      {
        if ( v29 >= (*(_QWORD *)(v24 + 24) & 0xFFFFFFFFFFFF0000uLL) )
        {
          v26 = *(_QWORD *)(v24 + 8);
          if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
          {
            if ( !v26 )
              goto LABEL_35;
            v26 ^= v24;
          }
          if ( !v26 )
          {
LABEL_35:
            v25 = 1;
            break;
          }
        }
        else
        {
          v26 = *(_QWORD *)v24;
          if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
          {
            if ( !v26 )
              goto LABEL_36;
            v26 ^= v24;
          }
          if ( !v26 )
          {
LABEL_36:
            v25 = 0;
            break;
          }
        }
        v24 = v26;
      }
    }
    RtlRbInsertNodeEx(v23, v24, v25, v8);
    if ( (a4 & 1) == 0 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v30 / 4096);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v20);
    v7 = v29;
    v29 = 0LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v27 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v27 = 2147353480LL;
    if ( *(_BYTE *)v27 )
    {
      RtlpHeapLogRangeReserve(a1, v7, v30);
      goto LABEL_53;
    }
  }
  else
  {
LABEL_53:
    if ( v29 )
    {
      v32 = *(_OWORD *)a1;
      RtlpHpFreeVA(&v29, (unsigned __int64 *)&v30, 0x8000, &v32);
    }
  }
  return v7;
}
