/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x18008DF90
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
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
  unsigned int v11; // r15d
  _DWORD *Heap; // rdi
  int v13; // ebx
  char v15; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 || a2 )
  {
    if ( a4 >= 0xFFFFFFF0 )
      return (unsigned int)-1073741675;
    v11 = a4 + 16;
    Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a4 + 16);
    if ( !Heap )
      return (unsigned int)-1073741801;
    v13 = -1073741772;
    if ( !a1 || (v13 = NtQueryValueKey(a1, a3, 2LL, Heap, v11, &v15), v13 == -1073741772) )
    {
      if ( !a2 )
      {
LABEL_15:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
        return (unsigned int)v13;
      }
      v13 = NtQueryValueKey(a2, a3, 2LL, Heap, v11, &v15);
    }
    if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
    {
      if ( a5 )
        *a5 = Heap[1];
      if ( v13 >= 0 )
      {
        if ( a4 < Heap[2] )
          v13 = -2147483643;
        else
          memmove(a6, Heap + 3, (unsigned int)Heap[2]);
      }
      *a7 = Heap[2];
    }
    goto LABEL_15;
  }
  return 3221225485LL;
}
