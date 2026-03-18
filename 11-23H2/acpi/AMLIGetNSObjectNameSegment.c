/*
 * XREFs of AMLIGetNSObjectNameSegment @ 0x1C00483A4
 * Callers:
 *     AcpiArblibAllocateArbiterInstance @ 0x1C007CB74 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIGetPnpLocationString @ 0x1C0087680 (ACPIGetPnpLocationString.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0091FD4 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectNameSegment(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)a1 + 40LL);
}
