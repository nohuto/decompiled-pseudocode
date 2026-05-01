/*
 * XREFs of ?Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAX_N000@Z @ 0x1801EF698
 * Callers:
 *     _lambda_9e570927e665d205f933b0ae213f3c70_::operator() @ 0x1801E932C (_lambda_9e570927e665d205f933b0ae213f3c70_--operator().c)
 *     ?TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801EFCC4 (-TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByVal@$00@@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByVal@$00@@777@Z @ 0x18000129C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18008EEB8 (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801F1700 (-zInternalStop@-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::Stop(
        SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *this,
        bool a2,
        char a3,
        char a4,
        bool a5)
{
  int *v5; // rax
  int v10; // ecx
  int *v11; // rdi
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  const struct _tlgProvider_t *v17; // rax
  __int64 v18; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  bool v21; // [rsp+C8h] [rbp-80h] BYREF
  char v22; // [rsp+C9h] [rbp-7Fh] BYREF
  char v23; // [rsp+CAh] [rbp-7Eh] BYREF
  bool v24; // [rsp+CBh] [rbp-7Dh] BYREF
  int v25; // [rsp+CCh] [rbp-7Ch] BYREF
  DWORD v26; // [rsp+D0h] [rbp-78h] BYREF
  int v27; // [rsp+D4h] [rbp-74h] BYREF
  int v28; // [rsp+D8h] [rbp-70h] BYREF
  int v29; // [rsp+DCh] [rbp-6Ch] BYREF
  int v30; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v34; // [rsp+100h] [rbp-48h] BYREF
  __int64 v35; // [rsp+108h] [rbp-40h] BYREF
  __int64 v36; // [rsp+110h] [rbp-38h] BYREF
  __int64 v37; // [rsp+118h] [rbp-30h] BYREF
  __int64 v38; // [rsp+120h] [rbp-28h] BYREF
  __int64 v39; // [rsp+128h] [rbp-20h] BYREF
  __int64 v40; // [rsp+130h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+138h] [rbp-10h] BYREF
  __int64 *v42; // [rsp+158h] [rbp+10h]
  int v43; // [rsp+160h] [rbp+18h]
  int v44; // [rsp+164h] [rbp+1Ch]
  int *v45; // [rsp+168h] [rbp+20h]
  int v46; // [rsp+170h] [rbp+28h]
  int v47; // [rsp+174h] [rbp+2Ch]
  DWORD *v48; // [rsp+178h] [rbp+30h]
  int v49; // [rsp+180h] [rbp+38h]
  int v50; // [rsp+184h] [rbp+3Ch]
  bool *v51; // [rsp+188h] [rbp+40h]
  int v52; // [rsp+190h] [rbp+48h]
  int v53; // [rsp+194h] [rbp+4Ch]
  char *v54; // [rsp+198h] [rbp+50h]
  int v55; // [rsp+1A0h] [rbp+58h]
  int v56; // [rsp+1A4h] [rbp+5Ch]
  char *v57; // [rsp+1A8h] [rbp+60h]
  int v58; // [rsp+1B0h] [rbp+68h]
  int v59; // [rsp+1B4h] [rbp+6Ch]
  bool *v60; // [rsp+1B8h] [rbp+70h]
  int v61; // [rsp+1C0h] [rbp+78h]
  int v62; // [rsp+1C4h] [rbp+7Ch]

  v5 = (int *)*((_QWORD *)this + 6);
  v10 = v5[19];
  if ( v10 >= 0 || v10 != v5[22] || (v11 = v5 + 20, v5 == (int *)-80LL) )
  {
    wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v17 = SearchAppLauncherLogging::Provider(v16);
    v18 = (__int64)v17;
    if ( *(_DWORD *)v17 > 5u && tlgKeywordOn((__int64)v17, 0x400000000000LL) )
    {
      v24 = a5;
      v23 = a4;
      v22 = a3;
      v21 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v20 = *((_QWORD *)this + 6);
      v62 = 0;
      v59 = 0;
      v56 = 0;
      v53 = 0;
      v50 = 0;
      v47 = 0;
      v44 = 0;
      v26 = CurrentThreadId;
      v25 = *(_DWORD *)(v20 + 76);
      v31 = 0x1000000LL;
      v60 = &v24;
      v57 = &v23;
      v54 = &v22;
      v51 = &v21;
      v48 = &v26;
      v45 = &v25;
      v61 = 1;
      v58 = 1;
      v55 = 1;
      v52 = 1;
      v42 = &v31;
      v49 = 4;
      v46 = 4;
      v43 = 8;
      tlgWriteTransfer_EventWriteTransfer(
        v18,
        (unsigned __int8 *)dword_180852B71,
        (const GUID *)(v20 + 8),
        0LL,
        9u,
        &v41);
    }
  }
  else
  {
    wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v13 = SearchAppLauncherLogging::Provider(v12);
    if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v32 = *((_QWORD *)v11 + 15);
      v33 = *((_QWORD *)v11 + 14);
      v27 = v11[26];
      v34 = *((_QWORD *)v11 + 12);
      v15 = *((_QWORD *)this + 6);
      v35 = *((_QWORD *)v11 + 11);
      v28 = v11[20];
      v36 = *((_QWORD *)v11 + 9);
      v29 = v11[8];
      v37 = *((_QWORD *)v11 + 3);
      v30 = *v11;
      v38 = *((_QWORD *)v11 + 16);
      v25 = v11[16];
      v39 = *((_QWORD *)v11 + 7);
      v26 = v11[2];
      v40 = 0x1000000LL;
      v31 = 0x1000000LL;
      v21 = a5;
      v22 = a4;
      v23 = a3;
      v24 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v14,
        (int)&dword_1808529B0,
        v15 + 8,
        v14,
        (__int64)&v31,
        (__int64)&v40,
        (__int64)&v26,
        (const wchar_t **)&v39,
        (__int64)&v25,
        (const wchar_t **)&v38,
        (__int64)&v30,
        (const WCHAR **)&v37,
        (__int64)&v29,
        (const wchar_t **)&v36,
        (__int64)&v28,
        (const wchar_t **)&v35,
        (const WCHAR **)&v34,
        (__int64)&v27,
        (const wchar_t **)&v33,
        (const WCHAR **)&v32,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)((char *)this + 8));
}
