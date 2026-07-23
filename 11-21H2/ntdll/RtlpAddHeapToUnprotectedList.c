/*
 * XREFs of RtlpAddHeapToUnprotectedList @ 0x18002F674
 * Callers:
 *     RtlpMoveHeapBetweenLists @ 0x18002F448 (RtlpMoveHeapBetweenLists.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

unsigned __int64 __fastcall RtlpAddHeapToUnprotectedList(__int64 a1)
{
  struct _PEB *v1; // rbx
  unsigned __int64 result; // rax
  unsigned int v4; // edi
  unsigned int MaximumNumberOfHeaps; // ecx
  void **v6; // rbp
  void **ProcessHeaps; // r8

  v1 = NtCurrentPeb();
  result = v1->NumberOfHeaps;
  v4 = result + (unsigned __int16)RtlpNumberOfProtectedHeaps;
  if ( v4 < 0xFFFE )
  {
    MaximumNumberOfHeaps = v1->MaximumNumberOfHeaps;
    if ( v4 == MaximumNumberOfHeaps )
    {
      v1->MaximumNumberOfHeaps = 2 * MaximumNumberOfHeaps;
      result = (unsigned __int64)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16LL * MaximumNumberOfHeaps);
      v6 = (void **)result;
      if ( !result )
      {
        v1->MaximumNumberOfHeaps = v4;
        return result;
      }
      memmove((void *)result, v1->ProcessHeaps, 8LL * v1->NumberOfHeaps);
      ProcessHeaps = v1->ProcessHeaps;
      if ( ProcessHeaps != (void **)&RtlpProcessHeapsListBuffer )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ProcessHeaps);
      LODWORD(result) = v1->NumberOfHeaps;
      v1->ProcessHeaps = v6;
    }
    v1->ProcessHeaps[(unsigned int)result] = (void *)a1;
    ++v1->NumberOfHeaps;
    result = LOWORD(v1->NumberOfHeaps);
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      *(_WORD *)(a1 + 28) = result;
    else
      *(_WORD *)(a1 + 208) = result;
  }
  return result;
}
