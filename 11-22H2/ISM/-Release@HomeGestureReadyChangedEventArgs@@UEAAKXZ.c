/*
 * XREFs of ?Release@HomeGestureReadyChangedEventArgs@@UEAAKXZ @ 0x18018A440
 * Callers:
 *     ?Release@HomeGestureReadyChangedEventArgs@@W7EAAKXZ @ 0x18007C7F0 (-Release@HomeGestureReadyChangedEventArgs@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HomeGestureReadyChangedEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureReadyChangedEventArgs>::Release(this);
}
