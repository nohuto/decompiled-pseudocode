/*
 * XREFs of QueryRegistryValue @ 0x1800B2300
 * Callers:
 *     _GetOverlayPackagePathFromKey @ 0x1800B21E4 (_GetOverlayPackagePathFromKey.c)
 *     _GetOverlayPackageTypeFromKey @ 0x1800B2282 (_GetOverlayPackageTypeFromKey.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall QueryRegistryValue(__int64 a1, __int64 a2, _DWORD *a3, void *a4, _DWORD *a5)
{
  _DWORD *Heap; // rdi
  int ValueKey; // eax
  unsigned int v10; // ebx
  size_t v11; // rax

  if ( !a5 )
    return 3221225485LL;
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(*a5 + 12));
  if ( !Heap )
    return 3221225626LL;
  ValueKey = NtQueryValueKey();
  v10 = ValueKey;
  if ( ValueKey < 0 )
  {
    if ( ValueKey != -2147483643 && ValueKey != -1073741789 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v11 = (unsigned int)Heap[2];
  if ( (_DWORD)v11 )
  {
    if ( (unsigned int)v11 <= *a5 )
    {
      *a5 = v11;
      if ( a4 )
        memmove(a4, Heap + 3, v11);
      if ( a3 )
        *a3 = Heap[1];
      goto LABEL_16;
    }
LABEL_15:
    v10 = -1073741789;
    *a5 = Heap[2];
    goto LABEL_16;
  }
  v10 = -1073741811;
LABEL_16:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  return v10;
}
