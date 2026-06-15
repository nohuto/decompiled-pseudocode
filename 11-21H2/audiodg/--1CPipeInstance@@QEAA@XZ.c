/*
 * XREFs of ??1CPipeInstance@@QEAA@XZ @ 0x14000A92C
 * Callers:
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140004544 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000A8E8 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140050C6C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000A9B0 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?RemoveAll@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x14000ADFC (-RemoveAll@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionI.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000AE60 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 */

void __fastcall CPipeInstance::~CPipeInstance(CPipeInstance *this)
{
  CPipeInstance::Cleanup(this);
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll((char *)this + 248);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 30);
  CoTaskMemFree(*((LPVOID *)this + 24));
  *((_QWORD *)this + 24) = 0LL;
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>((__int64 *)this + 23);
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>((__int64 *)this + 22);
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>((__int64 *)this + 19);
  ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::RemoveAll((char *)this + 64);
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((char *)this + 16);
}
