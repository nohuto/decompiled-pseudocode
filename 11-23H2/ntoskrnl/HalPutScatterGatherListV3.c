/*
 * XREFs of HalPutScatterGatherListV3 @ 0x14050F7D8
 * Callers:
 *     HalPutScatterGatherList @ 0x1403CEAF0 (HalPutScatterGatherList.c)
 * Callees:
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 *     HalpDmaStartWcb @ 0x140500F10 (HalpDmaStartWcb.c)
 *     HalpContinueProcessingWaitQueue @ 0x140510134 (HalpContinueProcessingWaitQueue.c)
 *     IoFreeMapRegistersV3 @ 0x140510820 (IoFreeMapRegistersV3.c)
 *     HalFlushAdapterBuffersEx @ 0x140514930 (HalFlushAdapterBuffersEx.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListV3(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  char v6; // r15
  _QWORD *v7; // rsi
  struct _MDL *v8; // rdi
  struct _MDL *Next; // rbp

  v3 = *(_QWORD *)(a2 + 8);
  if ( (*(_DWORD *)v3 & 2) != 0 )
  {
    v6 = 1;
    v7 = (_QWORD *)(v3 + 24);
    if ( *(_QWORD *)(v3 + 24) )
    {
      while ( 1 )
      {
        v7 = (_QWORD *)(v3 + 24);
        if ( HalpDmaStartWcb(a1, (_QWORD *)(v3 + 48), 1) )
          break;
        _mm_pause();
      }
    }
  }
  else
  {
    v6 = 0;
    v7 = (_QWORD *)(v3 + 24);
  }
  HalFlushAdapterBuffersEx(
    a1,
    *(_QWORD *)(v3 + 8),
    *v7,
    *(_DWORD *)(v3 + 32) - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 44LL) - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 32LL),
    *(_DWORD *)(v3 + 40),
    a3);
  IoFreeMapRegistersV3(a1, *v7);
  v8 = *(struct _MDL **)(v3 + 16);
  if ( v8 )
  {
    do
    {
      Next = v8->Next;
      if ( (v8->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v8->MappedSystemVa, v8);
      IoFreeMdl(v8);
      v8 = Next;
    }
    while ( Next );
  }
  if ( v6 && *v7 )
    HalpContinueProcessingWaitQueue(a1);
  if ( (*(_DWORD *)v3 & 1) == 0 )
    ExFreePoolWithTag(*(PVOID *)(v3 + 160), 0);
}
