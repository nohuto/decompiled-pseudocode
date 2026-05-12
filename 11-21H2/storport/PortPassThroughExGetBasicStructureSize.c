/*
 * XREFs of PortPassThroughExGetBasicStructureSize @ 0x1C0068F10
 * Callers:
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0068F38 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughExNormalize @ 0x1C0069108 (PortPassThroughExNormalize.c)
 *     PortPassThroughExSendAsync @ 0x1C008860C (PortPassThroughExSendAsync.c)
 * Callees:
 *     RtlULongAdd @ 0x1C004F844 (RtlULongAdd.c)
 */

NTSTATUS __fastcall PortPassThroughExGetBasicStructureSize(__int64 a1, ULONG *a2)
{
  return RtlULongAdd(0x40u, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) - 1, a2);
}
