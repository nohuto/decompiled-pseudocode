/*
 * XREFs of ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x140021FBC
 * Callers:
 *     ??_GCDeviceGraphObjectCache@@MEAAPEAXI@Z @ 0x140022410 (--_GCDeviceGraphObjectCache@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000B15C (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14000CCB0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ?GetCount@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA_KXZ @ 0x1400220C8 (-GetCount@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNod.c)
 *     ??1?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x1400221BC (--1-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x1400221FC (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTUnlockHeap@@YAJPEAX@Z @ 0x14002223C (-AERTUnlockHeap@@YAJPEAX@Z.c)
 *     ?ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x140023170 (-ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x140068B94 (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAAEAPEAVCConnectionNode@@XZ @ 0x140068BBC (-GetHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAAEAPEAVCConnectionN.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14006E28C (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall CDeviceGraphObjectCache::~CDeviceGraphObjectCache(CDeviceGraphObjectCache *this)
{
  CDeviceGraphObjectCache *v2; // r14
  __int64 i; // rbp
  void *v4; // rcx
  __int64 Head; // rax
  __int64 v6; // rbx
  __int64 Count; // rax

  *(_QWORD *)this = &CDeviceGraphObjectCache::`vftable'{for `IInspectable'};
  v2 = (CDeviceGraphObjectCache *)((char *)this + 8);
  *((_QWORD *)this + 1) = &CDeviceGraphObjectCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCache,IWeakReferenceSource,IDeviceGraphObjectCacheInternal>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CDeviceGraphObjectCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCacheInternal>'};
  *((_BYTE *)this + 320) = 1;
  while ( *((_QWORD *)this + 16) )
  {
    Head = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((char *)this + 112);
    CDeviceGraphObjectCache::ReleaseAPO(v2, *(struct IAudioProcessingObject **)(*(_QWORD *)Head + 8LL));
  }
  for ( i = CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::GetCount((char *)this + 160);
        CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::GetCount((char *)this + 160)
     && i;
        --i )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)this + 7);
    v6 = *(_QWORD *)ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetHead((char *)this + 48 * (*((unsigned __int16 *)this + 136) ^ 1LL) + 160);
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 7);
    CDeviceGraphObjectCache::ReleaseConnection(v2, *(_QWORD *)(v6 + 16));
  }
  if ( CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::GetCount((char *)this + 160) )
  {
    Count = CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::GetCount((char *)this + 160);
    MicrosoftTelemetryAssertTriggeredArgs("AudioEng.dll", Count, 0LL);
  }
  if ( *((_BYTE *)this + 56) )
  {
    AERTUnlockHeap(*((void **)this + 6));
    *((_BYTE *)this + 56) = 0;
  }
  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    AERTDestroyHeap(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::~CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>((char *)this + 160);
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)this + 112);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 13);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>(this);
}
