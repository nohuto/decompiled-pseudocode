/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1C01F5E20
 * Callers:
 *     <none>
 * Callees:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C004A790 (xxxBroadcastDisplaySettingsChange.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C00BBFF0 (HandleDisplayChangeForInactiveDesktops.c)
 */

__int64 xxxBroadcastModernAppRedraw()
{
  __int64 result; // rax

  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    xxxBroadcastDisplaySettingsChange(grpdeskRitInput, 0, 0, 0);
    return HandleDisplayChangeForInactiveDesktops(grpdeskRitInput, 0);
  }
  return result;
}
