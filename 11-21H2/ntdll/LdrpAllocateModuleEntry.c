/*
 * XREFs of LdrpAllocateModuleEntry @ 0x18004DF68
 * Callers:
 *     LdrpAllocatePlaceHolder @ 0x18004DE38 (LdrpAllocatePlaceHolder.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180083010 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x18001C2D0 (RtlAddRefActivationContext.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18004D120 (RtlIsCriticalSectionLockedByThread.c)
 *     RtlGetActiveActivationContext @ 0x180050D30 (RtlGetActiveActivationContext.c)
 */

__int64 __fastcall LdrpAllocateModuleEntry(__int64 a1)
{
  __int64 Heap; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // esi
  __int64 v6; // rbp
  volatile signed __int32 *v7; // rbp
  bool v8; // zf

  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, 312LL);
  if ( Heap )
  {
    v3 = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, 80LL);
    v4 = v3;
    if ( v3 )
    {
      v5 = 0;
      *(_QWORD *)(Heap + 152) = v3;
      if ( a1 )
      {
        *(_QWORD *)(Heap + 176) = a1;
        *(_DWORD *)(Heap + 272) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v5 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 56) = Heap;
        v6 = *(_QWORD *)(a1 + 48);
        if ( v6 )
        {
          v7 = *(volatile signed __int32 **)(v6 + 136);
          if ( v7 )
          {
            RtlAddRefActivationContext(v7);
            *(_QWORD *)(Heap + 136) = v7;
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
      *(_QWORD *)(Heap + 160) = v4;
      *(_QWORD *)(Heap + 168) = v4;
      *(_QWORD *)v4 = Heap + 160;
      *(_QWORD *)(v4 + 8) = Heap + 160;
      *(_QWORD *)(Heap + 144) = 0LL;
      v8 = LdrInitState == 1;
      *(_DWORD *)(v4 + 24) = 1;
      *(_DWORD *)(Heap + 276) = 2;
      if ( v8 && !RtlIsCriticalSectionLockedByThread((__int64)&LdrpDllNotificationLock) )
        *(_DWORD *)(Heap + 104) |= 0x20u;
      if ( (v5 & 4) != 0 )
        *(_DWORD *)(Heap + 104) |= 0x10000000u;
      if ( (v5 & 0x40) == 0 )
        *(_DWORD *)(Heap + 104) |= 4u;
      if ( (v5 & 0x8000000) != 0 )
        *(_DWORD *)(Heap + 104) |= 0x4000000u;
      *(_WORD *)(Heap + 108) = 6;
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, Heap);
      return 0LL;
    }
  }
  return Heap;
}
