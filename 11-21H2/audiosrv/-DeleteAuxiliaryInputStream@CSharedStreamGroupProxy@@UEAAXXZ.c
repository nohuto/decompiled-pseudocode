/*
 * XREFs of ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x180040570
 * Callers:
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180040160 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x1800ED9F8 (--1SystemAudioStream@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800F68E0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??4SystemAudioStream@@QEAAAEAU0@$$QEAU0@@Z @ 0x1800F7600 (--4SystemAudioStream@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSharedStreamGroupProxy::DeleteAuxiliaryInputStream(unsigned __int64 this)
{
  void *v2; // rsi
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  int v7; // r8d
  int v8; // r9d
  DWORD LastError; // ebx
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  _BYTE v18[304]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19; // [rsp+1B0h] [rbp+B0h]
  _BYTE v20[296]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v21; // [rsp+2E0h] [rbp+1E0h]
  _BYTE v22[296]; // [rsp+2E8h] [rbp+1E8h] BYREF
  int v23; // [rsp+410h] [rbp+310h]
  _BYTE v24[304]; // [rsp+418h] [rbp+318h] BYREF
  __int64 v25; // [rsp+548h] [rbp+448h]
  int v26; // [rsp+550h] [rbp+450h]
  __int128 v27; // [rsp+560h] [rbp+460h]
  __int128 v28; // [rsp+570h] [rbp+470h] BYREF

  if ( *(_QWORD *)(this + 360) )
  {
    v27 = *(_OWORD *)(this + 1624);
    v28 = v27;
    EtwEventActivityIdControl(4LL, &v28);
    if ( *(_BYTE *)(this + 320) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(this + 368) + 48LL))(
        *(_QWORD *)(this + 368),
        *(_QWORD *)(this + 360));
      *(_BYTE *)(this + 320) = 0;
    }
    v3 = *(__int64 **)(this + 368);
    v4 = *v3;
    v10 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v4 + 88))(v3, &v10) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 32LL))(v10, *(_QWORD *)(this + 360));
      v6 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       v5,
                       _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *v6 > 4u )
      {
        v11 = this & ((unsigned __int128)-(__int128)(this - 8) >> 64);
        v12 = *(_QWORD *)(this + 1616);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (_DWORD)v6,
          (unsigned int)&unk_180189C63,
          v7,
          v8,
          (__int64)&v12,
          (__int64)&v11);
      }
    }
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    memset_0(v18, 0, sizeof(v18));
    v19 = 0LL;
    memset_0(v20, 0, sizeof(v20));
    v21 = 0LL;
    memset_0(v22, 0, sizeof(v22));
    v23 = 0;
    memset_0(v24, 0, sizeof(v24));
    v25 = 0LL;
    v26 = 0;
    SystemAudioStream::operator=(this + 328, &v13);
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v13);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
    EtwEventActivityIdControl(4LL, &v28);
  }
  v2 = *(void **)(this + 1640);
  if ( v2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v2);
    SetLastError(LastError);
  }
  *(_QWORD *)(this + 1640) = 0LL;
}
