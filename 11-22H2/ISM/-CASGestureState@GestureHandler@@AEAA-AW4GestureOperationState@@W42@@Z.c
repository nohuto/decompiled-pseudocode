/*
 * XREFs of ?CASGestureState@GestureHandler@@AEAA?AW4GestureOperationState@@W42@@Z @ 0x180164B78
 * Callers:
 *     ?CancelOperation@GestureHandler@@QEAAXXZ @ 0x180164BA0 (-CancelOperation@GestureHandler@@QEAAXXZ.c)
 *     ?InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z @ 0x18016585C (-InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z.c)
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180165A18 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GestureHandler::CASGestureState(__int64 a1, signed __int32 a2)
{
  unsigned __int32 v2; // r8d
  unsigned __int32 v3; // eax

  v2 = *(_DWORD *)(a1 + 224);
  if ( v2 != 4 )
  {
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 224), a2, v2);
    if ( v2 != v3 )
      return v3;
  }
  return v2;
}
