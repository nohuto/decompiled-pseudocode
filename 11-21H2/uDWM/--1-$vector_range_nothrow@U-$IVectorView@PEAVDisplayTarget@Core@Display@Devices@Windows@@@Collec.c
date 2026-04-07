/*
 * XREFs of ??1?$vector_range_nothrow@U?$IVectorView@PEAVDisplayTarget@Core@Display@Devices@Windows@@@Collections@Foundation@Windows@@@wil@@QEAA@XZ @ 0x18009C4F0
 * Callers:
 *     _CAnalogCompositorManager::OnMonitorChangedNotification_::_1_::dtor$2 @ 0x18009DA23 (_CAnalogCompositorManager--OnMonitorChangedNotification_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Devices::Display::Core::DisplayTarget *>>::~vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Devices::Display::Core::DisplayTarget *>>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 32));
}
