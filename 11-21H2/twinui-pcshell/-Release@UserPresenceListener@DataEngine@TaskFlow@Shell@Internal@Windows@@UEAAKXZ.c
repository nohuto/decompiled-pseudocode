/*
 * XREFs of ?Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAKXZ @ 0x18015F3E0
 * Callers:
 *     ?Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@W7EAAKXZ @ 0x1801F8650 (-Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAKXZ @ 0x1801F8670 (-Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAKXZ.c)
 *     ?Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAKXZ @ 0x1801F8690 (-Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::Release(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(this);
}
