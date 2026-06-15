/*
 * XREFs of ??1CProcessSubmixProxy@@MEAA@XZ @ 0x180015E20
 * Callers:
 *     ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x180013F90 (--_GCProcessSubmixProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180015FF4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcessSubmixProxy::~CProcessSubmixProxy(CProcessSubmixProxy *this)
{
  char *v2; // r15
  __int64 *v3; // r14
  __int64 *v4; // rcx
  __int64 v5; // rax
  _DWORD *v6; // rsi
  int v7; // r8d
  int v8; // r9d
  __int64 *v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+78h] [rbp+10h] BYREF
  char *v16; // [rsp+80h] [rbp+18h] BYREF

  *(_QWORD *)this = &CProcessSubmixProxy::`vftable'{for `IInspectable'};
  v2 = (char *)this + 8;
  *((_QWORD *)this + 1) = &CProcessSubmixProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IProcessSubmixProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 2) = &CProcessSubmixProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  v3 = (__int64 *)((char *)this + 200);
  v4 = (__int64 *)*((_QWORD *)this + 25);
  if ( v4 )
  {
    v5 = *v4;
    v14 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v5 + 288))(v4, &v14) >= 0 )
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 128LL))(*((_QWORD *)this + 6), v14);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
  }
  v6 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      v4,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v6 <= 4u )
  {
    v9 = (__int64 *)((char *)this + 112);
  }
  else
  {
    LOBYTE(v14) = *((_BYTE *)this + 124);
    v9 = (__int64 *)((char *)this + 112);
    v10 = *((_QWORD *)this + 14);
    if ( v10 )
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10);
    else
      v11 = 0;
    v15 = v11;
    v16 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (_DWORD)v6,
      (unsigned int)&unk_180192DC5,
      v7,
      v8,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
  v12 = (void *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = 0LL;
  if ( v12 )
    CoTaskMemFree(v12);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v3);
  v13 = *((_QWORD *)this + 22);
  if ( v13 )
  {
    std::_Deallocate<16,0>(v13, (*((_QWORD *)this + 24) - v13) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v9);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 6);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>(this);
}
