/*
 * XREFs of ?StartActivity@Cloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18002BAC4
 * Callers:
 *     ?Cloak@CSingleViewShellExperience@@QEAAJXZ @ 0x18002B9A8 (-Cloak@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180075F30 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5@Z @ 0x1800A1DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@@-$_tlgWriteTempl.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall SingleViewExperienceTelemetry::Cloak::StartActivity(
        SingleViewExperienceTelemetry::Cloak *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  _DWORD *v8; // rdi
  int v9; // eax
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
         v6,
         _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
  v8 = *(_DWORD **)(v7 + 8);
  if ( *v8 > 5u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v7 + 8), 0x200000000000LL) )
  {
    v13 = (__int64)a3;
    v10 = (__int64)a2;
    v11[0] = 0x1000000LL;
    LODWORD(v12) = GetCurrentThreadId();
    v9 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      (int)v8,
      (int)&dword_1806CF008,
      *((_QWORD *)this + 6) + 8,
      v9,
      (__int64)v11,
      (__int64)&v12,
      (__int64)&v10,
      (__int64)&v13);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SingleViewExperienceTelemetry::Cloak *)((char *)this + 8));
}
