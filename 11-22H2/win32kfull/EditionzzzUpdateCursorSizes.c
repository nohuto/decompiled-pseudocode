/*
 * XREFs of EditionzzzUpdateCursorSizes @ 0x1C00BDF10
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0024A88 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 */

void EditionzzzUpdateCursorSizes()
{
  if ( gpCursorSizes )
    CCursorSizes::zzzRefreshSizes(gpCursorSizes);
}
