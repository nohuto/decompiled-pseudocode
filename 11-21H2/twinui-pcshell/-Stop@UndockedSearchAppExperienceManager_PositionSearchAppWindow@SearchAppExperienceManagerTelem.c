/*
 * XREFs of ?Stop@UndockedSearchAppExperienceManager_PositionSearchAppWindow@SearchAppExperienceManagerTelemetry@@QEAAXAEBUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@@Z @ 0x1800476F4
 * Callers:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180046E60 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454444444444444444444444444@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444444444444444444@Z @ 0x1800017F4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     ?zInternalStop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017624 (-zInternalStop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow::Stop(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow *this,
        const struct SearchAppSizeAndBorderInfo *a2,
        const struct tagRECT *a3)
{
  __m128i *v4; // rcx
  unsigned __int64 v7; // rax
  int *v8; // rax
  int v9; // ecx
  int *v10; // rsi
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r9
  int v13; // ecx
  __int64 v14; // rax
  const struct _tlgProvider_t *v15; // rax
  int v16; // esi
  int v17; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int32 v21; // [rsp+180h] [rbp-80h] BYREF
  int v22; // [rsp+184h] [rbp-7Ch] BYREF
  int v23; // [rsp+188h] [rbp-78h] BYREF
  __int32 v24; // [rsp+18Ch] [rbp-74h] BYREF
  __int32 v25; // [rsp+190h] [rbp-70h] BYREF
  __int32 v26; // [rsp+194h] [rbp-6Ch] BYREF
  __int32 v27; // [rsp+198h] [rbp-68h] BYREF
  DWORD v28; // [rsp+19Ch] [rbp-64h] BYREF
  __int32 v29; // [rsp+1A0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+1A4h] [rbp-5Ch] BYREF
  int v31; // [rsp+1ACh] [rbp-54h] BYREF
  int v32; // [rsp+1B0h] [rbp-50h] BYREF
  int v33; // [rsp+1B4h] [rbp-4Ch] BYREF
  int v34; // [rsp+1B8h] [rbp-48h] BYREF
  int v35; // [rsp+1BCh] [rbp-44h] BYREF
  __int64 v36; // [rsp+1C0h] [rbp-40h] BYREF
  __int64 v37; // [rsp+1C8h] [rbp-38h] BYREF
  int v38; // [rsp+1D0h] [rbp-30h] BYREF
  int v39; // [rsp+1D4h] [rbp-2Ch] BYREF
  LONG left; // [rsp+1D8h] [rbp-28h] BYREF
  LONG top; // [rsp+1DCh] [rbp-24h] BYREF
  __m128i si128; // [rsp+1E0h] [rbp-20h] BYREF
  __int64 v43[2]; // [rsp+1F0h] [rbp-10h] BYREF
  LONG v44; // [rsp+200h] [rbp+0h] BYREF
  int v45; // [rsp+204h] [rbp+4h] BYREF
  __int64 v46; // [rsp+208h] [rbp+8h] BYREF
  int v47; // [rsp+210h] [rbp+10h] BYREF
  LONG v48; // [rsp+214h] [rbp+14h] BYREF
  const wchar_t *v49; // [rsp+218h] [rbp+18h] BYREF
  __int64 v50; // [rsp+220h] [rbp+20h] BYREF
  __int64 v51; // [rsp+228h] [rbp+28h] BYREF
  __int64 v52; // [rsp+230h] [rbp+30h] BYREF
  __int64 v53; // [rsp+238h] [rbp+38h] BYREF
  __int64 v54; // [rsp+240h] [rbp+40h] BYREF
  __int64 v55; // [rsp+248h] [rbp+48h] BYREF
  __int64 v56; // [rsp+250h] [rbp+50h] BYREF
  __int64 v57; // [rsp+258h] [rbp+58h] BYREF
  __int64 v58; // [rsp+290h] [rbp+90h] BYREF
  __int64 v59; // [rsp+298h] [rbp+98h] BYREF
  __int64 v60; // [rsp+2A8h] [rbp+A8h] BYREF

  v4 = (__m128i *)*((_QWORD *)a2 + 9);
  v7 = (__int64)(*((_QWORD *)a2 + 10) - (_QWORD)v4) >> 4;
  *(_OWORD *)v43 = *((_OWORD *)a2 + 2);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  if ( v7 )
    *(__m128i *)v43 = *v4;
  if ( v7 > 1 )
    si128 = v4[1];
  v8 = (int *)*((_QWORD *)this + 6);
  v9 = v8[19];
  if ( v9 >= 0 || v9 != v8[22] || (v10 = v8 + 20, v8 == (int *)-80LL) )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v15 = SearchAppLauncherLogging::Provider();
    v16 = (int)v15;
    if ( *(_DWORD *)v15 > 5u && (unsigned __int8)tlgKeywordOn(v15, 0LL) )
    {
      v17 = *((_DWORD *)a2 + 16);
      LODWORD(v59) = a3->bottom;
      LODWORD(v60) = a3->right;
      top = a3->top;
      left = a3->left;
      v39 = *((_DWORD *)a2 + 15);
      v38 = *((_DWORD *)a2 + 14);
      v22 = *((_DWORD *)a2 + 13);
      v23 = *((_DWORD *)a2 + 12);
      v24 = si128.m128i_i32[3];
      v25 = si128.m128i_i32[2];
      v26 = si128.m128i_i32[1];
      v21 = si128.m128i_i32[0];
      v37 = v43[1];
      v36 = v43[0];
      v35 = *((_DWORD *)a2 + 7);
      v34 = *((_DWORD *)a2 + 6);
      v33 = *((_DWORD *)a2 + 5);
      v32 = *((_DWORD *)a2 + 4);
      v31 = *((_DWORD *)a2 + 3);
      v30 = *(_QWORD *)((char *)a2 + 4);
      v29 = *(_DWORD *)a2;
      LODWORD(v58) = v17;
      CurrentThreadId = GetCurrentThreadId();
      v19 = *((_QWORD *)this + 6);
      v28 = CurrentThreadId;
      v27 = *(_DWORD *)(v19 + 76);
      si128.m128i_i64[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v16,
        (int)&unk_1806AB89F,
        v19 + 8,
        v20,
        (__int64)&si128,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)&v29,
        (__int64)&v30,
        (__int64)&v30 + 4,
        (__int64)&v31,
        (__int64)&v32,
        (__int64)&v33,
        (__int64)&v34,
        (__int64)&v35,
        (__int64)&v36,
        (__int64)&v36 + 4,
        (__int64)&v37,
        (__int64)&v37 + 4,
        (__int64)&v21,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v38,
        (__int64)&v39,
        (__int64)&left,
        (__int64)&top,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58);
    }
  }
  else
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = SearchAppLauncherLogging::Provider();
    if ( *(_DWORD *)v11 > 5u && (unsigned __int8)tlgKeywordOn(v11, 0LL) )
    {
      LODWORD(v59) = a3->bottom;
      LODWORD(v60) = a3->right;
      v48 = a3->top;
      v44 = a3->left;
      v47 = *((_DWORD *)a2 + 15);
      v46 = *(_QWORD *)((char *)a2 + 52);
      v45 = *((_DWORD *)a2 + 12);
      v27 = si128.m128i_i32[3];
      v13 = *((_DWORD *)a2 + 16);
      v28 = si128.m128i_u32[2];
      v29 = si128.m128i_i32[1];
      v30 = __PAIR64__(HIDWORD(v43[1]), si128.m128i_u32[0]);
      v31 = v43[1];
      v32 = HIDWORD(v43[0]);
      v33 = v43[0];
      v34 = *((_DWORD *)a2 + 7);
      v35 = *((_DWORD *)a2 + 6);
      LODWORD(v36) = *((_DWORD *)a2 + 5);
      HIDWORD(v36) = *((_DWORD *)a2 + 4);
      LODWORD(v37) = *((_DWORD *)a2 + 3);
      HIDWORD(v37) = *((_DWORD *)a2 + 2);
      v21 = *((_DWORD *)a2 + 1);
      v26 = *(_DWORD *)a2;
      v49 = (const wchar_t *)*((_QWORD *)v10 + 6);
      v25 = v10[17];
      v24 = v10[4];
      v50 = *((_QWORD *)v10 + 15);
      v51 = *((_QWORD *)v10 + 14);
      v23 = v10[26];
      v52 = *((_QWORD *)v10 + 12);
      v53 = *((_QWORD *)v10 + 11);
      v22 = v10[20];
      v54 = *((_QWORD *)v10 + 9);
      v38 = v10[8];
      v55 = *((_QWORD *)v10 + 3);
      v39 = *v10;
      v56 = *((_QWORD *)v10 + 16);
      left = v10[16];
      v14 = *((_QWORD *)v10 + 7);
      LODWORD(v58) = v13;
      v57 = v14;
      top = v10[2];
      v43[0] = 0x1000000LL;
      si128.m128i_i64[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        (int)&dword_1806AB456,
        *((_QWORD *)this + 6) + 8,
        v12,
        (__int64)&si128,
        (__int64)v43,
        (__int64)&top,
        (const wchar_t **)&v57,
        (__int64)&left,
        (const wchar_t **)&v56,
        (__int64)&v39,
        (const WCHAR **)&v55,
        (__int64)&v38,
        (const wchar_t **)&v54,
        (__int64)&v22,
        (const wchar_t **)&v53,
        (const WCHAR **)&v52,
        (__int64)&v23,
        (const wchar_t **)&v51,
        (const WCHAR **)&v50,
        (__int64)&v24,
        (__int64)&v25,
        &v49,
        (__int64)&v26,
        (__int64)&v21,
        (__int64)&v37 + 4,
        (__int64)&v37,
        (__int64)&v36 + 4,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30 + 4,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v45,
        (__int64)&v46,
        (__int64)&v46 + 4,
        (__int64)&v47,
        (__int64)&v44,
        (__int64)&v48,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow *)((char *)this + 8));
}
