/*
 * XREFs of RtlpInitializeHeapSegment @ 0x1800304FC
 * Callers:
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x18001D3E0 (RtlLogStackBackTraceEx.c)
 *     RtlpGetHeapProtection @ 0x1800202FC (RtlpGetHeapProtection.c)
 *     RtlpCreateUCREntry @ 0x180020E2C (RtlpCreateUCREntry.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x18002283C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpInsertFreeBlock @ 0x1800231D4 (RtlpInsertFreeBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x180116BD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *BaseAddress,
        ULONG_PTR RegionSize)
{
  ULONG_PTR v9; // r15
  __int64 v12; // rsi
  char *v13; // r8
  signed __int64 v14; // rsi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 v21; // r8
  __int64 *v22; // rbx
  __int64 *v23; // rax
  __int64 v25; // rdx
  ULONG Protect; // eax
  __int64 v27; // rcx
  __int16 v28; // ax
  unsigned int NtGlobalFlag; // [rsp+78h] [rbp+48h]
  __int64 v30; // [rsp+88h] [rbp+58h]

  v9 = RegionSize;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( RegionSize - a6 > 0xFFFFF000 )
    return 0;
  v12 = a3 + 15;
  v13 = BaseAddress;
  v14 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v30 = (__int64)(RegionSize - a6) / 4096;
  v15 = v14 + a2;
  v16 = v14 + a2 + 80;
  if ( v16 >= (unsigned __int64)BaseAddress )
  {
    if ( v16 < RegionSize )
    {
      v25 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
      RegionSize = (v15 - (_QWORD)BaseAddress + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(RegionSize, v25, a1, (__int64 *)(a1 + 376)) )
      {
        Protect = RtlpGetHeapProtection((_DWORD *)a1, 1);
        if ( ZwAllocateVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)&BaseAddress,
               0LL,
               &RegionSize,
               0x1000u,
               Protect) >= 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v27 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v27 = 2147353472LL;
          if ( *(_BYTE *)v27 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(a1, BaseAddress, RegionSize, 3LL);
          v13 = &BaseAddress[RegionSize];
          BaseAddress += RegionSize;
          goto LABEL_3;
        }
      }
      ++*(_DWORD *)(a1 + 632);
    }
    return 0;
  }
LABEL_3:
  *(_WORD *)(a2 + 8) = v14 >> 4;
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  v17 = (__int64)(v9 - (_QWORD)v13) / 4096;
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v28 = RtlLogStackBackTraceEx(1u);
    v13 = BaseAddress;
    *(_WORD *)(a2 + 88) = v28;
  }
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  v18 = (unsigned int)((_DWORD)v30 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v18;
  *(_DWORD *)(a2 + 56) = v30;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v15;
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a1 + 576) += v18;
  *(_QWORD *)(a1 + 568) += v18;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v15 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v19 = *(_QWORD *)(a2 + 40);
  if ( v19 == a2 )
  {
    LOBYTE(v20) = 0;
  }
  else
  {
    v20 = ((unsigned __int64)v14 >> 16) + 1;
    if ( v20 >= 0xFE )
    {
      RtlpLogHeapFailure(3, v19, v15, a2, 0LL, 0LL);
      v13 = BaseAddress;
    }
  }
  *(_BYTE *)(v15 + 14) = v20;
  RtlpCreateUCREntry(a1, a2, (__int64)(v13 - 48), (unsigned int)((_DWORD)v17 << 12), v15, (__int64 *)&RegionSize);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( RegionSize )
    RtlpInsertFreeBlock(a1, v15, RegionSize);
  v21 = a1 + 288;
  v22 = (__int64 *)(a2 + 24);
  v23 = *(__int64 **)(a1 + 296);
  if ( *v23 == a1 + 288 )
  {
    *v22 = v21;
    v22[1] = (__int64)v23;
    *v23 = (__int64)v22;
    *(_QWORD *)(a1 + 296) = v22;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, v21, 0, *v23, 0LL);
  }
  ++*(_DWORD *)(a1 + 600);
  return 1;
}
