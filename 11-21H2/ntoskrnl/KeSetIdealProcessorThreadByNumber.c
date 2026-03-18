/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x1403861B4
 * Callers:
 *     KeSetIdealProcessorThread @ 0x140386160 (KeSetIdealProcessorThread.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     KeGetProcessorNumberFromIndex @ 0x1402949F0 (KeGetProcessorNumberFromIndex.c)
 *     KeSetIdealProcessorThreadEx @ 0x14035CE74 (KeSetIdealProcessorThreadEx.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadByNumber(
        struct _KTHREAD *a1,
        struct _PROCESSOR_NUMBER *a2,
        struct _PROCESSOR_NUMBER *a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  _DWORD *v6; // r9
  unsigned int v7; // eax
  ULONG IdealProcessor; // ecx
  unsigned int v9; // edi
  ULONG ProcIndex; // [rsp+48h] [rbp+20h] BYREF

  ProcIndex = 0;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a2);
  if ( ProcessorIndexFromNumber == -1 )
  {
    v9 = -1073741811;
    if ( a1 == KeGetCurrentThread() )
      IdealProcessor = a1->IdealProcessor;
    else
      IdealProcessor = a1->UserIdealProcessor;
  }
  else
  {
    v7 = KeSetIdealProcessorThreadEx((__int64)a1, ProcessorIndexFromNumber, (__int64)&ProcIndex, v6);
    IdealProcessor = ProcIndex;
    v9 = v7;
  }
  KeGetProcessorNumberFromIndex(IdealProcessor, a3);
  return v9;
}
