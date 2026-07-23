/*
 * XREFs of TppQueryMaximumGroupCount @ 0x18009E7B8
 * Callers:
 *     TpInitializePackage @ 0x18007F92C (TpInitializePackage.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     NtQuerySystemInformationEx @ 0x1800A1B60 (NtQuerySystemInformationEx.c)
 */

__int64 TppQueryMaximumGroupCount()
{
  unsigned __int16 v0; // di
  _WORD *v1; // rbx
  void *v2; // r9
  _WORD *Heap; // rax
  NTSTATUS v4; // eax
  ULONG SystemInformationLength; // [rsp+20h] [rbp-18h]
  SIZE_T Size; // [rsp+40h] [rbp+8h] BYREF
  int InputBuffer; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  SystemInformationLength = 0;
  v1 = 0LL;
  v2 = 0LL;
  while ( 1 )
  {
    InputBuffer = 4;
    v4 = NtQuerySystemInformationEx(
           SystemLogicalProcessorAndGroupInformation,
           &InputBuffer,
           4u,
           v2,
           SystemInformationLength,
           (PULONG)&Size);
    if ( v4 >= 0 )
      break;
    if ( v4 != -1073741820 )
      goto LABEL_9;
    if ( v1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v1);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, (unsigned int)Size);
    v1 = Heap;
    if ( !Heap )
      return v0;
    v2 = Heap;
    SystemInformationLength = Size;
  }
  v0 = v1[4];
LABEL_9:
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v1);
  return v0;
}
