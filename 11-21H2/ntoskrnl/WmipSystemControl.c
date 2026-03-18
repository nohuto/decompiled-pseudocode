/*
 * XREFs of WmipSystemControl @ 0x1406E5130
 * Callers:
 *     <none>
 * Callees:
 *     IoWMISystemControl @ 0x1406E5154 (IoWMISystemControl.c)
 */

__int64 __fastcall WmipSystemControl(__int64 a1, __int64 a2)
{
  return IoWMISystemControl(WmipWmiLibInfo, a1, a2);
}
