/*
 * XREFs of ??1?$CComPtr@VEndpointDevice@@@ATL@@QEAA@XZ @ 0x18012E7F4
 * Callers:
 *     _TelephonyControllerCallInstance::CreateInstance_::_1_::dtor$0 @ 0x18006A55D (_TelephonyControllerCallInstance--CreateInstance_--_1_--dtor$0.c)
 *     _EndpointDevice::CreateInstance_::_1_::dtor$0 @ 0x18006F672 (_EndpointDevice--CreateInstance_--_1_--dtor$0.c)
 *     _PhoneTopology::CreateInstance_::_1_::dtor$0 @ 0x18006F780 (_PhoneTopology--CreateInstance_--_1_--dtor$0.c)
 *     _PhoneCallAudio::CreateInstance_::_1_::dtor$0 @ 0x18007241E (_PhoneCallAudio--CreateInstance_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::CreateInstance_::_1_::dtor$0 @ 0x1800725A6 (_AudioDeviceMgr--CreateInstance_--_1_--dtor$0.c)
 *     _TelephonyController::CreateInstance_::_1_::dtor$0 @ 0x18016046E (_TelephonyController--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>(__int64 *a1)
{
  return ATL::CComPtrBase<PhoneTopology>::~CComPtrBase<PhoneTopology>(a1);
}
