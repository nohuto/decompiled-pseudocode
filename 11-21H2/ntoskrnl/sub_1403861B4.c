/*
 * XREFs of sub_1403861B4 @ 0x1403861B4
 * Callers:
 *     KeSetIdealProcessorThread @ 0x140386160 (KeSetIdealProcessorThread.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     KeGetProcessorNumberFromIndex @ 0x1402949F0 (KeGetProcessorNumberFromIndex.c)
 *     sub_14035CE74 @ 0x14035CE74 (sub_14035CE74.c)
 */

__int64 __fastcall sub_1403861B4(__int64 a1, _PROCESSOR_NUMBER *a2, _PROCESSOR_NUMBER *a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v6; // r9
  unsigned int v7; // eax
  ULONG v8; // ecx
  unsigned int v9; // edi
  ULONG ProcIndex; // [rsp+48h] [rbp+20h] BYREF

  ProcIndex = 0;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a2);
  if ( ProcessorIndexFromNumber == -1 )
  {
    v9 = -1073741811;
    if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
      v8 = *(_DWORD *)(a1 + 588);
    else
      v8 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v7 = sub_14035CE74(a1, ProcessorIndexFromNumber, (__int64)&ProcIndex, v6);
    v8 = ProcIndex;
    v9 = v7;
  }
  KeGetProcessorNumberFromIndex(v8, a3);
  return v9;
}
