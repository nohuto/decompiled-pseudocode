/*
 * XREFs of RtlpPrintErrorInformation @ 0x180117B4C
 * Callers:
 *     RtlpReportHeapFailure @ 0x1801180A8 (RtlpReportHeapFailure.c)
 * Callees:
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 */

ULONG RtlpPrintErrorInformation()
{
  const char *v0; // rbx

  v0 = (const char *)&Flags;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Heap error detected at %p (heap handle %p)\n", (const void *)qword_180181878, (const void *)qword_180181870);
  if ( dword_180181868 > 8 )
  {
    switch ( dword_180181868 )
    {
      case 9:
        v0 = "heap_failure_invalid_argument";
        break;
      case 10:
        v0 = "heap_failure_invalid_allocation_type";
        break;
      case 11:
        v0 = "heap_failure_usage_after_free";
        break;
      case 12:
        v0 = "heap_failure_cross_heap_operation";
        break;
      case 13:
        v0 = "heap_failure_freelists_corruption";
        break;
      case 14:
        v0 = "heap_failure_listentry_corruption";
        break;
      case 15:
        v0 = "heap_failure_lfh_bitmap_mismatch";
        break;
    }
  }
  else if ( dword_180181868 == 8 )
  {
    v0 = "heap_failure_block_not_busy";
  }
  else if ( dword_180181868 )
  {
    switch ( dword_180181868 )
    {
      case 1:
        v0 = "heap_failure_unknown";
        break;
      case 2:
        v0 = "heap_failure_generic";
        break;
      case 3:
        v0 = "heap_failure_entry_corruption";
        break;
      case 4:
        v0 = "heap_failure_multiple_entries_corruption";
        break;
      case 5:
        v0 = "heap_failure_virtual_block_corruption";
        break;
      case 6:
        v0 = "heap_failure_buffer_overrun";
        break;
      case 7:
        v0 = "heap_failure_buffer_underrun";
        break;
    }
  }
  else
  {
    v0 = "heap_failure_internal";
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Error code: %d - %s\n", dword_180181868, v0);
  if ( qword_180181880 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Parameter1: %p\n", (const void *)qword_180181880);
  }
  if ( qword_180181888 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Parameter2: %p\n", (const void *)qword_180181888);
  }
  if ( qword_180181890 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Parameter3: %p\n", (const void *)qword_180181890);
  }
  if ( qword_180181898 || qword_1801818A0 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint(
      "Last known valid blocks: before - %p, after - %p\n",
      (const void *)qword_180181898,
      (const void *)qword_1801818A0);
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  return DbgPrint("Stack trace available at %p\n", &BackTrace);
}
