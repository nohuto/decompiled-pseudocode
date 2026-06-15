/*
 * XREFs of ??1?$CComPtr@VEndpointDevice@@@ATL@@QEAA@XZ @ 0x18013BE08
 * Callers:
 *     _PhoneTopology::CreateInstance_::_1_::dtor$0 @ 0x18007A547 (_PhoneTopology--CreateInstance_--_1_--dtor$0.c)
 *     _EndpointDevice::CreateInstance_::_1_::dtor$0 @ 0x18007A57D (_EndpointDevice--CreateInstance_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::CreateInstance_::_1_::dtor$0 @ 0x18007CE63 (_AudioDeviceMgr--CreateInstance_--_1_--dtor$0.c)
 *     _PhoneCallAudio::CreateInstance_::_1_::dtor$0 @ 0x18007DB76 (_PhoneCallAudio--CreateInstance_--_1_--dtor$0.c)
 *     _TelephonyController::CreateInstance_::_1_::dtor$0 @ 0x1801664BE (_TelephonyController--CreateInstance_--_1_--dtor$0.c)
 *     _TelephonyControllerCallInstance::CreateInstance_::_1_::dtor$0 @ 0x180168146 (_TelephonyControllerCallInstance--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>(__int64 *a1)
{
  return ATL::CComPtrBase<PhoneTopology>::~CComPtrBase<PhoneTopology>(a1);
}
