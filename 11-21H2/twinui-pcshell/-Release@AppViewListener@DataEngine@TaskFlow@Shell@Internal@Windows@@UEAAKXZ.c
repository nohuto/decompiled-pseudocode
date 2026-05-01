/*
 * XREFs of ?Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAKXZ @ 0x18014F570
 * Callers:
 *     ?Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@W7EAAKXZ @ 0x1801F82B0 (-Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAKXZ @ 0x1801F82D0 (-Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAKXZ.c)
 *     ?Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAKXZ @ 0x1801F82F0 (-Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAKXZ.c)
 *     ?Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCA@EAAKXZ @ 0x1801F8310 (-Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCA@EAAKXZ.c)
 *     ?Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCI@EAAKXZ @ 0x1801F8330 (-Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::Release(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::Release(this);
}
