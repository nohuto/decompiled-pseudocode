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

PVOID __fastcall RtlpHpLargeAlloc(char *BaseAddress, __int16 a2, ULONG_PTR a3, char a4)
{
  __int128 v4; // xmm0
  PVOID v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  ULONG_PTR v10; // rax
  bool v11; // cf
  ULONG v12; // eax
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  int v15; // r12d
  int v16; // esi
  ULONG v17; // eax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  _RTL_RB_TREE *v21; // rcx
  unsigned __int64 v22; // rdx
  BOOLEAN v23; // al
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  PVOID BaseAddressa; // [rsp+38h] [rbp-59h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-51h] BYREF
  ULONG_PTR v29[2]; // [rsp+48h] [rbp-49h] BYREF
  __int128 v30; // [rsp+58h] [rbp-39h] BYREF
  int v31; // [rsp+68h] [rbp-29h] BYREF
  _QWORD *v32; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-19h]
  void *v34; // [rsp+80h] [rbp-11h]
  __int128 v35; // [rsp+88h] [rbp-9h] BYREF
  __int64 v36[2]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v37[2]; // [rsp+A8h] [rbp+17h] BYREF
  unsigned int v38; // [rsp+F8h] [rbp+67h]

  v4 = *(_OWORD *)BaseAddress;
  BaseAddressa = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  v35 = v4;
  v8 = RtlpHpMetadataAlloc(0x28uLL, 0x28uLL, 0, &v35);
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    if ( (*((_DWORD *)BaseAddress + 5) & 0x4000000) != 0 )
      LOBYTE(v7) = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
    if ( BYTE1(*(_QWORD *)BaseAddress) == 3 )
      LOBYTE(v7) = 3;
    if ( BYTE1(*(_QWORD *)BaseAddress) == 2 )
      LOBYTE(v7) = 7;
    while ( 1 )
    {
      v38 = 0;
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        v9 = 0x200000LL;
        v10 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        v9 = 0LL;
        v38 = BYTE1(*(_QWORD *)BaseAddress) < 2u;
        v10 = a3 + (v38 << 12);
      }
      RegionSize = v10;
      if ( v10 < a3 )
        goto LABEL_52;
      v11 = (*((_DWORD *)BaseAddress + 5) & 0x40000000) != 0;
      *(_OWORD *)v36 = *(_OWORD *)BaseAddress;
      v12 = RtlpHpHeapValidateProtection(BaseAddress, v11 ? 64 : 4);
      if ( (int)RtlpHpAllocVA(&BaseAddressa, &RegionSize, v9, 0x2000, v12, (__int128 *)v36) < 0 )
      {
        BaseAddressa = 0LL;
LABEL_52:
        v30 = *(_OWORD *)BaseAddress;
        RtlpHpMetadataFree(v8, &v30);
        v7 = v34;
        goto LABEL_53;
      }
      RtlpHpQueryVA((__int64)BaseAddressa, v13, &v32, &v31);
      *v32 = BaseAddress;
      v33 = (a3 + 4095) >> 12;
      v14 = v33 << 12;
      v29[0] = v33 << 12;
      if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v33 << 12, BaseAddress) )
        goto LABEL_52;
      v15 = 4096;
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        v29[0] = v14 - ((v14 - 1) & 0x1FFFFF) + 0x1FFFFF;
        v15 = (((unsigned __int8)v7 & 4) << 20) | 0x20001000;
        v16 = a4 & 2;
      }
      else
      {
        v16 = a4 & 2;
        if ( (a4 & 2) != 0 )
          v15 = 1073745920;
      }
      v11 = (*((_DWORD *)BaseAddress + 5) & 0x40000000) != 0;
      *(_OWORD *)v37 = *(_OWORD *)BaseAddress;
      v17 = RtlpHpHeapValidateProtection(BaseAddress, v11 ? 64 : 4);
      if ( (int)RtlpHpAllocVA(&BaseAddressa, v29, 0LL, v15, v17, (__int128 *)v37) >= 0 )
        break;
      if ( ((unsigned __int8)v7 & 3) != 1 )
        goto LABEL_52;
      LOBYTE(v7) = (unsigned __int8)v7 & 0xFE;
      v30 = *(_OWORD *)BaseAddress;
      RtlpHpFreeVA(&BaseAddressa, &RegionSize, 0x8000, &v30);
      BaseAddressa = 0LL;
    }
    if ( ((unsigned __int8)v7 & 1) != 0 && v16 )
      RtlHeapZero(BaseAddressa, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v18 = v33;
    *(_QWORD *)(v8 + 24) = BaseAddressa;
    v19 = *(_DWORD *)(v8 + 32) & 0xFFD | (2 * (v38 | (v18 << 11)));
    *(_QWORD *)(v8 + 32) = v19;
    _BitScanForward64(&v20, RegionSize);
    *(_QWORD *)(v8 + 32) = v19 ^ (unsigned __int8)(v19 ^ (4 * v20)) & 0xFC;
    *(_WORD *)(v8 + 24) = ((_WORD)v18 << 12) - a2;
    if ( (a4 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
    v21 = (_RTL_RB_TREE *)(BaseAddress + 72);
    v22 = *((_QWORD *)BaseAddress + 9);
    if ( (BaseAddress[80] & 1) != 0 )
    {
      if ( v22 )
        v22 ^= (unsigned __int64)v21;
      else
        v22 = 0LL;
    }
    v23 = 0;
    if ( v22 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)BaseAddressa >= (*(_QWORD *)(v22 + 24) & 0xFFFFFFFFFFFF0000uLL) )
        {
          v24 = *(_QWORD *)(v22 + 8);
          if ( (BaseAddress[80] & 1) != 0 )
          {
            if ( !v24 )
              goto LABEL_35;
            v24 ^= v22;
          }
          if ( !v24 )
          {
LABEL_35:
            v23 = 1;
            break;
          }
        }
        else
        {
          v24 = *(_QWORD *)v22;
          if ( (BaseAddress[80] & 1) != 0 )
          {
            if ( !v24 )
              goto LABEL_36;
            v24 ^= v22;
          }
          if ( !v24 )
          {
LABEL_36:
            v23 = 0;
            break;
          }
        }
        v22 = v24;
      }
    }
    RtlRbInsertNodeEx(v21, (PRTL_BALANCED_NODE)v22, v23, (PRTL_BALANCED_NODE)v8);
    if ( (a4 & 1) == 0 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
    _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 11, (__int64)RegionSize / 4096);
    _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 12, v18);
    v7 = BaseAddressa;
    BaseAddressa = 0LL;
    if ( RtlGetCurrentServiceSessionId() )
      v25 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v25 = 2147353480LL;
    if ( *(_BYTE *)v25 )
    {
      RtlpHeapLogRangeReserve(BaseAddress, v7, RegionSize);
      goto LABEL_53;
    }
  }
  else
  {
LABEL_53:
    if ( BaseAddressa )
    {
      v30 = *(_OWORD *)BaseAddress;
      RtlpHpFreeVA(&BaseAddressa, &RegionSize, 0x8000, &v30);
    }
  }
  return v7;
}
