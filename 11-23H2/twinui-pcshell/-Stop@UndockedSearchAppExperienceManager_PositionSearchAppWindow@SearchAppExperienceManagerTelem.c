/*
 * XREFs of ?Stop@UndockedSearchAppExperienceManager_PositionSearchAppWindow@SearchAppExperienceManagerTelemetry@@QEAAXAEBUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@@Z @ 0x1800B8838
 * Callers:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800B7650 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444444444444444444@Z @ 0x1800B6D6C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800BADF8 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454444444444444444444444444@Z @ 0x180462338 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180462338.c)
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
  __int64 v10; // rcx
  _DWORD *v11; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  int *v15; // rsi
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  __int32 v18; // [rsp+180h] [rbp-80h] BYREF
  int v19; // [rsp+184h] [rbp-7Ch] BYREF
  int v20; // [rsp+188h] [rbp-78h] BYREF
  __int32 v21; // [rsp+18Ch] [rbp-74h] BYREF
  __int32 v22; // [rsp+190h] [rbp-70h] BYREF
  __int32 v23; // [rsp+194h] [rbp-6Ch] BYREF
  __int32 v24; // [rsp+198h] [rbp-68h] BYREF
  DWORD v25; // [rsp+19Ch] [rbp-64h] BYREF
  __int32 v26; // [rsp+1A0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+1A4h] [rbp-5Ch] BYREF
  int v28; // [rsp+1ACh] [rbp-54h] BYREF
  int v29; // [rsp+1B0h] [rbp-50h] BYREF
  int v30; // [rsp+1B4h] [rbp-4Ch] BYREF
  int v31; // [rsp+1B8h] [rbp-48h] BYREF
  int v32; // [rsp+1BCh] [rbp-44h] BYREF
  __int64 v33; // [rsp+1C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+1C8h] [rbp-38h] BYREF
  int v35; // [rsp+1D0h] [rbp-30h] BYREF
  int v36; // [rsp+1D4h] [rbp-2Ch] BYREF
  LONG left; // [rsp+1D8h] [rbp-28h] BYREF
  LONG top; // [rsp+1DCh] [rbp-24h] BYREF
  __m128i si128; // [rsp+1E0h] [rbp-20h] BYREF
  __int64 v40[2]; // [rsp+1F0h] [rbp-10h] BYREF
  LONG v41; // [rsp+200h] [rbp+0h] BYREF
  int v42; // [rsp+204h] [rbp+4h] BYREF
  __int64 v43; // [rsp+208h] [rbp+8h] BYREF
  int v44; // [rsp+210h] [rbp+10h] BYREF
  LONG v45; // [rsp+214h] [rbp+14h] BYREF
  __int64 v46; // [rsp+218h] [rbp+18h] BYREF
  __int64 v47; // [rsp+220h] [rbp+20h] BYREF
  __int64 v48; // [rsp+228h] [rbp+28h] BYREF
  __int64 v49; // [rsp+230h] [rbp+30h] BYREF
  __int64 v50; // [rsp+238h] [rbp+38h] BYREF
  __int64 v51; // [rsp+240h] [rbp+40h] BYREF
  __int64 v52; // [rsp+248h] [rbp+48h] BYREF
  __int64 v53; // [rsp+250h] [rbp+50h] BYREF
  __int64 v54[5]; // [rsp+258h] [rbp+58h] BYREF
  __int64 v55; // [rsp+290h] [rbp+90h] BYREF
  __int64 v56; // [rsp+298h] [rbp+98h] BYREF
  __int64 v57; // [rsp+2A8h] [rbp+A8h] BYREF

  v4 = (__m128i *)*((_QWORD *)a2 + 9);
  v7 = (__int64)(*((_QWORD *)a2 + 10) - (_QWORD)v4) >> 4;
  *(_OWORD *)v40 = *((_OWORD *)a2 + 2);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  if ( v7 )
    *(__m128i *)v40 = *v4;
  if ( v7 > 1 )
    si128 = v4[1];
  v8 = (int *)*((_QWORD *)this + 6);
  v9 = v8[19];
  if ( v9 >= 0 || v9 != v8[22] || (v15 = v8 + 20, v8 == (int *)-80LL) )
  {
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v11 = *(_DWORD **)(wil::details::static_lazy<SearchAppLauncherLogging>::get(
                         v10,
                         _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v11 > 5u )
    {
      LODWORD(v55) = *((_DWORD *)a2 + 16);
      LODWORD(v56) = a3->bottom;
      LODWORD(v57) = a3->right;
      top = a3->top;
      left = a3->left;
      v36 = *((_DWORD *)a2 + 15);
      v35 = *((_DWORD *)a2 + 14);
      v19 = *((_DWORD *)a2 + 13);
      v20 = *((_DWORD *)a2 + 12);
      v21 = si128.m128i_i32[3];
      v22 = si128.m128i_i32[2];
      v23 = si128.m128i_i32[1];
      v18 = si128.m128i_i32[0];
      v34 = v40[1];
      v33 = v40[0];
      v32 = *((_DWORD *)a2 + 7);
      v31 = *((_DWORD *)a2 + 6);
      v30 = *((_DWORD *)a2 + 5);
      v29 = *((_DWORD *)a2 + 4);
      v28 = *((_DWORD *)a2 + 3);
      v27 = *(_QWORD *)((char *)a2 + 4);
      v26 = *(_DWORD *)a2;
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 6);
      v25 = CurrentThreadId;
      v24 = *(_DWORD *)(v13 + 76);
      si128.m128i_i64[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v11,
        (int)&unk_180853A7B,
        v13 + 8,
        v14,
        (__int64)&si128,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&v27 + 4,
        (__int64)&v28,
        (__int64)&v29,
        (__int64)&v30,
        (__int64)&v31,
        (__int64)&v32,
        (__int64)&v33,
        (__int64)&v33 + 4,
        (__int64)&v34,
        (__int64)&v34 + 4,
        (__int64)&v18,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v35,
        (__int64)&v36,
        (__int64)&left,
        (__int64)&top,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v55);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v17 = *(_DWORD **)(wil::details::static_lazy<SearchAppLauncherLogging>::get(
                         v16,
                         _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v17 > 5u )
    {
      LODWORD(v55) = *((_DWORD *)a2 + 16);
      LODWORD(v56) = a3->bottom;
      LODWORD(v57) = a3->right;
      v45 = a3->top;
      v41 = a3->left;
      v44 = *((_DWORD *)a2 + 15);
      v43 = *(_QWORD *)((char *)a2 + 52);
      v42 = *((_DWORD *)a2 + 12);
      v24 = si128.m128i_i32[3];
      v25 = si128.m128i_u32[2];
      v26 = si128.m128i_i32[1];
      v27 = __PAIR64__(HIDWORD(v40[1]), si128.m128i_u32[0]);
      v28 = v40[1];
      v29 = HIDWORD(v40[0]);
      v30 = v40[0];
      v31 = *((_DWORD *)a2 + 7);
      v32 = *((_DWORD *)a2 + 6);
      LODWORD(v33) = *((_DWORD *)a2 + 5);
      HIDWORD(v33) = *((_DWORD *)a2 + 4);
      LODWORD(v34) = *((_DWORD *)a2 + 3);
      HIDWORD(v34) = *((_DWORD *)a2 + 2);
      v18 = *((_DWORD *)a2 + 1);
      v23 = *(_DWORD *)a2;
      v46 = *((_QWORD *)v15 + 6);
      v22 = v15[17];
      v21 = v15[4];
      v47 = *((_QWORD *)v15 + 15);
      v48 = *((_QWORD *)v15 + 14);
      v20 = v15[26];
      v49 = *((_QWORD *)v15 + 12);
      v50 = *((_QWORD *)v15 + 11);
      v19 = v15[20];
      v51 = *((_QWORD *)v15 + 9);
      v35 = v15[8];
      v52 = *((_QWORD *)v15 + 3);
      v36 = *v15;
      v53 = *((_QWORD *)v15 + 16);
      left = v15[16];
      v54[0] = *((_QWORD *)v15 + 7);
      top = v15[2];
      v40[0] = 0x1000000LL;
      si128.m128i_i64[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v17,
        (int)&dword_1808536A4,
        *((_QWORD *)this + 6) + 8,
        (__int64)&si128,
        (__int64)v40,
        (__int64)&top,
        (__int64)v54,
        (__int64)&left,
        (__int64)&v53,
        (__int64)&v36,
        (__int64)&v52,
        (__int64)&v35,
        (__int64)&v51,
        (__int64)&v19,
        (__int64)&v50,
        (__int64)&v49,
        (__int64)&v20,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v46,
        (__int64)&v23,
        (__int64)&v18,
        (__int64)&v34 + 4,
        (__int64)&v34,
        (__int64)&v33 + 4,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27 + 4,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v42,
        (__int64)&v43,
        (__int64)&v43 + 4,
        (__int64)&v44,
        (__int64)&v41,
        (__int64)&v45,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v55);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow *)((char *)this + 8));
}
