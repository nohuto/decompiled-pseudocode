/*
 * XREFs of CmpLightWeightPrepareRecreateKeyUoW @ 0x1406580D0
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14065D5C8 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightPrepareRecreateKeyUoW(__int64 a1)
{
  return HvpMarkCellDirty(
           *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL));
}
