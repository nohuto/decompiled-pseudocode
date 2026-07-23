/*
 * XREFs of HvMarkCellDirty @ 0x1408ABF46
 * Callers:
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x140419D84 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     CmpCreateTombstone @ 0x14061739C (CmpCreateTombstone.c)
 *     CmpCheckKey @ 0x1406E0740 (CmpCheckKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070D128 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1407D1598 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A29AC4 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 */

__int64 __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3);
}
