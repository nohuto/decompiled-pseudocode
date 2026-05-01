/*
 * XREFs of ?Stop@MiniSearchAppExperienceManager_PositionSearchAppWindow@MiniSearchAppExperienceManagerTelemetry@@QEAAXAEBUMiniSearchAppSizeAndBorderInfo@@@Z @ 0x1803A3CD8
 * Callers:
 *     ?PositionSearchAppWindow@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A30C8 (-PositionSearchAppWindow@MiniSearchExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017624 (-zInternalStop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454444@Z @ 0x180397C78 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180397C78.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444@Z @ 0x180398004 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow::Stop(
        MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow *this,
        const struct MiniSearchAppSizeAndBorderInfo *a2)
{
  int *v2; // rax
  int v5; // ecx
  int *v6; // rsi
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  _DWORD *v12; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  int v15; // [rsp+E0h] [rbp-80h] BYREF
  DWORD v16; // [rsp+E4h] [rbp-7Ch] BYREF
  int v17; // [rsp+E8h] [rbp-78h] BYREF
  int v18; // [rsp+ECh] [rbp-74h] BYREF
  int v19; // [rsp+F0h] [rbp-70h] BYREF
  int v20; // [rsp+F4h] [rbp-6Ch] BYREF
  int v21; // [rsp+F8h] [rbp-68h] BYREF
  int v22; // [rsp+FCh] [rbp-64h] BYREF
  int v23; // [rsp+100h] [rbp-60h] BYREF
  __int64 v24; // [rsp+108h] [rbp-58h] BYREF
  __int64 v25; // [rsp+110h] [rbp-50h] BYREF
  __int64 v26; // [rsp+118h] [rbp-48h] BYREF
  __int64 v27; // [rsp+120h] [rbp-40h] BYREF
  __int64 v28; // [rsp+128h] [rbp-38h] BYREF
  __int64 v29; // [rsp+130h] [rbp-30h] BYREF
  __int64 v30; // [rsp+138h] [rbp-28h] BYREF
  __int64 v31; // [rsp+140h] [rbp-20h] BYREF
  __int64 v32; // [rsp+148h] [rbp-18h] BYREF
  __int64 v33; // [rsp+150h] [rbp-10h] BYREF
  __int64 v34; // [rsp+158h] [rbp-8h] BYREF
  __int64 v35; // [rsp+180h] [rbp+20h] BYREF
  __int64 v36; // [rsp+190h] [rbp+30h] BYREF
  __int64 v37; // [rsp+198h] [rbp+38h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = (_DWORD *)wil::details::static_lazy<SearchAppLauncherLogging>::get(
                      v11,
                      _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
    if ( *v12 > 5u )
    {
      LODWORD(v35) = *((_DWORD *)a2 + 3);
      LODWORD(v36) = *((_DWORD *)a2 + 2);
      LODWORD(v37) = *((_DWORD *)a2 + 1);
      v17 = *(_DWORD *)a2;
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 6);
      v16 = CurrentThreadId;
      v15 = *(_DWORD *)(v14 + 76);
      v24 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        byte_1806AE217,
        (const GUID *)(v14 + 8),
        0LL,
        (__int64)&v24,
        (__int64)&v15,
        (__int64)&v16,
        (__int64)&v17,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v35);
    }
  }
  else
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = (_DWORD *)wil::details::static_lazy<SearchAppLauncherLogging>::get(
                     v7,
                     _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
    if ( *v8 > 5u )
    {
      LODWORD(v35) = *((_DWORD *)a2 + 3);
      LODWORD(v36) = *((_DWORD *)a2 + 2);
      LODWORD(v37) = *((_DWORD *)a2 + 1);
      v18 = *(_DWORD *)a2;
      v25 = *((_QWORD *)v6 + 6);
      v19 = v6[17];
      v20 = v6[4];
      v26 = *((_QWORD *)v6 + 15);
      v10 = *((_QWORD *)this + 6);
      v27 = *((_QWORD *)v6 + 14);
      v21 = v6[26];
      v28 = *((_QWORD *)v6 + 12);
      v29 = *((_QWORD *)v6 + 11);
      v22 = v6[20];
      v30 = *((_QWORD *)v6 + 9);
      v23 = v6[8];
      v31 = *((_QWORD *)v6 + 3);
      v15 = *v6;
      v32 = *((_QWORD *)v6 + 16);
      v16 = v6[16];
      v33 = *((_QWORD *)v6 + 7);
      v17 = v6[2];
      v34 = 0x1000000LL;
      v24 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v8,
        (unsigned __int8 *)dword_1806AE2C8,
        (const GUID *)(v10 + 8),
        v9,
        (__int64)&v24,
        (__int64)&v34,
        (__int64)&v17,
        (const wchar_t **)&v33,
        (__int64)&v16,
        (const wchar_t **)&v32,
        (__int64)&v15,
        (const WCHAR **)&v31,
        (__int64)&v23,
        (const wchar_t **)&v30,
        (__int64)&v22,
        (const wchar_t **)&v29,
        (const WCHAR **)&v28,
        (__int64)&v21,
        (const wchar_t **)&v27,
        (const WCHAR **)&v26,
        (__int64)&v20,
        (__int64)&v19,
        (const wchar_t **)&v25,
        (__int64)&v18,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v35);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow *)((char *)this + 8));
}
