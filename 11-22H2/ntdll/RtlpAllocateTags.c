/*
 * XREFs of RtlpAllocateTags @ 0x1800FE5B8
 * Callers:
 *     RtlCreateTagHeap @ 0x18007F9F0 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x18005FC44 (RtlLogStackBackTraceEx.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpAllocateTags(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int16 v5; // bp
  __int16 v6; // r15
  _QWORD *v7; // r14
  __int64 v8; // rdi
  _WORD *v9; // rdx
  __int16 v10; // r8
  __int16 v11; // ax
  int v12; // ecx
  ULONG_PTR v14[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+20h] BYREF

  v2 = RtlpGlobalTagHeap;
  v4 = a1;
  if ( !RtlpGlobalTagHeap )
    return 0LL;
  if ( a1 )
  {
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(RtlpGlobalTagHeap + 152) = -285217025;
    v5 = 2048;
    *(_DWORD *)(v2 + 112) = 1;
    v4 = v2;
  }
  v6 = 0;
  if ( (*(_DWORD *)(v4 + 112) & 0x8000000) != 0 )
    v6 = RtlLogStackBackTraceEx(1u);
  v7 = (_QWORD *)(v4 + 232);
  if ( !*(_QWORD *)(v4 + 232) )
  {
    RegionSize = 147384LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v4 + 232), 0LL, &RegionSize, 0x2000u, 4u) < 0 )
      return 0LL;
    *(_DWORD *)(v4 + 224) = 134152192;
    ++a2;
  }
  v8 = *(unsigned __int16 *)(v4 + 224);
  if ( a2 > *(unsigned __int16 *)(v4 + 226) - (unsigned int)v8 )
    return 0LL;
  v9 = (_WORD *)(*v7 + 72 * v8);
  BaseAddress = v9;
  if ( (unsigned int)v8 < (unsigned int)v8 + a2 )
  {
    v10 = (__int16)v9;
    do
    {
      if ( ((v10 + 72) & 0xFFFu) <= 0x48uLL )
      {
        v14[0] = 4096LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v14, 0x1000u, 4u) < 0 )
          return 0LL;
        v9 = BaseAddress;
      }
      v11 = v8;
      LODWORD(v8) = v8 + 1;
      v9[8] = v5 | v11;
      *((_WORD *)BaseAddress + 9) = v6;
      v12 = *(unsigned __int16 *)(v4 + 224);
      v9 = (char *)BaseAddress + 72;
      BaseAddress = v9;
      v10 = (__int16)v9;
    }
    while ( (unsigned int)v8 < a2 + v12 );
    LOWORD(v8) = v12;
  }
  *(_WORD *)(v4 + 224) = a2 + v8;
  return *v7 + 72LL * (unsigned __int16)v8;
}
