/*
 * XREFs of asm_AudioServerInitializeStream @ 0x1800D38B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18003D84C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800D034C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15A0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 */

__int64 __fastcall asm_AudioServerInitializeStream(
        void *a1,
        struct IProcessSubmixProxy **a2,
        int a3,
        const struct tWAVEFORMATEX *a4,
        struct _GUID *a5,
        struct VadServerSettings *a6,
        void **a7)
{
  __int64 pftDueTime; // rbx
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rax
  const WCHAR *v16; // rdi
  __int64 v17; // rcx
  __int64 *v18; // rax
  _DWORD *v19; // rbx
  struct IProcessSubmixProxy *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  unsigned int v24; // ebx
  int v26; // [rsp+50h] [rbp-91h] BYREF
  unsigned __int16 *v27; // [rsp+58h] [rbp-89h] BYREF
  const WCHAR *v28; // [rsp+60h] [rbp-81h] BYREF
  void **v29; // [rsp+68h] [rbp-79h]
  struct _GUID *v30; // [rsp+70h] [rbp-71h]
  struct _TP_TIMER *pv[7]; // [rsp+78h] [rbp-69h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-31h] BYREF
  __int128 v33; // [rsp+C0h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+47h]

  v30 = a5;
  v29 = a7;
  v32 = *(_OWORD *)a6;
  v33 = v32;
  EtwEventActivityIdControl(4LL, &v33);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v12 = g_AudioSrvWatchDogTimerInMs;
  v14 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v13,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v14[1],
    v12,
    (struct _TP_TIMER *)L"asm_AudioServerInitializeStream",
    pftDueTime);
  v15 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)*a2 + 200LL))(*a2);
  v27 = 0LL;
  v16 = (const WCHAR *)v15;
  v18 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v17,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  v19 = (_DWORD *)v18[1];
  if ( *v19 > 4u && tlgKeywordOn(v18[1], 512LL) )
  {
    v20 = *a2;
    v28 = v16;
    v26 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v20 + 144LL))(v20);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)v19,
      byte_18018F5D3,
      v21,
      v22,
      (__int64)&v26,
      &v28);
  }
  v23 = AudioServerInitialize_Internal(a1, v16, AUDCLNT_SHAREMODE_SHARED, a3, a4, v30, a6, &v27, *a2, v29);
  v24 = v23;
  if ( v23 >= 0 )
  {
    operator delete(v27);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    EtwEventActivityIdControl(4LL, &v33);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v23);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v32);
    return v24;
  }
}
