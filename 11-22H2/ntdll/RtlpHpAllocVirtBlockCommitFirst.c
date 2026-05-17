/*
 * XREFs of RtlpHpAllocVirtBlockCommitFirst @ 0x18008270C
 * Callers:
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x180046824 (RtlpGetHeapProtection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180046C90 (RtlpSecMemFreeVirtualMemory.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpHpAllocVirtBlockCommitFirst(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbx
  int HeapProtection; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+78h] [rbp+28h] BYREF
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF

  v15 = a3;
  v4 = 0LL;
  v11 = *a2 + a3 + 4096;
  v14 = 0LL;
  HeapProtection = RtlpGetHeapProtection(a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v14, 0LL, &v11, 4096, HeapProtection) >= 0 )
  {
    if ( v15 )
      RtlpSecMemFreeVirtualMemory(v8, &v14, &v15, 0x4000LL);
    v12 = 4096LL;
    v13 = v14 - 4096 + v11;
    RtlpSecMemFreeVirtualMemory(v13, &v13, &v12, 0x4000LL);
    v9 = v11;
    v4 = v15 + v14;
    *a2 = v11 - v12 - v15;
    *a4 = v9;
  }
  return v4;
}
