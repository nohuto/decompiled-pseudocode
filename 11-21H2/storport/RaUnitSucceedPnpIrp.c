/*
 * XREFs of RaUnitSucceedPnpIrp @ 0x1C0089F18
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitSucceedPnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, 0);
}
