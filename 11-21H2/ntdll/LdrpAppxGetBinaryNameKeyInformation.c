/*
 * XREFs of LdrpAppxGetBinaryNameKeyInformation @ 0x1800D6990
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800D6600 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 */

__int64 __fastcall LdrpAppxGetBinaryNameKeyInformation(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rsi
  __int64 Heap; // rdi
  int ValueKey; // eax
  int v8; // ebx
  unsigned int v10; // [rsp+88h] [rbp+20h]

  v5 = 0LL;
  Heap = 0LL;
  ValueKey = NtQueryValueKey();
  v8 = ValueKey;
  if ( ValueKey < 0 )
  {
    if ( ValueKey == -1073741789 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v10);
      if ( !Heap )
        return (unsigned int)-1073741801;
      v8 = NtQueryValueKey();
      if ( v8 < 0 )
      {
LABEL_14:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        return (unsigned int)v8;
      }
      if ( *(_DWORD *)(Heap + 4) != 1
        || *(_DWORD *)(Heap + 8) < 4u
        || (v5 = Heap + 12, *(_WORD *)(Heap + 12 + 2 * ((unsigned __int64)*(unsigned int *)(Heap + 8) >> 1) - 2)) )
      {
        v8 = -1073739509;
        goto LABEL_14;
      }
    }
    if ( v8 >= 0 )
    {
      *a2 = v5;
      *a3 = Heap;
      return (unsigned int)v8;
    }
    if ( !Heap )
      return (unsigned int)v8;
    goto LABEL_14;
  }
  return (unsigned int)-1073739509;
}
