/*
 * XREFs of ??1?$CComPtr@UISpatialAudioDevicePropertyWriter@@@ATL@@QEAA@XZ @ 0x18012E7E8
 * Callers:
 *     _MigrateSpatialProperties_::_1_::dtor$1 @ 0x18006F1F2 (_MigrateSpatialProperties_--_1_--dtor$1.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$1 @ 0x18006F5E7 (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$1.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$5 @ 0x18006F6DC (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$5.c)
 *     _AudioDeviceMgr::CreatePhoneTopology_::_1_::dtor$0 @ 0x18006F71E (_AudioDeviceMgr--CreatePhoneTopology_--_1_--dtor$0.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$1 @ 0x18006F868 (_PhoneTopology--PhoneTopology_--_1_--dtor$1.c)
 *     _PhoneCallAudio::CreateInstance_::_1_::dtor$1 @ 0x180072430 (_PhoneCallAudio--CreateInstance_--_1_--dtor$1.c)
 *     _PhoneCallAudio::OnEndpointDeviceRemoved_::_1_::dtor$0 @ 0x18012F890 (_PhoneCallAudio--OnEndpointDeviceRemoved_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComPtr<ISpatialAudioDevicePropertyWriter>::~CComPtr<ISpatialAudioDevicePropertyWriter>(
        __int64 *a1)
{
  return wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(a1);
}
