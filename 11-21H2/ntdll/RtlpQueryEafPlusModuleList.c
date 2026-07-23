/*
 * XREFs of RtlpQueryEafPlusModuleList @ 0x1800EEB28
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x1800ECBA0 (RtlQueryImageMitigationPolicy.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
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

  memset(a2, 0, 0x400uLL);
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
