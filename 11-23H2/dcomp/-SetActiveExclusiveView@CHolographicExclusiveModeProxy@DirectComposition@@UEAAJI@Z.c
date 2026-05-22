/*
 * XREFs of ?SetActiveExclusiveView@CHolographicExclusiveModeProxy@DirectComposition@@UEAAJI@Z @ 0x1800E77F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveModeProxy::SetActiveExclusiveView(
        DirectComposition::CHolographicExclusiveModeProxy *this,
        __int64 a2)
{
  return DirectComposition::CHolographicExclusiveModeProxy::SetActiveExclusiveViewForZone(this, a2, (_DWORD)a2 != 0);
}
