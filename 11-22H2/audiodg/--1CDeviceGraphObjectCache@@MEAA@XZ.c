/*
 * XREFs of ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x1400709F8
 * Callers:
 *     ??_GCDeviceGraphObjectCache@@MEAAPEAXI@Z @ 0x1400388A0 (--_GCDeviceGraphObjectCache@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x14000AD30 (-ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000EBD0 (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14001FED0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x140025358 (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ??1?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x1400382AC (--1-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits.c)
 *     ?GetCount@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA_KXZ @ 0x140070DE4 (-GetCount@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNod.c)
 *     ?GetHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAAEAPEAVCConnectionNode@@XZ @ 0x140070E38 (-GetHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAAEAPEAVCConnectionN.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14007AAE0 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14007AC38 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTUnlockHeap@@YAJPEAX@Z @ 0x14007AEF8 (-AERTUnlockHeap@@YAJPEAX@Z.c)
 */

void __fastcall CDeviceGraphObjectCache::~CDeviceGraphObjectCache(CDeviceGraphObjectCache *this)
{
  CDeviceGraphObjectCache *v2; // r14
  __int64 Head; // rax
  __int64 i; // rbp
  __int64 v5; // rbx
  __int64 Count; // rax
  void *v7; // rcx
  volatile int *v8; // rdx

  *(_QWORD *)this = &CDeviceGraphObjectCache::`vftable'{for `IInspectable'};
  v2 = (CDeviceGraphObjectCache *)((char *)this + 8);
  *((_QWORD *)this + 1) = &CDeviceGraphObjectCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCache,IWeakReferenceSource,IDeviceGraphObjectCacheInternal>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CDeviceGraphObjectCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCacheInternal>'};
  *((_BYTE *)this + 320) = 1;
  while ( *((_QWORD *)this + 16) )
  {
    Head = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)this + 14);
    CDeviceGraphObjectCache::ReleaseAPO(v2, *(struct IAudioProcessingObject **)(*(_QWORD *)Head + 8LL));
  }
  for ( i = CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::GetCount((char *)this + 160);
        CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::GetCount((char *)this + 160)
     && i;
        --i )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)this + 7);
    v5 = *(_QWORD *)ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetHead((char *)this + 48 * (*((unsigned __int16 *)this + 136) ^ 1LL) + 160);
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 7);
    CDeviceGraphObjectCache::ReleaseConnection((unsigned __int64)v2, *(_QWORD *)(v5 + 16));
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
  v7 = (void *)*((_QWORD *)this + 6);
  if ( v7 )
  {
    AERTDestroyHeap(v7);
    *((_QWORD *)this + 6) = 0LL;
  }
  CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::~CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>((struct _RTL_CRITICAL_SECTION *)this + 4);
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)this + 112);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 13);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>(
    (__int64)this,
    v8);
}
