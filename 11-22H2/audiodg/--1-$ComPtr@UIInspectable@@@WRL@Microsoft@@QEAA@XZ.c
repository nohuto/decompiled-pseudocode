/*
 * XREFs of ??1?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x140037E20
 * Callers:
 *     _CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock_::_1_::dtor$1 @ 0x140035DF6 (_CDeviceGraphObjectCacheManager--GetObjectCacheForEndpoint_UnderLock_--_1_--dtor$1.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$0 @ 0x140036654 (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$0.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$0 @ 0x14005479E (_CpuManager--RegisterDevice_--_1_--dtor$0.c)
 *     _XWinRT::InterfaceEquals::operator()_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice__::_1_::dtor$0 @ 0x14007BBF6 (_XWinRT--InterfaceEquals--operator()_Windows--Media--Devices--Internal--IAudioDeviceBrokerDevice.c)
 *     _XWinRT::InterfaceEquals::operator()_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice__::_1_::dtor$1 @ 0x14007BC02 (_XWinRT--InterfaceEquals--operator()_Windows--Media--Devices--Internal--IAudioDevic_ea_14007BC02.c)
 *     _XWinRT::InterfaceEquals::operator()_Windows::Media::Devices::IAudioDeviceModule__::_1_::dtor$0 @ 0x14007BD02 (_XWinRT--InterfaceEquals--operator()_Windows--Media--Devices--IAudioDeviceModule__--_1_--dtor$0.c)
 *     _XWinRT::InterfaceEquals::operator()_Windows::Media::Devices::IAudioDeviceModule__::_1_::dtor$1 @ 0x14007BD0E (_XWinRT--InterfaceEquals--operator()_Windows--Media--Devices--IAudioDeviceModule__--_1_--dtor$1.c)
 *     _XWinRT::InterfaceEquals::operator()_Windows::Storage::Streams::IBuffer__::_1_::dtor$0 @ 0x14007BE0E (_XWinRT--InterfaceEquals--operator()_Windows--Storage--Streams--IBuffer__--_1_--dtor$0.c)
 *     _XWinRT::InterfaceEquals::operator()_Windows::Storage::Streams::IBuffer__::_1_::dtor$1 @ 0x14007BE1A (_XWinRT--InterfaceEquals--operator()_Windows--Storage--Streams--IBuffer__--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
