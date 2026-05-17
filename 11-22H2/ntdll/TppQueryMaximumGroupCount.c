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
  __int64 v1; // rbx
  __int64 v2; // r9
  __int64 Heap; // rax
  int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-18h]
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  v6 = 0;
  v1 = 0LL;
  v2 = 0LL;
  while ( 1 )
  {
    v8 = 4;
    v4 = NtQuerySystemInformationEx(107LL, &v8, 4LL, v2, v6, &v7);
    if ( v4 >= 0 )
      break;
    if ( v4 != -1073741820 )
      goto LABEL_9;
    if ( v1 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v1);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, v7);
    v1 = Heap;
    if ( !Heap )
      return v0;
    v2 = Heap;
    v6 = v7;
  }
  v0 = *(_WORD *)(v1 + 8);
LABEL_9:
  if ( v1 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v1);
  return v0;
}
