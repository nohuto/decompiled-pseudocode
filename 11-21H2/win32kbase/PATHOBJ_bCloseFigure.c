/*
 * XREFs of PATHOBJ_bCloseFigure @ 0x1C00CFE10
 * Callers:
 *     <none>
 * Callees:
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0019220 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 */

BOOL __stdcall PATHOBJ_bCloseFigure(PATHOBJ *ppo)
{
  return EPATHOBJ::bCloseFigure((EPATHOBJ *)ppo);
}
