/*
 * XREFs of MiFlushComplete @ 0x140635E60
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x140636054 (MiIssueAsynchronousFlush.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x1402CB700 (MmUnmapLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x1402D9B30 (MiUnlockMdlWritePages.c)
 *     MiReleaseControlAreaWaiters @ 0x1402E3F2C (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x1402F4824 (MiDecrementModifiedWriteCount.c)
 *     MiRetardMdl @ 0x14061C9C0 (MiRetardMdl.c)
 *     MiFreeOverlappedFlushEntry @ 0x140635FE0 (MiFreeOverlappedFlushEntry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFlushComplete(__int64 a1, __int64 a2)
{
  struct _MDL *v2; // rbx
  __int64 *v5; // rax
  LONG result; // eax
  __int64 v7; // rcx

  v2 = *(struct _MDL **)(a1 + 72);
  if ( _bittest16(&v2->MdlFlags, 9u) )
    MiRetardMdl(*(_QWORD *)(a1 + 72));
  if ( (v2->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v2->MappedSystemVa, v2);
  MiUnlockMdlWritePages(v2, (int *)a2);
  if ( *(int *)a2 < 0 )
    *(_QWORD *)(a2 + 8) = 0LL;
  v5 = MiDecrementModifiedWriteCount(*(_QWORD *)(a1 + 32), 0);
  if ( v5 )
    MiReleaseControlAreaWaiters(v5);
  if ( v2 != (struct _MDL *)(a1 + 80) )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 72) = a1 + 80;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
  {
    if ( *(int *)a2 < 0 )
      *(_DWORD *)(v7 + 20) = *(_DWORD *)a2;
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 16), 0xFFFFFFFF);
    if ( result == 1 )
      return MiFreeOverlappedFlushEntry((PVOID)v7);
  }
  return result;
}
