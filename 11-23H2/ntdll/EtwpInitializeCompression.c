/*
 * XREFs of EtwpInitializeCompression @ 0x180126608
 * Callers:
 *     EtwpStartUmLogger @ 0x18005BB9C (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x180084AA0 (RtlGetCompressionWorkSpaceSize.c)
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall EtwpInitializeCompression(__int64 a1)
{
  __int64 Heap; // rax
  unsigned int v4; // [rsp+40h] [rbp+8h]

  RtlGetCompressionWorkSpaceSize(3LL);
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  *(_QWORD *)(a1 + 416) = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_DWORD *)(a1 + 432) = 2 * *(_DWORD *)(a1 + 192);
  return ZwAllocateVirtualMemory();
}
