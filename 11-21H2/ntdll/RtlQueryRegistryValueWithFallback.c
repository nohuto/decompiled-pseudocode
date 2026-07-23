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

NTSTATUS __cdecl RtlQueryRegistryValueWithFallback(
        HANDLE PrimaryHandle,
        HANDLE FallbackHandle,
        PUNICODE_STRING ValueName,
        ULONG ValueLength,
        PULONG ValueType,
        PVOID ValueData,
        PULONG ResultLength)
{
  ULONG Length; // esi
  ULONG *Heap; // rdi
  int v14; // ebx
  ULONG v15; // [rsp+60h] [rbp+8h] BYREF

  if ( __PAIR128__((unsigned __int64)PrimaryHandle, (unsigned __int64)FallbackHandle) == 0 )
    return -1073741811;
  Length = ValueLength + 16;
  if ( ValueLength >= 0xFFFFFFF0 )
    return -1073741675;
  Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length);
  if ( Heap )
  {
    v14 = -1073741772;
    if ( !PrimaryHandle
      || (v14 = NtQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, Heap, Length, &v15),
          v14 == -1073741772) )
    {
      if ( !FallbackHandle )
      {
LABEL_19:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v14;
      }
      v14 = NtQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, Heap, Length, &v15);
    }
    if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147483643 )
    {
      if ( ValueType )
        *ValueType = Heap[1];
      if ( v14 >= 0 )
      {
        if ( ValueLength < Heap[2] )
          v14 = -2147483643;
        else
          memmove(ValueData, Heap + 3, Heap[2]);
      }
      *ResultLength = Heap[2];
    }
    goto LABEL_19;
  }
  return -1073741801;
}
