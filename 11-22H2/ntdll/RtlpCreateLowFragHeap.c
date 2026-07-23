/*
 * XREFs of RtlpCreateLowFragHeap @ 0x1800494C4
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180049ADC (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetHeapProtection @ 0x180046824 (RtlpGetHeapProtection.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x1800468D4 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180046C90 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlQueryResourcePolicy @ 0x180049E30 (RtlQueryResourcePolicy.c)
 *     RtlpInitializeLowFragHeap @ 0x18004A6D8 (RtlpInitializeLowFragHeap.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x180116FC0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180117254 (RtlpLogHeapExtendEvent.c)
 */

PVOID __fastcall RtlpCreateLowFragHeap(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // esi
  ULONG_PTR v5; // rcx
  ULONG Protect; // eax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r15
  ULONG HeapProtection; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v15; // [rsp+70h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+48h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+50h] BYREF
  ULONG_PTR v18; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v15, 4LL) >= 0 && v15 <= 10 )
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
  BaseAddress = 0LL;
  RegionSize = v5;
  Protect = RtlpGetHeapProtection((_DWORD *)a1, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
    return 0LL;
  v7 = RtlpAffinityState[0];
  if ( v4 )
    v7 = 1;
  v8 = (unsigned int)(v7 - 1);
  v9 = (unsigned int)v8;
  v18 = (48 * v8 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  HeapProtection = RtlpGetHeapProtection((_DWORD *)a1, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v18, 0x1000u, HeapProtection) < 0 )
  {
    RegionSize = 0LL;
    RtlpSecMemFreeVirtualMemory(v11, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  v12 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v13 = 2147353472LL;
  if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, (int)BaseAddress, v18, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v12);
    RtlpLogHeapCommit(a1, BaseAddress, v18, 9LL);
  }
  RtlpInitializeLowFragHeap(a1, v2, BaseAddress);
  *(_QWORD *)(*((_QWORD *)BaseAddress + 3) + 568LL) += RegionSize;
  *(_QWORD *)(*((_QWORD *)BaseAddress + 3) + 576LL) += v18;
  *((_QWORD *)BaseAddress + 6) = (char *)BaseAddress + RegionSize;
  *((_QWORD *)BaseAddress + 5) = (char *)BaseAddress + v18;
  *((_QWORD *)BaseAddress + 4) = (char *)BaseAddress + 48 * v9 + 3312;
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray();
  }
  *((_DWORD *)BaseAddress + 168) = v2;
  return BaseAddress;
}
