/*
 * XREFs of _anonymous_namespace_::IsFullscreenRect @ 0x1C00B2774
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00B2264 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1C0111DBC (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@PEBVCMonitorTopology@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::IsFullscreenRect(_DWORD *a1, _DWORD *a2)
{
  return *a1 <= *a2 && a1[1] <= a2[1] && a1[2] >= a2[2] && a1[3] >= a2[3];
}
