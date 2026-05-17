/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x1800F9AC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlQueryRegistryValueWithFallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        void *a6,
        _DWORD *a7)
{
  _DWORD *Heap; // rdi
  int ValueKey; // ebx

  if ( !a1 && !a2 )
    return 3221225485LL;
  if ( a4 >= 0xFFFFFFF0 )
    return (unsigned int)-1073741675;
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a4 + 16);
  if ( Heap )
  {
    ValueKey = -1073741772;
    if ( !a1 || (ValueKey = NtQueryValueKey(), ValueKey == -1073741772) )
    {
      if ( !a2 )
      {
LABEL_20:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
        return (unsigned int)ValueKey;
      }
      ValueKey = NtQueryValueKey();
    }
    if ( (int)(ValueKey + 0x80000000) < 0 || ValueKey == -2147483643 )
    {
      if ( a5 )
        *a5 = Heap[1];
      if ( ValueKey >= 0 )
      {
        if ( a4 < Heap[2] )
          ValueKey = -2147483643;
        else
          memmove(a6, Heap + 3, (unsigned int)Heap[2]);
      }
      *a7 = Heap[2];
    }
    goto LABEL_20;
  }
  return (unsigned int)-1073741801;
}
