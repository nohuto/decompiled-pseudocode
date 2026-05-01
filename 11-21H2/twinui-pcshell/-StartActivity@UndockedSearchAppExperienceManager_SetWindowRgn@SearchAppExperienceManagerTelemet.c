/*
 * XREFs of ?StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAAXAEBUtagRECT@@00@Z @ 0x1801A13D4
 * Callers:
 *     ??$Start@AEBUtagRECT@@$$CBU1@$$CBU1@@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@SA?AV01@AEBUtagRECT@@$$QEBU2@1@Z @ 0x18019A0E4 (--$Start@AEBUtagRECT@@$$CBU1@$$CBU1@@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppEx.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444444@Z @ 0x180001698 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1802EBBD8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?zInternalStart@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180390360 (-zInternalStart@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::StartActivity(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  int v10; // r15d
  LONG top; // ecx
  LONG bottom; // r10d
  LONG right; // r8d
  LONG v14; // eax
  LONG v15; // ecx
  LONG v16; // eax
  LONG v17; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v19; // r8
  int v20; // ecx
  LONG v21; // [rsp+98h] [rbp+7h] BYREF
  LONG v22; // [rsp+9Ch] [rbp+Bh] BYREF
  LONG v23; // [rsp+A0h] [rbp+Fh] BYREF
  LONG v24; // [rsp+A4h] [rbp+13h] BYREF
  LONG v25; // [rsp+A8h] [rbp+17h] BYREF
  LONG v26; // [rsp+ACh] [rbp+1Bh] BYREF
  LONG left; // [rsp+B0h] [rbp+1Fh] BYREF
  LONG v28; // [rsp+B4h] [rbp+23h] BYREF
  LONG v29; // [rsp+B8h] [rbp+27h] BYREF
  LONG v30; // [rsp+BCh] [rbp+2Bh] BYREF
  LONG v31; // [rsp+C0h] [rbp+2Fh] BYREF
  DWORD v32; // [rsp+C4h] [rbp+33h] BYREF
  __int64 v33; // [rsp+C8h] [rbp+37h] BYREF
  LONG v34; // [rsp+F8h] [rbp+67h] BYREF

  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = SearchAppLauncherLogging::Provider(v8);
  v10 = (int)v9;
  if ( *(_DWORD *)v9 > 5u )
  {
    top = a4->top;
    bottom = a4->bottom;
    right = a4->right;
    v25 = a3->right;
    v26 = a3->top;
    left = a3->left;
    v28 = a2->bottom;
    v29 = a2->right;
    v14 = a2->top;
    v22 = top;
    v15 = a4->left;
    v30 = v14;
    v16 = a2->left;
    v23 = v15;
    v17 = a3->bottom;
    v31 = v16;
    v34 = bottom;
    v21 = right;
    v24 = v17;
    CurrentThreadId = GetCurrentThreadId();
    v19 = *((_QWORD *)this + 6);
    v32 = CurrentThreadId;
    v33 = 0x1000000LL;
    if ( !*(_BYTE *)(v19 + 4) || _tlgGuidIsZero((const struct _GUID *)(v19 + 24)) )
      v20 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (int)&unk_1806AAF77,
      v19 + 8,
      v20,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&left,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v34);
  }
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(this);
}
