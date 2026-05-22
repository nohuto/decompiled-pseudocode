/*
 * XREFs of ?QueryInterface@HomeGestureReadyChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015C980
 * Callers:
 *     ?QueryInterface@HomeGestureReadyChangedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800516E0 (-QueryInterface@HomeGestureReadyChangedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HomeGestureReadyChangedEventArgs::QueryInterface(__int64 this, const struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureReadyChangedEventArgs>>(
           this,
           a2,
           a3);
}
