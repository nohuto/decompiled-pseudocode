/*
 * XREFs of ?SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z @ 0x18011F478
 * Callers:
 *     AudioServerSetAudioEffect @ 0x180124FB0 (AudioServerSetAudioEffect.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180011588 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVa.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15A0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800ED534 (-SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVADServer::SetAudioEffect(CVADServer *this, struct _GUID *a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 *v11; // rax
  _DWORD *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v17; // [rsp+40h] [rbp-29h] BYREF
  struct _GUID *v18; // [rsp+48h] [rbp-21h] BYREF
  const WCHAR *v19; // [rsp+50h] [rbp-19h] BYREF
  struct _GUID v20; // [rsp+60h] [rbp-9h] BYREF
  char *v21; // [rsp+70h] [rbp+7h]
  __int128 v22; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v23; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v22 = *(_OWORD *)((char *)this + 248);
  v23 = v22;
  EtwEventActivityIdControl(4LL, &v23);
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v21 = (char *)this + 192;
  if ( !*((_QWORD *)this + 21) )
  {
    v8 = -2004287487;
    v9 = 2290679809LL;
    v10 = 2335LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v9);
    if ( v6 )
      LeaveCriticalSection(v6);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v22);
    return v8;
  }
  if ( !*((_DWORD *)this + 40) )
  {
    v8 = -2004287487;
    v9 = 2290679809LL;
    v10 = 2336LL;
    goto LABEL_10;
  }
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v7,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  v12 = (_DWORD *)v11[1];
  if ( *v12 > 4u && tlgKeywordOn(v11[1], 512LL) )
  {
    v17 = a3;
    v18 = a2;
    v19 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL) + 64LL))(*((_QWORD *)this + 18) + 8LL);
    *(_QWORD *)&v20.Data1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 21) + 8LL) + 80LL))(*((_QWORD *)this + 21) + 8LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      (int)v12,
      (int)&unk_180194164,
      v13,
      v14,
      (__int64)&v20,
      &v19,
      (__int64 *)&v18,
      (__int64)&v17);
  }
  v20 = *a2;
  v15 = CAudioStream::SetAudioEffect(*((CAudioStream **)this + 21), &v20, a3);
  v8 = v15;
  if ( v15 < 0 )
  {
    v9 = (unsigned int)v15;
    v10 = 2347LL;
    goto LABEL_10;
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  EtwEventActivityIdControl(4LL, &v23);
  return 0LL;
}
