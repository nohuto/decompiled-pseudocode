/*
 * XREFs of WmipSystemControl @ 0x1407E2AC0
 * Callers:
 *     <none>
 * Callees:
 *     IoWMISystemControl @ 0x1407E2AE4 (IoWMISystemControl.c)
 */

__int64 __fastcall WmipSystemControl(__int64 a1, __int64 a2)
{
  return IoWMISystemControl(WmipWmiLibInfo, a1, a2);
}
