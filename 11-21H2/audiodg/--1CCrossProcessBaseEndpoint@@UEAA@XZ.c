/*
 * XREFs of ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140021BE0
 * Callers:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140021CB4 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x1400834C8 (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 *     ??_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x1400839E0 (--_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400117E0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ??1CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140021BAC (--1CCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140021C74 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 */

void __fastcall CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(CCrossProcessBaseEndpoint *this)
{
  void *v2; // rcx
  void *v3; // rax
  int v4; // r8d

  *(_QWORD *)this = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  v2 = (void *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    AERTDestroyZoneHeap(v2);
    *((_QWORD *)this + 18) = 0LL;
  }
  wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)this + 8);
  *((_QWORD *)this + 9) = 0LL;
  v3 = (void *)AERTGetDLLRTHeap();
  AERTFree(*((void **)this + 10), v3, v4);
  *((_QWORD *)this + 10) = 0LL;
  CCrossProcessEndpointTraceLogger::~CCrossProcessEndpointTraceLogger((CCrossProcessBaseEndpoint *)((char *)this + 200));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
