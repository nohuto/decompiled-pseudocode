/*
 * XREFs of ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@IPEBG@Z @ 0x1802030D0
 * Callers:
 *     ??$Start@W4Mode@LauncherTelemetry@@IAEAY03$$CBG@LauncherInvokeActivity@CommonStartTelemetry@@SA?AV01@$$QEAW4Mode@LauncherTelemetry@@$$QEAIAEAY03$$CBG@Z @ 0x180201D5C (--$Start@W4Mode@LauncherTelemetry@@IAEAY03$$CBG@LauncherInvokeActivity@CommonStartTelemetry@@SA-.c)
 *     ??$Start@W4Mode@LauncherTelemetry@@IAEBQEBG@LauncherInvokeActivity@CommonStartTelemetry@@SA?AV01@$$QEAW4Mode@LauncherTelemetry@@$$QEAIAEBQEBG@Z @ 0x180201DB4 (--$Start@W4Mode@LauncherTelemetry@@IAEBQEBG@LauncherInvokeActivity@CommonStartTelemetry@@SA-AV01.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@G@@@Z @ 0x1800015A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTe.c)
 *     ?Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800BBE4C (-Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800BCA00 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?zInternalStart@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801AF984 (-zInternalStart@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgRe.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1803A461C (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::StartActivity(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  int v10; // edi
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  int v13; // ecx
  int v14; // [rsp+50h] [rbp-38h] BYREF
  DWORD v15; // [rsp+54h] [rbp-34h] BYREF
  __int64 v16; // [rsp+58h] [rbp-30h] BYREF
  __int64 v17; // [rsp+60h] [rbp-28h] BYREF
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v9 = LauncherTelemetryLogging::Provider(v8);
  v10 = (int)v9;
  if ( *(_DWORD *)v9 > 4u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
  {
    v16 = a4;
    LODWORD(v18) = a3;
    v14 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v12 = *(_QWORD *)(a1 + 48);
    v15 = CurrentThreadId;
    v17 = 50331648LL;
    if ( !*(_BYTE *)(v12 + 4) || _tlgGuidIsZero((const struct _GUID *)(v12 + 24)) )
      v13 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v10,
      (int)&dword_18085CC89,
      v12 + 8,
      v13,
      (__int64)&v17,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v18,
      (const WCHAR **)&v16);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
