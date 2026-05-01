/*
 * XREFs of ?StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAAXAEBUtagRECT@@0@Z @ 0x1801A1558
 * Callers:
 *     ??$Start@AEBUtagRECT@@AEBU1@@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@SA?AV01@AEBUtagRECT@@0@Z @ 0x18019A150 (--$Start@AEBUtagRECT@@AEBU1@@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperience.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444@Z @ 0x1800015A0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteT.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1802EBBD8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?zInternalStart@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180390360 (-zInternalStart@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::StartActivity(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rax
  int v8; // r14d
  LONG right; // eax
  LONG bottom; // r9d
  LONG v11; // r8d
  LONG left; // ecx
  LONG v13; // eax
  LONG v14; // ecx
  LONG v15; // eax
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  int v18; // ecx
  LONG top; // [rsp+70h] [rbp+17h] BYREF
  LONG v20; // [rsp+74h] [rbp+1Bh] BYREF
  LONG v21; // [rsp+78h] [rbp+1Fh] BYREF
  LONG v22; // [rsp+7Ch] [rbp+23h] BYREF
  LONG v23; // [rsp+80h] [rbp+27h] BYREF
  LONG v24; // [rsp+84h] [rbp+2Bh] BYREF
  DWORD v25; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v26; // [rsp+90h] [rbp+37h] BYREF
  LONG v27; // [rsp+C0h] [rbp+67h] BYREF
  LONG v28; // [rsp+D8h] [rbp+7Fh] BYREF

  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = SearchAppLauncherLogging::Provider(v6);
  v8 = (int)v7;
  if ( *(_DWORD *)v7 > 5u )
  {
    right = a2->right;
    bottom = a3->bottom;
    v11 = a3->right;
    top = a3->top;
    left = a3->left;
    v22 = right;
    v13 = a2->top;
    v20 = left;
    v14 = a2->bottom;
    v23 = v13;
    v15 = a2->left;
    v21 = v14;
    v24 = v15;
    v27 = bottom;
    v28 = v11;
    CurrentThreadId = GetCurrentThreadId();
    v17 = *((_QWORD *)this + 6);
    v25 = CurrentThreadId;
    v26 = 0x1000000LL;
    if ( !*(_BYTE *)(v17 + 4) || _tlgGuidIsZero((const struct _GUID *)(v17 + 24)) )
      v18 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      (int)&unk_1806AB10C,
      v17 + 8,
      v18,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&top,
      (__int64)&v28,
      (__int64)&v27);
  }
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(this);
}
