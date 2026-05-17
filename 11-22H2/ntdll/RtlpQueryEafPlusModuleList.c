/*
 * XREFs of RtlpQueryEafPlusModuleList @ 0x1800EE3E0
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x1800EC470 (RtlQueryImageMitigationPolicy.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryEafPlusModuleList(__int64 a1, void *a2)
{
  __int64 result; // rax
  int v4; // ebx
  unsigned int i; // ebx
  void *ProcessHeap; // rcx
  _DWORD *Heap; // rdi
  int ValueKey; // eax
  int v9; // ecx
  size_t v10; // rax
  unsigned int v11; // [rsp+30h] [rbp-38h]
  _BYTE v12[48]; // [rsp+38h] [rbp-30h] BYREF

  memset_thunk_772440563353939046(a2, 0, 0x400uLL);
  result = RtlInitUnicodeStringEx((__int64)v12, (__int64)L"EAFModules");
  v4 = result;
  if ( (int)result >= 0 )
  {
    for ( i = 1036; ; i = v11 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return 3221225495LL;
      Heap = (_DWORD *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, i);
      if ( !Heap )
        return 3221225495LL;
      ValueKey = NtQueryValueKey();
      v4 = ValueKey;
      if ( ValueKey >= 0 )
        break;
      if ( ValueKey != -2147483643 )
        goto LABEL_14;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
    }
    v9 = Heap[1];
    if ( ((v9 - 3) & 0xFFFFFFFB) != 0 && v9 == 1 )
    {
      v10 = (unsigned int)Heap[2];
      if ( (unsigned int)v10 <= 0x400 )
        memmove(a2, Heap + 3, v10);
      else
        v4 = -2147483643;
    }
    else
    {
      v4 = -1073741788;
    }
LABEL_14:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
    result = (unsigned int)v4;
    if ( v4 >= 0 )
      return 0LL;
  }
  if ( v4 == -1073741772 )
    return 0LL;
  return result;
}
