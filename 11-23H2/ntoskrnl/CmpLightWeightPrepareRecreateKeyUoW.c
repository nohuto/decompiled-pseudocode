/*
 * XREFs of CmpLightWeightPrepareRecreateKeyUoW @ 0x140680B00
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A1C8AC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140746FA0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightPrepareRecreateKeyUoW(__int64 a1)
{
  return HvpMarkCellDirty(
           *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL));
}
