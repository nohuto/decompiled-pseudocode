/*
 * XREFs of ?Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAKXZ @ 0x18018A430
 * Callers:
 *     ?Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ @ 0x18007C7B0 (-Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ @ 0x18007C7D0 (-Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Input::MPCManager::HomeGestureEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
