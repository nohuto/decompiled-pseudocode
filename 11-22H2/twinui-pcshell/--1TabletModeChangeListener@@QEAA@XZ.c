/*
 * XREFs of ??1TabletModeChangeListener@@QEAA@XZ @ 0x180562898
 * Callers:
 *     _TaskViewHost::TaskViewHost_::_1_::dtor$17 @ 0x1802C2F3A (_TaskViewHost--TaskViewHost_--_1_--dtor$17.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@?$EventListener@UITabletModeController@@UITabletModeChangeListener@@VTabletModeChangeRegistration@@@EventRegistrationHelpers@@QEAAXXZ @ 0x18007FA18 (-Unregister@-$EventListener@UITabletModeController@@UITabletModeChangeListener@@VTabletModeChang.c)
 */

void __fastcall TabletModeChangeListener::~TabletModeChangeListener(TabletModeChangeListener *this)
{
  EventRegistrationHelpers::EventListener<ITabletModeController,ITabletModeChangeListener,TabletModeChangeRegistration>::Unregister((__int64)this);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 1);
}
