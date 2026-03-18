/*
 * XREFs of CmSiUnmapViewOfSection @ 0x140254F78
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x14068D310 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14068D778 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x14068DA14 (HvpViewMapCreateView.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x1406DC040 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapShrinkStorage @ 0x14091A000 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x14041BCA0 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
