/*
 * XREFs of ?Stop@SyncState@SharedVisualHostProvider@@QEAAXIIPEAUHWND__@@I@Z @ 0x1806E9F50
 * Callers:
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x1806EBF5C (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800ADBAC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564434@Z @ 0x1806E58E8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1806E58E8.c)
 *     ?get@?$static_lazy@VSharedVisualHostProvider@@@details@wil@@QEAAPEAVSharedVisualHostProvider@@P6AXXZ@Z @ 0x1806ED0C8 (-get@-$static_lazy@VSharedVisualHostProvider@@@details@wil@@QEAAPEAVSharedVisualHostProvider@@P6.c)
 */

void __fastcall SharedVisualHostProvider::SyncState::Stop(
        SharedVisualHostProvider::SyncState *this,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  int *v5; // rax
  int v10; // ecx
  int *v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD *v19; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v21; // r8
  int v22; // [rsp+C8h] [rbp-80h] BYREF
  DWORD v23; // [rsp+CCh] [rbp-7Ch] BYREF
  int v24; // [rsp+D0h] [rbp-78h] BYREF
  int v25; // [rsp+D4h] [rbp-74h] BYREF
  unsigned int v26; // [rsp+D8h] [rbp-70h] BYREF
  unsigned int v27; // [rsp+DCh] [rbp-6Ch] BYREF
  int v28; // [rsp+E0h] [rbp-68h] BYREF
  int v29; // [rsp+E4h] [rbp-64h] BYREF
  int v30; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+100h] [rbp-48h] BYREF
  __int64 v34; // [rsp+108h] [rbp-40h] BYREF
  __int64 v35; // [rsp+110h] [rbp-38h] BYREF
  __int64 v36; // [rsp+118h] [rbp-30h] BYREF
  __int64 v37; // [rsp+120h] [rbp-28h] BYREF
  __int64 v38; // [rsp+128h] [rbp-20h] BYREF
  __int64 v39; // [rsp+130h] [rbp-18h] BYREF
  __int64 v40; // [rsp+138h] [rbp-10h] BYREF
  __int64 v41; // [rsp+140h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+148h] [rbp+0h] BYREF
  __int64 *v43; // [rsp+168h] [rbp+20h]
  int v44; // [rsp+170h] [rbp+28h]
  int v45; // [rsp+174h] [rbp+2Ch]
  int *v46; // [rsp+178h] [rbp+30h]
  int v47; // [rsp+180h] [rbp+38h]
  int v48; // [rsp+184h] [rbp+3Ch]
  DWORD *v49; // [rsp+188h] [rbp+40h]
  int v50; // [rsp+190h] [rbp+48h]
  int v51; // [rsp+194h] [rbp+4Ch]
  int *v52; // [rsp+198h] [rbp+50h]
  int v53; // [rsp+1A0h] [rbp+58h]
  int v54; // [rsp+1A4h] [rbp+5Ch]
  int *v55; // [rsp+1A8h] [rbp+60h]
  int v56; // [rsp+1B0h] [rbp+68h]
  int v57; // [rsp+1B4h] [rbp+6Ch]
  __int64 *v58; // [rsp+1B8h] [rbp+70h]
  int v59; // [rsp+1C0h] [rbp+78h]
  int v60; // [rsp+1C4h] [rbp+7Ch]
  unsigned int *v61; // [rsp+1C8h] [rbp+80h]
  int v62; // [rsp+1D0h] [rbp+88h]
  int v63; // [rsp+1D4h] [rbp+8Ch]

  v5 = (int *)*((_QWORD *)this + 6);
  v10 = v5[19];
  if ( v10 >= 0 || v10 != v5[22] || (v11 = v5 + 20, v5 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v18 = wil::details::static_lazy<SharedVisualHostProvider>::get(
            v17,
            _lambda_33f7b6abc9dd15539bbd1f422d65a3e7_::_lambda_invoker_cdecl_);
    v19 = *(_DWORD **)(v18 + 8);
    if ( *v19 > 5u && tlgKeywordOn(*(_QWORD *)(v18 + 8), 0x400000000000LL) )
    {
      v26 = a5;
      v32 = a4;
      v25 = a3;
      v24 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v21 = *((_QWORD *)this + 6);
      v63 = 0;
      v60 = 0;
      v57 = 0;
      v54 = 0;
      v51 = 0;
      v48 = 0;
      v45 = 0;
      v23 = CurrentThreadId;
      v22 = *(_DWORD *)(v21 + 76);
      v31 = 0x1000000LL;
      v61 = &v26;
      v58 = &v32;
      v55 = &v25;
      v52 = &v24;
      v49 = &v23;
      v46 = &v22;
      v43 = &v31;
      v62 = 4;
      v56 = 4;
      v53 = 4;
      v50 = 4;
      v47 = 4;
      v59 = 8;
      v44 = 8;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v19,
        (unsigned __int8 *)dword_18087A6F1,
        (const GUID *)(v21 + 8),
        0LL,
        9u,
        &v42);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = *(_DWORD **)(wil::details::static_lazy<SharedVisualHostProvider>::get(
                         v12,
                         _lambda_33f7b6abc9dd15539bbd1f422d65a3e7_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v27 = a5;
      v34 = *((_QWORD *)v11 + 15);
      v35 = *((_QWORD *)v11 + 14);
      v30 = v11[26];
      v36 = *((_QWORD *)v11 + 12);
      v16 = *((_QWORD *)this + 6);
      v37 = *((_QWORD *)v11 + 11);
      v22 = v11[20];
      v38 = *((_QWORD *)v11 + 9);
      v23 = v11[8];
      v39 = *((_QWORD *)v11 + 3);
      v24 = *v11;
      v40 = *((_QWORD *)v11 + 16);
      v25 = v11[16];
      v41 = *((_QWORD *)v11 + 7);
      v26 = v11[2];
      v31 = 0x1000000LL;
      v32 = 0x1000000LL;
      v33 = a4;
      v28 = a3;
      v29 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v14,
        (unsigned __int8 *)dword_18087A59D,
        (const GUID *)(v16 + 8),
        v15,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v26,
        (const wchar_t **)&v41,
        (__int64)&v25,
        (const wchar_t **)&v40,
        (__int64)&v24,
        (const WCHAR **)&v39,
        (__int64)&v23,
        (const wchar_t **)&v38,
        (__int64)&v22,
        (const wchar_t **)&v37,
        (const WCHAR **)&v36,
        (__int64)&v30,
        (const wchar_t **)&v35,
        (const WCHAR **)&v34,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v33,
        (__int64)&v27);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
