/*
 * XREFs of RaUnitIgnorePnpIrp @ 0x1C00A3098
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00076A0 (RaUnitPnpIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C002042C (RaUnitQueryInterfaceIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitIgnorePnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
}
