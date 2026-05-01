/*
 * XREFs of ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1800A20AC
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180075ADC (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1805F1334 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180071A38 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl_ea_180071A38.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180075EA0 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180075F30 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1800A0884 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5@Z @ 0x1800A1DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@@-$_tlgWriteTempl.c)
 *     ??1OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180177BB8 (--1OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x18018008C (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSingleViewShellExperience::OnViewDestroyedBase(HSTRING *this)
{
  PCWSTR StringRawBuffer; // rsi
  PCWSTR v3; // r14
  __int64 v4; // rcx
  __int64 *v5; // rax
  _DWORD *v6; // rdi
  int v7; // eax
  DWORD v8; // edx
  unsigned int v9; // edi
  const GUID *v11; // rax
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  char v16; // [rsp+60h] [rbp-A0h]
  void **v17; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v18[24]; // [rsp+78h] [rbp-88h] BYREF
  int v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v3 = WindowsGetStringRawBuffer(this[1], 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v17,
    (__int64)"OnViewDestroyedBase");
  v17 = &SingleViewExperienceTelemetry::OnViewDestroyedBase::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)&v17);
  v5 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
         v4,
         _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
  v6 = (_DWORD *)v5[1];
  if ( *v6 > 5u && tlgKeywordOn(v5[1], 0x200000000000LL) )
  {
    v13 = (__int64)StringRawBuffer;
    v14 = (__int64)v3;
    LODWORD(v12) = GetCurrentThreadId();
    v15 = 0x1000000LL;
    v11 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v17);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      (__int64)v6,
      (unsigned __int8 *)dword_1806CE422,
      (const GUID *)(v20 + 8),
      v11,
      (__int64)&v15,
      (__int64)&v12,
      (const WCHAR **)&v14,
      (const WCHAR **)&v13);
  }
  if ( !v19 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v18);
  CSingleViewShellExperience::UnboostPriority((__int64)this, 0);
  CSingleViewShellExperience::UnboostPriority((__int64)this, 1);
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  v15 = (__int64)this;
  v16 = 1;
  v7 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)this[11] + 8LL))(this[11], this);
  v9 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x233,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)&v17,
      v8);
    v9 = 0;
  }
  CSingleViewShellExperience::ResetViews((CSingleViewShellExperience *)this);
  SingleViewExperienceTelemetry::OnViewDestroyedBase::~OnViewDestroyedBase((SingleViewExperienceTelemetry::OnViewDestroyedBase *)&v17);
  return v9;
}
