/*
 * XREFs of HvMarkCellDirty @ 0x1408ABCF6
 * Callers:
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1404199F4 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     CmpCreateTombstone @ 0x140616E4C (CmpCreateTombstone.c)
 *     CmpCheckKey @ 0x1406E0710 (CmpCheckKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070CF18 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1407D12C8 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A29814 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140746FA0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3);
}
