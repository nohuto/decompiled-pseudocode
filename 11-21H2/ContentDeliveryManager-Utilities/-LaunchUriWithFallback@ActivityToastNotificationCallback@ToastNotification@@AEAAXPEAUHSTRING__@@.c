/*
 * XREFs of ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x18007937C
 * Callers:
 *     ??R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ @ 0x180076920 (--R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherOptions@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180074654 (--$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA-AV-$com_ptr_t@UILauncherOptions@S.c)
 *     ??$GetActivationFactory@UILauncherStatics@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherStatics@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180074A28 (--$GetActivationFactory@UILauncherStatics@System@Windows@@@wil@@YA-AV-$com_ptr_t@UILauncherStati.c)
 *     ??$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIUriRuntimeClassFactory@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180074AC8 (--$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA-AV-$com_ptr_t@UIUr.c)
 *     ??$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QEA_N0$$QEAPEBG@Z @ 0x180074FC4 (--$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QE.c)
 *     ??$wait_for_completion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180075FF0 (--$wait_for_completion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType.c)
 *     ??_9ILauncherStatics@System@Windows@@$BEI@AA @ 0x180077134 (--_9ILauncherStatics@System@Windows@@$BEI@AA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback(
        ToastNotification::ActivityToastNotificationCallback *this,
        __int64 a2,
        HSTRING a3)
{
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // r8d
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // r8d
  WCHAR *v17; // rcx
  __int64 v18; // rbx
  int (__fastcall *v19)(__int64, HSTRING, HSTRING *); // rsi
  HRESULT v20; // eax
  char v21; // di
  HSTRING v22; // rcx
  __int64 v23; // rcx
  int v24; // [rsp+20h] [rbp-29h] BYREF
  WCHAR *StringRawBuffer; // [rsp+28h] [rbp-21h] BYREF
  HSTRING string; // [rsp+30h] [rbp-19h] BYREF
  __int64 v27; // [rsp+38h] [rbp-11h] BYREF
  __int64 v28; // [rsp+40h] [rbp-9h] BYREF
  __int64 v29; // [rsp+48h] [rbp-1h] BYREF
  __int64 *v30; // [rsp+50h] [rbp+7h] BYREF
  __int64 v31; // [rsp+58h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+17h] BYREF
  HSTRING v33; // [rsp+78h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  LODWORD(StringRawBuffer) = 0;
  wil::GetActivationFactory<Windows::Foundation::IUriRuntimeClassFactory>((const WCHAR *)&v30, a2, (unsigned int)a3);
  v27 = 0LL;
  v5 = *v30;
  v27 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 48))(v30, a2, &v27);
  v9 = retaddr;
  if ( v6 < 0 )
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v9,
      245LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v6,
      v24);
  wil::ActivateInstance<Windows::System::ILauncherOptions>(&v29, v7, v8);
  if ( WindowsGetStringLen(a3) )
  {
    StringRawBuffer = 0LL;
    v12 = *v30;
    StringRawBuffer = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, WCHAR **))(v12 + 48))(v30, a3, &StringRawBuffer);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        252LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v13,
        v24);
    v14 = (*(__int64 (__fastcall **)(__int64, WCHAR *))(*(_QWORD *)v29 + 128LL))(v29, StringRawBuffer);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        253LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v14,
        v24);
    if ( StringRawBuffer )
      (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)StringRawBuffer + 16LL))(StringRawBuffer);
  }
  wil::GetActivationFactory<Windows::System::ILauncherStatics>((const WCHAR *)&v31, v10, v11);
  StringRawBuffer = 0LL;
  v15 =  Windows::System::ILauncherStatics::`vcall'{72,{flat}}(v31);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1671LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v15,
      v24);
  wil::wait_for_completion<bool,wil::details::MapToSmartType<unsigned char,void>::type>(
    &v24,
    (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))StringRawBuffer,
    v16);
  v17 = StringRawBuffer;
  if ( StringRawBuffer )
  {
    StringRawBuffer = 0LL;
    (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v28 = 0LL;
  string = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 120LL))(v27, &v28) < 0 )
    goto LABEL_15;
  v18 = v28;
  v19 = *(int (__fastcall **)(__int64, HSTRING, HSTRING *))(*(_QWORD *)v28 + 48LL);
  WindowsDeleteString(string);
  string = 0LL;
  v33 = 0LL;
  v20 = WindowsCreateStringReference(L"mmx-scid", 8u, &hstringHeader, &v33);
  if ( v20 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
    goto LABEL_31;
  }
  v21 = 1;
  LODWORD(StringRawBuffer) = 1;
  if ( v19(v18, v33, &string) < 0 )
  {
LABEL_15:
    v22 = string;
    goto LABEL_16;
  }
  v22 = string;
  if ( !string )
LABEL_16:
    v21 = 0;
  if ( v21 )
  {
    StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(v22, 0LL);
    BYTE1(v24) = 0;
    LOBYTE(v24) = (_BYTE)v24 != 0;
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::ReportLaunchStatus<bool,bool,unsigned short const *>(
      (char *)&v24,
      (char *)&v24 + 1,
      (const WCHAR **)&StringRawBuffer);
    v22 = string;
  }
  WindowsDeleteString(v22);
  string = 0LL;
  v23 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v30 )
    (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
}
