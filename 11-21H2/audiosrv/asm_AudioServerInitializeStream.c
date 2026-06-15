/*
 * XREFs of asm_AudioServerInitializeStream @ 0x180108960
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180024820 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C9DCC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall asm_AudioServerInitializeStream(
        void *a1,
        struct IProcessSubmixProxy **a2,
        int a3,
        const struct tWAVEFORMATEX *a4,
        struct VadServerSettings *a5,
        void **a6)
{
  __int64 pftDueTime; // rbx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rax
  void *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx
  struct IProcessSubmixProxy *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r9d
  int v27; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int16 *v28; // [rsp+58h] [rbp-81h] BYREF
  void *v29; // [rsp+60h] [rbp-79h] BYREF
  void **v30; // [rsp+68h] [rbp-71h]
  struct _TP_TIMER *pv[7]; // [rsp+70h] [rbp-69h] BYREF
  struct _GUID v32; // [rsp+A8h] [rbp-31h] BYREF
  __int128 v33; // [rsp+B8h] [rbp-21h]
  __int128 v34; // [rsp+C8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+4Fh]

  v30 = a6;
  v33 = *(_OWORD *)a5;
  v34 = v33;
  EtwEventActivityIdControl(4LL, &v34);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  v13 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v12,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v13[1],
    v11,
    (struct _TP_TIMER *)L"asm_AudioServerInitializeStream",
    pftDueTime);
  v14 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)*a2 + 160LL))(*a2);
  v28 = 0LL;
  v15 = (void *)v14;
  v32 = GUID_00000000_0000_0000_0000_000000000000;
  v17 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v16,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v17 > 4u
    && (*(_DWORD *)(v17 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v17 + 24) & 0x200LL) == *(_QWORD *)(v17 + 24) )
  {
    v18 = *a2;
    v29 = v15;
    v27 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v18 + 104LL))(v18);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v17,
      byte_18018B27A,
      v19,
      v20,
      (__int64)&v27,
      &v29);
  }
  v21 = AudioServerInitialize_Internal(
          a1,
          (const unsigned __int16 *)v15,
          AUDCLNT_SHAREMODE_SHARED,
          a3,
          a4,
          &v32,
          a5,
          &v28,
          *a2,
          v30);
  v22 = v21;
  if ( v21 >= 0 )
  {
    operator delete(v28);
    v22 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16D,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v21);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v23, v24, v25);
  EtwEventActivityIdControl(4LL, &v34);
  return v22;
}
