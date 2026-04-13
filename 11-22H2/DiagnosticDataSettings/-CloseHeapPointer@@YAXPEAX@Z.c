/*
 * XREFs of ?CloseHeapPointer@@YAXPEAX@Z @ 0x180001474
 * Callers:
 *     TelIsOsInProcessorMode @ 0x180002C30 (TelIsOsInProcessorMode.c)
 *     TelGetRegionalSettingsValue @ 0x180002EF0 (TelGetRegionalSettingsValue.c)
 * Callees:
 *     <none>
 */

void __fastcall CloseHeapPointer(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
