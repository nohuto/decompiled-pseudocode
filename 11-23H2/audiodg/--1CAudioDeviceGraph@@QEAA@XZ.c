/*
 * XREFs of ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14005EBA0
 * Callers:
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14004B220 (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14004B2E4 (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14000EE2C (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140050464 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140055DD4 (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14005F008 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 */

void __fastcall CAudioDeviceGraph::~CAudioDeviceGraph(CAudioDeviceGraph *this)
{
  __int64 v2; // rdx
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-40h] BYREF
  union _RTL_RUN_ONCE *v10; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+48h] [rbp-30h]

  CAudioDeviceGraph::Cleanup(this);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v10 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1400CF680;
    qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v11 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v10, v2, v3);
  }
  v4 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
    tlgWriteTransfer_EtwEventWriteTransfer(v4, byte_1400B30AC, (__int64)this + 344, 0LL, 2, (__int64)&v10);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)this + 49);
  v5 = (void *)*((_QWORD *)this + 48);
  if ( v5 )
    CoTaskMemFree(v5);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 47);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 45);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 42);
  v6 = (void *)*((_QWORD *)this + 39);
  if ( v6 )
  {
    free(v6);
    *((_QWORD *)this + 39) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 40);
  if ( v7 )
  {
    free(v7);
    *((_QWORD *)this + 40) = 0LL;
  }
  *((_DWORD *)this + 82) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll((__int64 *)this + 21);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 19);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)this + 18);
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
}
