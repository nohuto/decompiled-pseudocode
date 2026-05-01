/*
 * XREFs of ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800A3348
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180075ADC (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180043A68 (-EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@View.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180071A38 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl_ea_180071A38.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180075EA0 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180075F30 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5@Z @ 0x1800A1DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@@-$_tlgWriteTempl.c)
 *     ??1OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800A3538 (--1OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x18017E4E4 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x18018008C (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1805F1334 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSingleViewShellExperience::OnViewCreatedBase(CSingleViewShellExperience *this, __int64 *a2)
{
  PCWSTR StringRawBuffer; // r14
  PCWSTR v5; // r15
  __int64 v6; // rcx
  __int64 *v7; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rcx
  char v10; // si
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  DWORD v16; // edx
  const GUID *v18; // rax
  int v19; // esi
  int v20; // r14d
  int v21; // eax
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // [rsp+20h] [rbp-E0h]
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  char v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  void **v34; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v35[24]; // [rsp+78h] [rbp-88h] BYREF
  int v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v5 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v34,
    (__int64)"OnViewCreatedBase");
  v34 = &SingleViewExperienceTelemetry::OnViewCreatedBase::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)&v34);
  v7 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
         v6,
         _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
  v8 = (_DWORD *)v7[1];
  if ( *v8 > 5u && tlgKeywordOn(v7[1], 0x200000000000LL) )
  {
    v32 = (__int64)StringRawBuffer;
    v33 = (__int64)v5;
    LODWORD(v29) = GetCurrentThreadId();
    v30 = 0x1000000LL;
    v18 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v34);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      (__int64)v8,
      (unsigned __int8 *)dword_1806CE5FF,
      (const GUID *)(v37 + 8),
      v18,
      (__int64)&v30,
      (__int64)&v29,
      (const WCHAR **)&v33,
      (const WCHAR **)&v32);
  }
  if ( !v36 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v35);
  if ( *((_QWORD *)this + 3) )
  {
    v19 = *((_DWORD *)this + 16);
    v20 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 16) = 0;
    *((_DWORD *)this + 17) = 0;
    v21 = CSingleViewShellExperience::DestroyView(this);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1A1,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v21,
        v28);
    *((_DWORD *)this + 16) = v19;
    *((_DWORD *)this + 17) = v20;
  }
  v9 = 0LL;
  if ( &v29 != a2 )
  {
    v9 = *a2;
    *a2 = 0LL;
  }
  v29 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v9;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
  v30 = (__int64)this;
  v10 = 1;
  v31 = 1;
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 32LL))(*((_QWORD *)this + 10));
  v12 = v11;
  if ( v11 < 0 )
  {
    v22 = (unsigned int)v11;
    v23 = 428LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v22);
    goto LABEL_17;
  }
  v10 = 0;
  v31 = 0;
  if ( *((_DWORD *)this + 16) == 2 )
  {
    v12 = -2147023673;
LABEL_28:
    v26 = CSingleViewShellExperience::DestroyView(this);
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D7,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v26,
        v28);
    *((_DWORD *)this + 16) = 0;
    *((_DWORD *)this + 17) = 0;
    CSingleViewShellExperience::ResetViews(this);
    v23 = 474LL;
    goto LABEL_32;
  }
  v13 = *((unsigned int *)this + 15);
  if ( (_DWORD)v13 )
  {
    v14 = CSingleViewShellExperience::SetWindowBand(this, v13);
    v12 = v14;
    if ( v14 < 0 )
    {
      v22 = (unsigned int)v14;
      v23 = 443LL;
      goto LABEL_33;
    }
  }
  if ( *((_BYTE *)this + 53) )
  {
    ShellExperienceHelpers::NavigationLevelOverrideHelper::EnableOverride((_DWORD *)this + 18, *((_QWORD *)this + 3));
    LOBYTE(v24) = *((_BYTE *)this + 53);
    v25 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *, __int64))(**((_QWORD **)this + 11) + 96LL))(
            *((_QWORD *)this + 11),
            this,
            v24);
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C6,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v25,
        v28);
  }
  if ( !*((_QWORD *)this + 3) )
  {
    v12 = -2147023673;
    v23 = 465LL;
LABEL_32:
    v22 = v12;
    goto LABEL_33;
  }
  v15 = (***((__int64 (__fastcall ****)(_QWORD, CSingleViewShellExperience *))this + 11))(*((_QWORD *)this + 11), this);
  v12 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1CD,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v15,
      v28);
    goto LABEL_28;
  }
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)&v34,
    v16);
  v12 = 0;
LABEL_17:
  if ( v10 )
  {
    v27 = CSingleViewShellExperience::DestroyView(this);
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AB,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v27,
        v28);
  }
  SingleViewExperienceTelemetry::OnViewCreatedBase::~OnViewCreatedBase((SingleViewExperienceTelemetry::OnViewCreatedBase *)&v34);
  return v12;
}
