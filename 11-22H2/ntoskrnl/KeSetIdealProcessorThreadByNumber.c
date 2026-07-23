/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x1403CE794
 * Callers:
 *     KeSetIdealProcessorThread @ 0x1403CE740 (KeSetIdealProcessorThread.c)
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x14079FBE0 (NtQueryInformationThread.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140255090 (KeGetProcessorIndexFromNumber.c)
 *     KeGetProcessorNumberFromIndex @ 0x14030CCE0 (KeGetProcessorNumberFromIndex.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403CE7F8 (KeSetIdealProcessorThreadEx.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadByNumber(struct _KTHREAD *a1, _PROCESSOR_NUMBER *a2, _PROCESSOR_NUMBER *a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v6; // eax
  ULONG IdealProcessor; // ecx
  unsigned int v8; // edi
  ULONG ProcIndex; // [rsp+48h] [rbp+20h] BYREF

  ProcIndex = 0;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a2);
  if ( ProcessorIndexFromNumber == -1 )
  {
    v8 = -1073741811;
    if ( a1 == KeGetCurrentThread() )
      IdealProcessor = a1->IdealProcessor;
    else
      IdealProcessor = a1->UserIdealProcessor;
  }
  else
  {
    v6 = KeSetIdealProcessorThreadEx(a1, ProcessorIndexFromNumber, &ProcIndex);
    IdealProcessor = ProcIndex;
    v8 = v6;
  }
  KeGetProcessorNumberFromIndex(IdealProcessor, a3);
  return v8;
}
