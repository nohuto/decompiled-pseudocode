/*
 * XREFs of RtlpHpHeapAllocate @ 0x180055288
 * Callers:
 *     RtlpHpHeapCreate @ 0x180054CB4 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x180021224 (RtlpHpFreeVA.c)
 *     RtlpHpAllocVA @ 0x180022888 (RtlpHpAllocVA.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180055544 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpMetadataAlloc @ 0x1800557D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataCommit @ 0x180056AF0 (RtlpHpMetadataCommit.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpLogHeapCommit @ 0x180116BD4 (RtlpLogHeapCommit.c)
 */

volatile signed __int64 *__fastcall RtlpHpHeapAllocate(__int64 a1, unsigned int a2, __int128 *a3)
{
  ULONG_PTR v4; // rsi
  int v5; // edi
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int16 v8; // r15
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  ULONG_PTR v12; // r13
  __int64 v13; // rcx
  int v14; // r10d
  ULONG v15; // r14d
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rbx
  ULONG_PTR v18; // rcx
  __int64 v20; // rax
  ULONG_PTR v21[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v22[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24[2]; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR RegionSize; // [rsp+C0h] [rbp+50h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+58h] BYREF

  BaseAddress = 0LL;
  v4 = 4096LL;
  v5 = 0;
  v6 = 64LL;
  v21[0] = 4096LL;
  v7 = *a3;
  v8 = 1;
  v9 = (((unsigned __int64)(unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6;
  v23 = *a3;
  if ( a2 <= 0x40 )
    v6 = a2;
  *(_OWORD *)v22 = v7;
  v10 = v9 + 9 * (v6 + 15) - (((_BYTE)v6 - 1) & 7);
  v11 = v10 + v9 + (unsigned int)v6 * (v9 + 64) - (((_BYTE)v10 - 1) & 0x3F);
  v12 = 4095 - ((129 * v11 + 10238) & 0xFFF) + 129 * v11 + 10239;
  RegionSize = v12;
  v13 = *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v23);
  if ( !v13
    || (RtlpHpAppCompatFlags & 8) != 0
    || (v14 & 0x40000000) != 0
    || BYTE2(v22[0])
    || v12 >= *(unsigned int *)(v13 + 528) )
  {
    if ( BYTE1(v22[0]) >= 2u )
    {
      if ( (unsigned __int8)(BYTE1(v22[0]) - 2) <= 1u )
        RegionSize = 0x200000LL;
    }
    else
    {
      v5 = 0x1000000;
    }
    v15 = (v14 & 0x40000000) != 0 ? 64 : 4;
    *(_OWORD *)v24 = v7;
    if ( (int)RtlpHpAllocVA(&BaseAddress, &RegionSize, 0LL, v5 | 0x2000u, v15, (__int128 *)v24) < 0 )
    {
LABEL_27:
      v17 = 0LL;
      goto LABEL_16;
    }
    if ( BYTE1(v22[0]) == 3 )
    {
      v5 = 0x20000000;
    }
    else
    {
      if ( BYTE1(v22[0]) != 2 )
        goto LABEL_9;
      v5 = 541065216;
    }
    v21[0] = RegionSize;
LABEL_9:
    *(_OWORD *)v22 = *a3;
    if ( (int)RtlpHpAllocVA(&BaseAddress, v21, 0LL, v5 | 0x1000u, v15, (__int128 *)v22) >= 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v16 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v16 = 2147353472LL;
      if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v4 = v21[0];
        RtlpLogHeapCommit(BaseAddress, BaseAddress, v21[0], 11LL);
      }
      else
      {
        v4 = v21[0];
      }
      v17 = (volatile signed __int64 *)BaseAddress;
      v8 = 0;
      BaseAddress = 0LL;
      goto LABEL_15;
    }
    goto LABEL_27;
  }
  *(_OWORD *)v22 = v7;
  v20 = RtlpHpMetadataAlloc(v12, 4096LL, 1LL, v22);
  v17 = (volatile signed __int64 *)v20;
  if ( v20 )
  {
    *(_OWORD *)v24 = *a3;
    RtlpHpMetadataCommit(v20, v20 + 4096, RegionSize - 4096, (unsigned int)v24, 0);
LABEL_15:
    memset((void *)v17, 0, 0x840uLL);
    *((_QWORD *)v17 + 29) = v17 + 264;
    *((_QWORD *)v17 + 30) = (char *)v17 + v4;
    *((_QWORD *)v17 + 31) = (char *)v17 + v12;
    v18 = RegionSize;
    *((_WORD *)v17 + 15) &= ~1u;
    *((_WORD *)v17 + 15) |= v8;
    *((_QWORD *)v17 + 32) = (char *)v17 + v18;
    _InterlockedExchangeAdd64(v17 + 16, RegionSize >> 12);
    _InterlockedExchangeAdd64(v17 + 17, v21[0] >> 12);
  }
LABEL_16:
  if ( BaseAddress )
  {
    *(_OWORD *)v24 = *a3;
    RtlpHpFreeVA(&BaseAddress, &RegionSize, v5 | 0x8000, (__int128 *)v24);
  }
  return v17;
}
