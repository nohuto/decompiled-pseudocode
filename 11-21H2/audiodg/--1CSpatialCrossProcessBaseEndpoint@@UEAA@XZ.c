/*
 * XREFs of ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x14008D35C
 * Callers:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x14008D448 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14008D4CC (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ??_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x14008D7F0 (--_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140021C74 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400295BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x14008F308 (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(
        CSpatialCrossProcessBaseEndpoint *this)
{
  __int64 *v2; // rsi
  int v3; // edx
  int v4; // r8d
  void *v5; // rcx
  void *v6; // rcx
  std::_Ref_count_base *v7; // rcx

  *(_QWORD *)this = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  v2 = (__int64 *)((char *)this + 776);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 97);
  v5 = (void *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    AERTDestroyZoneHeap(v5, v3, v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)this + 11);
  v6 = (void *)*((_QWORD *)this + 163);
  if ( v6 )
    operator delete(v6);
  *((_QWORD *)this + 163) = 0LL;
  CSpatialCrossProcessEndpointTraceLogger::~CSpatialCrossProcessEndpointTraceLogger((CSpatialCrossProcessBaseEndpoint *)((char *)this + 784));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 91);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 11);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
