/*
 * XREFs of ?_SanitizeFlags@CAppLayoutItem@@AEAA?AW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@W42@@Z @ 0x18016CDCC
 * Callers:
 *     ??0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@PEAUtagRECT@@4@Z @ 0x18016CB78 (--0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicati.c)
 *     ??0CAppLayoutItem@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1807977D4 (--0CAppLayoutItem@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppLayoutItem::_SanitizeFlags(__int64 a1, unsigned int a2)
{
  if ( (a2 & 1) != 0 && a2 != 1 )
    a2 &= ~1u;
  return a2;
}
