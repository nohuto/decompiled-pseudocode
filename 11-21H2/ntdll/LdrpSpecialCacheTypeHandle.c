/*
 * XREFs of LdrpSpecialCacheTypeHandle @ 0x1800933AC
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18001F100 (LdrpSetAlternateResourceModuleHandle.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall LdrpSpecialCacheTypeHandle(__int64 a1, char a2)
{
  char v4; // dl
  __int64 result; // rax
  void *v6; // rcx
  PVOID Heap; // rax
  unsigned __int64 v8; // rdi

  if ( !a1 )
    return 3221225485LL;
  v4 = gMUICacheType;
  result = 3221225473LL;
  if ( gMUICacheType )
  {
    if ( (gMUICacheType & 1) != 0 )
    {
      v6 = *(void **)(a1 + 40);
      if ( v6 )
      {
        NtClose(v6);
        *(_QWORD *)(a1 + 40) = 0LL;
        v4 = gMUICacheType;
        result = 0LL;
      }
    }
    if ( (v4 & 6) != 0 )
    {
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 32) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL
        && (v4 & 4) == 0
        && (v4 & 2) != 0
        && a2 )
      {
        if ( *(_DWORD *)(a1 + 56) == -1073741799 )
          return 3221225497LL;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, *(_QWORD *)(a1 + 48));
        v8 = (unsigned __int64)Heap;
        if ( !Heap )
          return 3221225495LL;
        memmove(Heap, (const void *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL), *(_QWORD *)(a1 + 48));
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL));
        *(_DWORD *)(a1 + 56) = -1073741799;
        *(_QWORD *)(a1 + 32) = v8 | 1;
      }
      return 0LL;
    }
  }
  return result;
}
