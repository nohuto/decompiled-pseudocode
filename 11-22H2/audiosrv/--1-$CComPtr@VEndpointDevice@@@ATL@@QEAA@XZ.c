/*
 * XREFs of ??1?$CComPtr@VEndpointDevice@@@ATL@@QEAA@XZ @ 0x18013BE58
 * Callers:
 *     _PhoneTopology::CreateInstance_::_1_::dtor$0 @ 0x18007A577 (_PhoneTopology--CreateInstance_--_1_--dtor$0.c)
 *     _EndpointDevice::CreateInstance_::_1_::dtor$0 @ 0x18007A5AD (_EndpointDevice--CreateInstance_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::CreateInstance_::_1_::dtor$0 @ 0x18007CE93 (_AudioDeviceMgr--CreateInstance_--_1_--dtor$0.c)
 *     _PhoneCallAudio::CreateInstance_::_1_::dtor$0 @ 0x18007DBA6 (_PhoneCallAudio--CreateInstance_--_1_--dtor$0.c)
 *     _TelephonyController::CreateInstance_::_1_::dtor$0 @ 0x18016650E (_TelephonyController--CreateInstance_--_1_--dtor$0.c)
 *     _TelephonyControllerCallInstance::CreateInstance_::_1_::dtor$0 @ 0x180168196 (_TelephonyControllerCallInstance--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>(__int64 *a1)
{
  return ATL::CComPtrBase<PhoneTopology>::~CComPtrBase<PhoneTopology>(a1);
}
