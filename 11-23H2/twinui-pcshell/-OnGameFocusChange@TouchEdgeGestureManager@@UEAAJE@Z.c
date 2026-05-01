/*
 * XREFs of ?OnGameFocusChange@TouchEdgeGestureManager@@UEAAJE@Z @ 0x18064D7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchEdgeGestureManager::OnGameFocusChange(TouchEdgeGestureManager *this, char a2)
{
  *((_BYTE *)this + 336) = a2 != 0;
  return 0LL;
}
