/*
 * XREFs of EditionGetInputDesktopId @ 0x1C01E3E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID EditionGetInputDesktopId()
{
  return WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
}
