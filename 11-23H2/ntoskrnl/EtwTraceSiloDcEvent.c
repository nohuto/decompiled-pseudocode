/*
 * XREFs of EtwTraceSiloDcEvent @ 0x1405FD520
 * Callers:
 *     MmLogQueryCombineStats @ 0x1407EA5CC (MmLogQueryCombineStats.c)
 *     CmEtwRunDown @ 0x140A12424 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x140A129F0 (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2ED08 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x140A325B8 (MmPerfLogSessionRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140233CA0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwTraceSiloDcEvent(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  EtwpLogKernelEvent(a1, a3, a4, a2, a5, a6);
}
