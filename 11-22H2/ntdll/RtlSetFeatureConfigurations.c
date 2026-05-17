/*
 * XREFs of RtlSetFeatureConfigurations @ 0x18010E920
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     ZwSetSystemInformation @ 0x1800A2500 (ZwSetSystemInformation.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlSetFeatureConfigurations(_QWORD *a1, int a2, const void *a3, unsigned __int64 a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rbx
  int v9; // ebp
  __int64 Heap; // rax
  __int64 v11; // rdi

  if ( a4 <= 0xFFFFFFFF )
  {
    v8 = 32LL * (unsigned int)a4;
    v9 = a4;
    if ( v8 > 0xFFFFFFFF || (unsigned int)v8 >= 0xFFFFFFE8 )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v8 + 24));
      v11 = Heap;
      if ( Heap )
      {
        *(_DWORD *)Heap = 0;
        *(_DWORD *)(Heap + 16) = a2;
        if ( a1 )
          *(_QWORD *)(Heap + 8) = *a1;
        *(_DWORD *)(Heap + 20) = v9;
        memmove((void *)(Heap + 24), a3, (unsigned int)v8);
        v7 = ZwSetSystemInformation();
        if ( v7 >= 0 )
          v7 = 0;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
