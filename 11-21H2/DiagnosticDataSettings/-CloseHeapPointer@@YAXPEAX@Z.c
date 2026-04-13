/*
 * XREFs of ?CloseHeapPointer@@YAXPEAX@Z @ 0x1800012C8
 * Callers:
 *     TelIsOsInProcessorMode @ 0x180002830 (TelIsOsInProcessorMode.c)
 *     TelGetRegionalSettingsValue @ 0x180002AF0 (TelGetRegionalSettingsValue.c)
 * Callees:
 *     <none>
 */

void __fastcall CloseHeapPointer(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
