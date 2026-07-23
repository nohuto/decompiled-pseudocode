/*
 * XREFs of RtlpInitializeHeapSegment @ 0x180047EBC
 * Callers:
 *     RtlpExtendHeap @ 0x180045E78 (RtlpExtendHeap.c)
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpInsertFreeBlock @ 0x180044950 (RtlpInsertFreeBlock.c)
 *     RtlpCreateUCREntry @ 0x18004642C (RtlpCreateUCREntry.c)
 *     RtlpGetHeapProtection @ 0x180046824 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180047384 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlLogStackBackTraceEx @ 0x18005FC44 (RtlLogStackBackTraceEx.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x180116FC0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
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
  __int64 v12; // r14
  char *v13; // r8
  signed __int64 v14; // r14
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // r14
  __int64 v22; // r8
  __int64 *v23; // rbx
  __int64 *v24; // rax
  __int64 v26; // rdx
  ULONG Protect; // eax
  __int64 v28; // rcx
  __int16 v29; // ax
  unsigned int NtGlobalFlag; // [rsp+78h] [rbp+48h]
  __int64 v31; // [rsp+88h] [rbp+58h]

  v9 = RegionSize;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( RegionSize - a6 > 0xFFFFF000 )
    return 0;
  v12 = a3 + 15;
  v13 = BaseAddress;
  v14 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v31 = (__int64)(RegionSize - a6) / 4096;
  v15 = v14 + a2;
  v16 = v14 + a2 + 80;
  if ( v16 >= (unsigned __int64)BaseAddress )
  {
    if ( v16 < RegionSize )
    {
      v26 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
      RegionSize = (v15 - (_QWORD)BaseAddress + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(RegionSize, v26, a1, (__int64 *)(a1 + 376)) )
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
            v28 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v28 = 2147353472LL;
          if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
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
  v17 = (__int64)(v9 - (_QWORD)v13) % 4096;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  v18 = (__int64)(v9 - (_QWORD)v13) / 4096;
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v29 = RtlLogStackBackTraceEx(1LL, v17);
    v13 = BaseAddress;
    *(_WORD *)(a2 + 88) = v29;
  }
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  v19 = (unsigned int)((_DWORD)v31 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v19;
  *(_DWORD *)(a2 + 56) = v31;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v15;
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a1 + 576) += v19;
  *(_QWORD *)(a1 + 568) += v19;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v15 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v20 = *(_QWORD *)(a2 + 40);
  if ( v20 == a2 )
  {
    LOBYTE(v21) = 0;
  }
  else
  {
    v21 = ((unsigned __int64)v14 >> 16) + 1;
    if ( v21 >= 0xFE )
    {
      RtlpLogHeapFailure(3, v20, v15, a2, 0LL, 0LL);
      v13 = BaseAddress;
    }
  }
  *(_BYTE *)(v15 + 14) = v21;
  RtlpCreateUCREntry(a1, a2, (__int64)(v13 - 48), (unsigned int)((_DWORD)v18 << 12), v15, (__int64 *)&RegionSize);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( RegionSize )
    RtlpInsertFreeBlock(a1, v15, RegionSize);
  v22 = a1 + 288;
  v23 = (__int64 *)(a2 + 24);
  v24 = *(__int64 **)(a1 + 296);
  if ( *v24 == a1 + 288 )
  {
    *v23 = v22;
    v23[1] = (__int64)v24;
    *v24 = (__int64)v23;
    *(_QWORD *)(a1 + 296) = v23;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, v22, 0, *v24, 0LL);
  }
  ++*(_DWORD *)(a1 + 600);
  return 1;
}
