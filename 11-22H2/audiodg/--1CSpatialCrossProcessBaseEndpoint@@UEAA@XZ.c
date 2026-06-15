/*
 * XREFs of ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x1400996DC
 * Callers:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x1400997C8 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14009984C (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ??_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140099B70 (--_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002BBC (-reset@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140002BF4 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14003833E (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x14009B598 (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
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
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease((__int64 *)this + 97);
  v5 = (void *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    AERTDestroyZoneHeap(v5, v3, v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::reset((__int64 *)this + 11);
  v6 = (void *)*((_QWORD *)this + 163);
  if ( v6 )
    operator delete(v6);
  *((_QWORD *)this + 163) = 0LL;
  CSpatialCrossProcessEndpointTraceLogger::~CSpatialCrossProcessEndpointTraceLogger((CSpatialCrossProcessBaseEndpoint *)((char *)this + 784));
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 91);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 11);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
