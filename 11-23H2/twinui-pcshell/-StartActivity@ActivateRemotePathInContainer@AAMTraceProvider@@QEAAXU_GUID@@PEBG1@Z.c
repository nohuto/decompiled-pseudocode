/*
 * XREFs of ?StartActivity@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1@Z @ 0x180632470
 * Callers:
 *     ?ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EURect@Foundation@Windows@@HPEA_J@Z @ 0x1806302A0 (-ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EUR.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@6@Z @ 0x18062E3CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 *     ?get@?$static_lazy@VAAMTraceProvider@@@details@wil@@QEAAPEAVAAMTraceProvider@@P6AXXZ@Z @ 0x180633730 (-get@-$static_lazy@VAAMTraceProvider@@@details@wil@@QEAAPEAVAAMTraceProvider@@P6AXXZ@Z.c)
 *     ?zInternalStart@?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180633890 (-zInternalStart@-$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall AAMTraceProvider::ActivateRemotePathInContainer::StartActivity(
        AAMTraceProvider::ActivateRemotePathInContainer *this,
        struct _GUID *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  const GUID *v10; // rax
  __int64 v11; // [rsp+50h] [rbp-48h] BYREF
  __int64 v12; // [rsp+58h] [rbp-40h] BYREF
  __int64 v13; // [rsp+60h] [rbp-38h] BYREF
  __int64 v14; // [rsp+68h] [rbp-30h] BYREF
  __int64 v15; // [rsp+70h] [rbp-28h] BYREF

  wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = *(_DWORD **)(wil::details::static_lazy<AAMTraceProvider>::get(
                      v8,
                      _lambda_7e8ef9e9b596109f338594047241dcdf_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v9 > 5u )
  {
    v12 = (__int64)a4;
    v13 = (__int64)a3;
    v14 = (__int64)a2;
    v15 = 0LL;
    LODWORD(v11) = GetCurrentThreadId();
    v10 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      (__int64)v9,
      (unsigned __int8 *)dword_18086FC54,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v10,
      (__int64)&v15,
      (__int64)&v11,
      &v14,
      (const WCHAR **)&v13,
      (const WCHAR **)&v12);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
