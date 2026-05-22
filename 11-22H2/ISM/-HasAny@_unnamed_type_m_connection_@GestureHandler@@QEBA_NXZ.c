/*
 * XREFs of ?HasAny@_unnamed_type_m_connection_@GestureHandler@@QEBA_NXZ @ 0x180073EF8
 * Callers:
 *     ?OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ @ 0x180165958 (-OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ.c)
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180165A18 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 * Callees:
 *     <none>
 */

char __fastcall GestureHandler::_unnamed_type_m_connection_::HasAny(GestureHandler::_unnamed_type_m_connection_ *this)
{
  char result; // al

  result = 0;
  if ( *(_DWORD *)this || *((_DWORD *)this + 1) || *((_DWORD *)this + 2) )
    return 1;
  return result;
}
