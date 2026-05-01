/*
 * XREFs of ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x18000C03C
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18000BC14 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByVal@$00@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByVal@$00@@66@Z @ 0x18000C71C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U-$_tlgWrapper.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180075F30 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::StartActivity(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        bool a5,
        bool a6,
        bool a7)
{
  __int64 v11; // rcx
  __int64 v12; // rdi
  DWORD CurrentThreadId; // eax
  int v14; // eax
  bool v15; // [rsp+68h] [rbp-1h] BYREF
  bool v16; // [rsp+69h] [rbp+0h] BYREF
  int v17; // [rsp+6Ch] [rbp+3h] BYREF
  __int64 v18; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+80h] [rbp+17h] BYREF
  __int64 v21; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v22; // [rsp+B8h] [rbp+4Fh] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v12 = *(_QWORD *)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                      v11,
                      _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *(_DWORD *)v12 > 5u
    && (*(_QWORD *)(v12 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v12 + 24) & 0x200000000000LL) == *(_QWORD *)(v12 + 24) )
  {
    LOBYTE(v22) = a7;
    v15 = a6;
    v16 = a5;
    v17 = a4;
    v19 = (__int64)a3;
    v20 = (__int64)a2;
    CurrentThreadId = GetCurrentThreadId();
    v21 = 0x1000000LL;
    LODWORD(v18) = CurrentThreadId;
    v14 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v12,
      (int)&dword_1806CEDAB,
      *((_QWORD *)this + 6) + 8,
      v14,
      (__int64)&v21,
      (__int64)&v18,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v22);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)((char *)this + 8));
}
