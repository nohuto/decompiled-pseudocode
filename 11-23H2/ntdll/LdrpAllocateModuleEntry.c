/*
 * XREFs of LdrpAllocateModuleEntry @ 0x18002E490
 * Callers:
 *     LdrpAllocatePlaceHolder @ 0x18002E360 (LdrpAllocatePlaceHolder.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007EE30 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x180033C00 (RtlAddRefActivationContext.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlGetActiveActivationContext @ 0x180077430 (RtlGetActiveActivationContext.c)
 */

__int64 __fastcall LdrpAllocateModuleEntry(__int64 a1)
{
  __int64 Heap; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdi
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rsi
  bool v10; // zf

  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, 312LL);
  if ( Heap )
  {
    v3 = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, 80LL);
    v5 = v3;
    if ( v3 )
    {
      v6 = 0;
      *(_QWORD *)(Heap + 152) = v3;
      if ( a1 )
      {
        *(_QWORD *)(Heap + 176) = a1;
        v7 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL);
        *(_DWORD *)(Heap + 272) = v7;
        v6 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 56) = Heap;
        v8 = *(_QWORD *)(a1 + 48);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 136);
          if ( v9 )
          {
            RtlAddRefActivationContext(v9, v7, v4);
            *(_QWORD *)(Heap + 136) = v9;
          }
        }
        else
        {
          RtlGetActiveActivationContext(Heap + 136);
          *(_DWORD *)(Heap + 268) = 4;
        }
      }
      *(_QWORD *)(Heap + 120) = Heap + 112;
      *(_QWORD *)(Heap + 112) = Heap + 112;
      *(_QWORD *)(Heap + 160) = v5;
      *(_QWORD *)(Heap + 168) = v5;
      *(_QWORD *)v5 = Heap + 160;
      *(_QWORD *)(v5 + 8) = Heap + 160;
      *(_QWORD *)(Heap + 144) = 0LL;
      v10 = LdrInitState == 1;
      *(_DWORD *)(v5 + 24) = 1;
      *(_DWORD *)(Heap + 276) = 2;
      if ( v10 && (void *)qword_180181310 != NtCurrentTeb()->ClientId.UniqueThread )
        *(_DWORD *)(Heap + 104) |= 0x20u;
      if ( (v6 & 4) != 0 )
        *(_DWORD *)(Heap + 104) |= 0x10000000u;
      if ( (v6 & 0x40) == 0 )
        *(_DWORD *)(Heap + 104) |= 4u;
      if ( (v6 & 0x8000000) != 0 )
        *(_DWORD *)(Heap + 104) |= 0x4000000u;
      *(_WORD *)(Heap + 108) = 6;
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0LL, Heap);
      return 0LL;
    }
  }
  return Heap;
}
