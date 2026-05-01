/*
 * XREFs of ?RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x180042824
 * Callers:
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180032170 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpMemoryMonitorAllocateState(struct _RM_MEMORY_MONITOR_DATA *a1)
{
  _QWORD *v2; // rdi
  unsigned int i; // ebx
  HANDLE EventW; // rax
  __int64 result; // rax

  v2 = (_QWORD *)((char *)a1 + 16);
  for ( i = 1; i < 6; ++i )
  {
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *v2 = EventW;
    if ( !EventW )
      return 3221225473LL;
    ++v2;
  }
  result = TpAllocTimer((char *)a1 + 64, RmpMemoryMonitorTimerCallback, a1, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
