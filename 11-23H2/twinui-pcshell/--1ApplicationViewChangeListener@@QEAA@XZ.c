/*
 * XREFs of ??1ApplicationViewChangeListener@@QEAA@XZ @ 0x180688E9C
 * Callers:
 *     _ApplicationViewFilteredCollection::ApplicationViewFilteredCollection_::_1_::dtor$3 @ 0x180688E3C (_ApplicationViewFilteredCollection--ApplicationViewFilteredCollection_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@?$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicationViewChangeListener@@VApplicationViewCollectionRegistration@@@EventRegistrationHelpers@@QEAAXXZ @ 0x180689BFC (-Unregister@-$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicati.c)
 */

void __fastcall ApplicationViewChangeListener::~ApplicationViewChangeListener(ApplicationViewChangeListener *this)
{
  EventRegistrationHelpers::EventListener<IApplicationViewVisibilityDebouncedNotificationService,IApplicationViewChangeListener,ApplicationViewCollectionRegistration>::Unregister();
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 1);
}
