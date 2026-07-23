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

NTSTATUS __cdecl RtlQueryRegistryValueWithFallback(
        HANDLE PrimaryHandle,
        HANDLE FallbackHandle,
        PUNICODE_STRING ValueName,
        ULONG ValueLength,
        PULONG ValueType,
        PVOID ValueData,
        PULONG ResultLength)
{
  ULONG Length; // r15d
  ULONG *Heap; // rdi
  int v13; // ebx
  ULONG v15; // [rsp+60h] [rbp+8h] BYREF

  if ( __PAIR128__((unsigned __int64)PrimaryHandle, (unsigned __int64)FallbackHandle) == 0 )
    return -1073741811;
  if ( ValueLength >= 0xFFFFFFF0 )
    return -1073741675;
  Length = ValueLength + 16;
  Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, ValueLength + 16);
  if ( !Heap )
    return -1073741801;
  v13 = -1073741772;
  if ( PrimaryHandle )
  {
    v13 = NtQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, Heap, Length, &v15);
    if ( v13 != -1073741772 )
      goto LABEL_8;
  }
  if ( FallbackHandle )
  {
    v13 = NtQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, Heap, Length, &v15);
LABEL_8:
    if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
    {
      if ( ValueType )
        *ValueType = Heap[1];
      if ( v13 >= 0 )
      {
        if ( ValueLength < Heap[2] )
          v13 = -2147483643;
        else
          memmove(ValueData, Heap + 3, Heap[2]);
      }
      *ResultLength = Heap[2];
    }
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v13;
}
