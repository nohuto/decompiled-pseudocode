/*
 * XREFs of RtlpQueryEafPlusModuleList @ 0x1800EF7F0
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x1800ED7A0 (RtlQueryImageMitigationPolicy.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpQueryEafPlusModuleList(HANDLE KeyHandle, void *a2)
{
  NTSTATUS result; // eax
  int v5; // ebx
  ULONG Length; // ebx
  void *ProcessHeap; // rcx
  _DWORD *Heap; // rdi
  NTSTATUS v9; // eax
  int v10; // ecx
  size_t v11; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF

  memset_thunk_772440563353939046(a2, 0, 0x400uLL);
  result = RtlInitUnicodeStringEx(&DestinationString, L"EAFModules");
  v5 = result;
  if ( result >= 0 )
  {
    for ( Length = 1036; ; Length = ResultLength )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return -1073741801;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, Length);
      if ( !Heap )
        return -1073741801;
      v9 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap, Length, &ResultLength);
      v5 = v9;
      if ( v9 >= 0 )
        break;
      if ( v9 != -2147483643 )
        goto LABEL_14;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
    v10 = Heap[1];
    if ( ((v10 - 3) & 0xFFFFFFFB) != 0 && v10 == 1 )
    {
      v11 = (unsigned int)Heap[2];
      ResultLength = v11;
      if ( (unsigned int)v11 <= 0x400 )
        memmove(a2, Heap + 3, v11);
      else
        v5 = -2147483643;
    }
    else
    {
      v5 = -1073741788;
    }
LABEL_14:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    result = v5;
    if ( v5 >= 0 )
      return 0;
  }
  if ( v5 == -1073741772 )
    return 0;
  return result;
}
