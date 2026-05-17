/*
 * XREFs of RtlpCreateLowFragHeap @ 0x18005347C
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180053710 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x1800202FC (RtlpGetHeapProtection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800206D4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x18002EFBC (RtlpInitializeLfhRandomDataArray.c)
 *     RtlQueryResourcePolicy @ 0x1800533F0 (RtlQueryResourcePolicy.c)
 *     RtlpInitializeLowFragHeap @ 0x180053660 (RtlpInitializeLowFragHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x180116BD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180116E68 (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpCreateLowFragHeap(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // esi
  __int64 v5; // rcx
  int HeapProtection; // eax
  int v7; // eax
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF
  __int64 v16; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0, 0, &v14, 4LL) >= 0 && v14 <= 10 )
    v2 = 3;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v5 = 0LL;
    v4 = v2 & 1;
  }
  else
  {
    v3 = RtlpAffinityState[0];
    v4 = v2 & 1;
    if ( (v2 & 1) != 0 )
      v3 = 1;
    v5 = 48 * ((unsigned int)(v3 - 1) + 69LL + 4LL * (unsigned int)(129 * v3));
  }
  v15 = 0LL;
  v16 = v5;
  HeapProtection = RtlpGetHeapProtection(a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v15, 0LL, &v16, 0x2000, HeapProtection) < 0 )
    return 0LL;
  v7 = RtlpAffinityState[0];
  if ( v4 )
    v7 = 1;
  v8 = 48LL * (unsigned int)(v7 - 1);
  v17 = (v8 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  v9 = RtlpGetHeapProtection(a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v15, 0LL, &v17, 4096, v9) < 0 )
  {
    v16 = 0LL;
    RtlpSecMemFreeVirtualMemory(v10, &v15, &v16, 0x8000LL);
    return 0LL;
  }
  v11 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v12 = 2147353472LL;
  if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, v15, v17, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v11);
    RtlpLogHeapCommit(a1, v15, v17, 9LL);
  }
  RtlpInitializeLowFragHeap(a1, v2, v15);
  *(_QWORD *)(*(_QWORD *)(v15 + 24) + 568LL) += v16;
  *(_QWORD *)(*(_QWORD *)(v15 + 24) + 576LL) += v17;
  *(_QWORD *)(v15 + 48) = v15 + v16;
  *(_QWORD *)(v15 + 40) = v15 + v17;
  *(_QWORD *)(v15 + 32) = v8 + v15 + 3312;
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray();
  }
  *(_DWORD *)(v15 + 672) = v2;
  return v15;
}
