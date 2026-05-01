/*
 * XREFs of ?StartActivity@ActivateApplicationInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1K@Z @ 0x1805743B0
 * Callers:
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x180571950 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@64@Z @ 0x180570004 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA_ea_180570004.c)
 *     ?get@?$static_lazy@VAAMTraceProvider@@@details@wil@@QEAAPEAVAAMTraceProvider@@P6AXXZ@Z @ 0x1805756E4 (-get@-$static_lazy@VAAMTraceProvider@@@details@wil@@QEAAPEAVAAMTraceProvider@@P6AXXZ@Z.c)
 *     ?zInternalStart@?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180575844 (-zInternalStart@-$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall AAMTraceProvider::ActivateApplicationInContainer::StartActivity(
        AAMTraceProvider::ActivateApplicationInContainer *this,
        struct _GUID *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  const GUID *v11; // rax
  unsigned int v12; // [rsp+50h] [rbp-30h] BYREF
  DWORD CurrentThreadId; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h] BYREF
  __int64 v16; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h] BYREF

  wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v10 = *(_DWORD **)(wil::details::static_lazy<AAMTraceProvider>::get(
                       v9,
                       _lambda_7e8ef9e9b596109f338594047241dcdf_::_lambda_invoker_cdecl_)
                   + 8);
  if ( *v10 > 5u )
  {
    v12 = a5;
    v14 = (__int64)a4;
    v15 = (__int64)a3;
    v16 = (__int64)a2;
    v17 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v11 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v10,
      (unsigned __int8 *)dword_1806C79A3,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v11,
      (__int64)&v17,
      (__int64)&CurrentThreadId,
      &v16,
      (const WCHAR **)&v15,
      (const WCHAR **)&v14,
      (__int64)&v12);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AAMTraceProvider::ActivateApplicationInContainer *)((char *)this + 8));
}
