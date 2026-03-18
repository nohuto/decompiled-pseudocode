/*
 * XREFs of EtwTraceSiloDcEvent @ 0x1405FD5B0
 * Callers:
 *     MmLogQueryCombineStats @ 0x1407EAB4C (MmLogQueryCombineStats.c)
 *     CmEtwRunDown @ 0x140A124D4 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x140A12AA0 (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2ED78 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x140A32628 (MmPerfLogSessionRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140233C80 (EtwpLogKernelEvent.c)
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
