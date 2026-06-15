/*
 * XREFs of ?GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z @ 0x18011D558
 * Callers:
 *     AudioServerGetAudioEffectsChangedWnfStateName @ 0x180120920 (AudioServerGetAudioEffectsChangedWnfStateName.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15A0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ @ 0x1800EDE70 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18011BD08 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVADServer::GetAudioEffectsChangedWnfStateName(CVADServer *this, unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 *v8; // rax
  _DWORD *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  int v13; // eax
  const WCHAR *v15; // [rsp+30h] [rbp-58h] BYREF
  int v16[2]; // [rsp+38h] [rbp-50h] BYREF
  char *v17; // [rsp+40h] [rbp-48h]
  __int128 v18; // [rsp+48h] [rbp-40h] BYREF
  __int128 v19; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v18 = *(_OWORD *)((char *)this + 248);
  v19 = v18;
  EtwEventActivityIdControl(4LL, &v19);
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v17 = (char *)this + 192;
  if ( !*((_QWORD *)this + 21) )
  {
    v6 = -2004287487;
    v7 = 2357LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v6);
    if ( v4 )
      LeaveCriticalSection(v4);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v18);
    return v6;
  }
  if ( !*((_DWORD *)this + 40) )
  {
    v6 = -2004287487;
    v7 = 2358LL;
    goto LABEL_11;
  }
  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v5,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v8[1];
  if ( *v9 > 4u && tlgKeywordOn(v8[1], 512LL) )
  {
    v15 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL) + 64LL))(*((_QWORD *)this + 18) + 8LL);
    *(_QWORD *)v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 21) + 8LL) + 80LL))(*((_QWORD *)this + 21) + 8LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      (__int64)v9,
      byte_180194114,
      v10,
      v11,
      (__int64)v16,
      &v15);
  }
  v12 = *((_QWORD *)this + 21);
  if ( !*(_BYTE *)(v12 + 356) )
  {
    v13 = CAudioStream::SetUpAudioEffectsChangedWnfState(*((CAudioStream **)this + 21));
    v6 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6CB,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v13);
      v7 = 2367LL;
      goto LABEL_11;
    }
  }
  *a2 = *(_QWORD *)(v12 + 348);
  if ( v4 )
    LeaveCriticalSection(v4);
  EtwEventActivityIdControl(4LL, &v19);
  return 0LL;
}
