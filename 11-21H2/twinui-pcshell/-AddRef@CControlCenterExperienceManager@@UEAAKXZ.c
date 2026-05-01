/*
 * XREFs of ?AddRef@CControlCenterExperienceManager@@UEAAKXZ @ 0x180166A60
 * Callers:
 *     ?AddRef@CControlCenterExperienceManager@@W7EAAKXZ @ 0x1801F2350 (-AddRef@CControlCenterExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WBA@EAAKXZ @ 0x1801F2370 (-AddRef@CControlCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WBI@EAAKXZ @ 0x1801F2390 (-AddRef@CControlCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WCA@EAAKXZ @ 0x1801F23B0 (-AddRef@CControlCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WCI@EAAKXZ @ 0x1801F23D0 (-AddRef@CControlCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WDA@EAAKXZ @ 0x1801F23F0 (-AddRef@CControlCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WDI@EAAKXZ @ 0x1801F2410 (-AddRef@CControlCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WEA@EAAKXZ @ 0x1801F2430 (-AddRef@CControlCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WEI@EAAKXZ @ 0x1801F2450 (-AddRef@CControlCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WFA@EAAKXZ @ 0x1801F2470 (-AddRef@CControlCenterExperienceManager@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CControlCenterExperienceManager::AddRef(CControlCenterExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::AddRef(this);
}
