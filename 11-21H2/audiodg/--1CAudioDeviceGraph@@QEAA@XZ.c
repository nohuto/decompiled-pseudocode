/*
 * XREFs of ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140004424
 * Callers:
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140004678 (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14004D52C (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140004544 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140004634 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140009BF4 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140051A78 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

void __fastcall CAudioDeviceGraph::~CAudioDeviceGraph(CAudioDeviceGraph *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  _BYTE v6[32]; // [rsp+30h] [rbp-38h] BYREF

  CAudioDeviceGraph::Cleanup(this);
  v3 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                     v2,
                     _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
    tlgWriteTransfer_EtwEventWriteTransfer(v3, (unsigned int)&unk_1400A65DC, (_DWORD)this + 352, 0, 2, (__int64)v6);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 50);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((char *)this + 392);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 48);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 46);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 43);
  v4 = (void *)*((_QWORD *)this + 40);
  if ( v4 )
  {
    free(v4);
    *((_QWORD *)this + 40) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 41);
  if ( v5 )
  {
    free(v5);
    *((_QWORD *)this + 41) = 0LL;
  }
  *((_DWORD *)this + 84) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((char *)this + 168);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 19);
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>((char *)this + 144);
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
}
