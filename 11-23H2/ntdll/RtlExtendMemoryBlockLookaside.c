/*
 * XREFs of RtlExtendMemoryBlockLookaside @ 0x1800F6F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlExtendMemoryBlockLookaside(__int64 a1)
{
  return RtlExtendMemoryZone(*(_QWORD *)(a1 + 16));
}
