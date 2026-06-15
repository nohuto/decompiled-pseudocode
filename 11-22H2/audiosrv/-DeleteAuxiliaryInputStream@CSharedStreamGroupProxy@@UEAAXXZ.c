/*
 * XREFs of ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x180014440
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x180014170 (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x180016C84 (--1SystemAudioStream@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800457A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4SystemAudioStream@@QEAAAEAU0@$$QEAU0@@Z @ 0x180104B8C (--4SystemAudioStream@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSharedStreamGroupProxy::DeleteAuxiliaryInputStream(unsigned __int64 this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  int v6; // r8d
  int v7; // r9d
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  _BYTE v22[304]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+1B0h] [rbp+B0h]
  _BYTE v24[296]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v25; // [rsp+2E0h] [rbp+1E0h]
  _BYTE v26[296]; // [rsp+2E8h] [rbp+1E8h] BYREF
  int v27; // [rsp+410h] [rbp+310h]
  _BYTE v28[304]; // [rsp+418h] [rbp+318h] BYREF
  __int64 v29; // [rsp+548h] [rbp+448h]
  int v30; // [rsp+550h] [rbp+450h]
  int v31; // [rsp+554h] [rbp+454h]
  __int128 v32; // [rsp+560h] [rbp+460h]
  __int128 v33; // [rsp+570h] [rbp+470h] BYREF

  if ( g_UseNewStreamManagementCodePath )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)(this + 1736);
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 1736));
    v3 = *(_QWORD *)(this + 1728);
    *(_QWORD *)(this + 1728) = 0LL;
    v14 = v3;
    if ( v2 )
      LeaveCriticalSection(v2);
    if ( v3 )
    {
      v32 = *(_OWORD *)(this + 1704);
      v33 = v32;
      EtwEventActivityIdControl(4LL, &v33);
      if ( *(_BYTE *)(this + 400) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
        *(_BYTE *)(this + 400) = 0;
      }
      wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v14);
      v5 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                          v4,
                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *v5 > 4u )
      {
        v15 = this & ((unsigned __int128)-(__int128)(this - 8) >> 64);
        v16[0] = *(_QWORD *)(this + 1696);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (_DWORD)v5,
          (unsigned int)&unk_1801934D0,
          v6,
          v7,
          (__int64)v16,
          (__int64)&v15);
      }
      EtwEventActivityIdControl(4LL, &v33);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  }
  else if ( *(_QWORD *)(this + 440) )
  {
    v32 = *(_OWORD *)(this + 1704);
    v33 = v32;
    EtwEventActivityIdControl(4LL, &v33);
    if ( *(_BYTE *)(this + 400) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(this + 448) + 48LL))(
        *(_QWORD *)(this + 448),
        *(_QWORD *)(this + 440));
      *(_BYTE *)(this + 400) = 0;
    }
    v8 = *(__int64 **)(this + 448);
    v9 = *v8;
    v14 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v9 + 88))(v8, &v14) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, *(_QWORD *)(this + 440));
      v11 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           v10,
                           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v11 > 4u )
      {
        v16[0] = this & ((unsigned __int128)-(__int128)(this - 8) >> 64);
        v15 = *(_QWORD *)(this + 1696);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (_DWORD)v11,
          (unsigned int)&unk_1801934D0,
          v12,
          v13,
          (__int64)&v15,
          (__int64)v16);
      }
    }
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    memset_0(v22, 0, sizeof(v22));
    v23 = 0LL;
    memset_0(v24, 0, sizeof(v24));
    v25 = 0LL;
    memset_0(v26, 0, sizeof(v26));
    v27 = 0;
    memset_0(v28, 0, sizeof(v28));
    v29 = 0LL;
    v30 = 0;
    v31 = 0;
    SystemAudioStream::operator=(this + 408, &v17);
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v17);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
    EtwEventActivityIdControl(4LL, &v33);
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    this + 1720,
    0LL);
}
