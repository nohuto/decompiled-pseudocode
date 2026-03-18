/*
 * XREFs of EditionzzzUpdateCursorSizes @ 0x1C009A570
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C009A8A4 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 */

void EditionzzzUpdateCursorSizes()
{
  if ( gpCursorSizes )
    CCursorSizes::zzzRefreshSizes(gpCursorSizes);
}
