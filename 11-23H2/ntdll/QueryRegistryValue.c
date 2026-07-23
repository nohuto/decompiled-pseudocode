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

__int64 __fastcall QueryRegistryValue(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, _DWORD *a5)
{
  ULONG Length; // ebx
  _DWORD *Heap; // rdi
  NTSTATUS ValueKey; // eax
  unsigned int v13; // ebx
  size_t v14; // rax
  ULONG ResultLength[10]; // [rsp+30h] [rbp-28h] BYREF

  ResultLength[0] = 0;
  if ( !a5 )
    return 3221225485LL;
  Length = *a5 + 12;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
  if ( !Heap )
    return 3221225626LL;
  ValueKey = NtQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Heap, Length, ResultLength);
  v13 = ValueKey;
  if ( ValueKey < 0 )
  {
    if ( ValueKey != -2147483643 && ValueKey != -1073741789 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v14 = (unsigned int)Heap[2];
  if ( (_DWORD)v14 )
  {
    if ( (unsigned int)v14 <= *a5 )
    {
      *a5 = v14;
      if ( a4 )
        memmove(a4, Heap + 3, v14);
      if ( a3 )
        *a3 = Heap[1];
      goto LABEL_16;
    }
LABEL_15:
    v13 = -1073741789;
    *a5 = Heap[2];
    goto LABEL_16;
  }
  v13 = -1073741811;
LABEL_16:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v13;
}
