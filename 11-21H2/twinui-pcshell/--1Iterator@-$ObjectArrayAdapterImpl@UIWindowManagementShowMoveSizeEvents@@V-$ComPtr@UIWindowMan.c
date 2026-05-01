/*
 * XREFs of ??1Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA@XZ @ 0x18041ABDC
 * Callers:
 *     _ViewPresentationMediator::OnShowWindowPolicy_::_1_::dtor$2 @ 0x180220550 (_ViewPresentationMediator--OnShowWindowPolicy_--_1_--dtor$2.c)
 *     _ViewPresentationMediator::OnShowWindowPolicy_::_1_::dtor$3 @ 0x180220570 (_ViewPresentationMediator--OnShowWindowPolicy_--_1_--dtor$3.c)
 *     _ViewPresentationMediator::OnMoveSizeAttempted_::_1_::dtor$2 @ 0x18041B187 (_ViewPresentationMediator--OnMoveSizeAttempted_--_1_--dtor$2.c)
 *     _ViewPresentationMediator::OnMoveSizeAttempted_::_1_::dtor$3 @ 0x18041B193 (_ViewPresentationMediator--OnMoveSizeAttempted_--_1_--dtor$3.c)
 *     _ViewPresentationMediator::OnShellTrackedWindowPosChanged_::_1_::dtor$2 @ 0x18041B32E (_ViewPresentationMediator--OnShellTrackedWindowPosChanged_--_1_--dtor$2.c)
 *     _ViewPresentationMediator::OnShellTrackedWindowPosChanged_::_1_::dtor$3 @ 0x18041B33A (_ViewPresentationMediator--OnShellTrackedWindowPosChanged_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::~Iterator(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 8));
}
