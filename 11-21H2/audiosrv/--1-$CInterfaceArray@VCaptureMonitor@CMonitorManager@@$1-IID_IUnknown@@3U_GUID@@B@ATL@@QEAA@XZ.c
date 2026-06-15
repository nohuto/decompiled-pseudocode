/*
 * XREFs of ??1?$CInterfaceArray@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@QEAA@XZ @ 0x1801194E8
 * Callers:
 *     _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor$4 @ 0x18011B107 (_CMonitorManager--DoHandleDefaultDeviceChanged_--_1_--dtor$4.c)
 *     _CMonitorManager::HandleDeviceRemoved_::_1_::dtor$0 @ 0x18011C16D (_CMonitorManager--HandleDeviceRemoved_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CInterfaceArray<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>::~CInterfaceArray<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>(
        __int64 a1)
{
  ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>(a1);
}
