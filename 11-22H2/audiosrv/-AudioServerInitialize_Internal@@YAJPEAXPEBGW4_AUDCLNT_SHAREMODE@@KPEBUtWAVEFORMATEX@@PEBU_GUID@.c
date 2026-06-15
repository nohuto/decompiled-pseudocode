/*
 * XREFs of ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18003D84C
 * Callers:
 *     AudioServerInitialize @ 0x18003D7F0 (AudioServerInitialize.c)
 *     asm_AudioServerInitializeStream @ 0x1800D3900 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCVADServer@@V1@PEAUIAudioProcess@@AEAPEBGAEAW4_AUDCLNT_SHAREMODE@@AEAKAEAPEBUtWAVEFORMATEX@@AEAPEBU_GUID@@AEAPEAUVadServerSettings@@AEAPEAPEAGAEAPEAUIProcessSubmixProxy@@@Details@WRL@Microsoft@@YAJPEAPEAVCVADServer@@$$QEAPEAUIAudioProcess@@AEAPEBGAEAW4_AUDCLNT_SHAREMODE@@AEAKAEAPEBUtWAVEFORMATEX@@AEAPEBU_GUID@@AEAPEAUVadServerSettings@@AEAPEAPEAGAEAPEAUIProcessSubmixProxy@@@Z @ 0x18003DAC0 (--$MakeAndInitialize@VCVADServer@@V1@PEAUIAudioProcess@@AEAPEBGAEAW4_AUDCLNT_SHAREMODE@@AEAKAEAP.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18003DD98 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18004304C (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180043210 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180047DB8 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___::_lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___ @ 0x1800CE3E8 (wil--details--lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___--_lambda_call__lambda_b85f.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15F0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVADServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18011C628 (--1-$com_ptr_t@VCVADServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall AudioServerInitialize_Internal(
        void *a1,
        const unsigned __int16 *a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        const struct tWAVEFORMATEX *a5,
        const struct _GUID *a6,
        struct VadServerSettings *a7,
        unsigned __int16 **a8,
        struct IProcessSubmixProxy *a9,
        void **a10)
{
  __int64 pftDueTime; // rbx
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 *v15; // rax
  LPCRITICAL_SECTION v16; // rbx
  CAudioDGProcess *v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 (__fastcall *v20)(struct IAudioPolicyManager *, void *, __int64 *); // rbx
  int v21; // eax
  DWORD v22; // eax
  int v23; // eax
  __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // ebx
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[8]; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  enum _AUDCLNT_SHAREMODE v31; // [rsp+68h] [rbp-98h] BYREF
  void *v32; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  struct IProcessSubmixProxy *v34; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 **v35; // [rsp+88h] [rbp-78h] BYREF
  struct VadServerSettings *v36; // [rsp+90h] [rbp-70h] BYREF
  const struct _GUID *v37; // [rsp+98h] [rbp-68h] BYREF
  const struct tWAVEFORMATEX *v38; // [rsp+A0h] [rbp-60h] BYREF
  const unsigned __int16 *v39; // [rsp+A8h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v41; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v42; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v39 = a2;
  v31 = a3;
  v30 = a4;
  v38 = a5;
  v37 = a6;
  v36 = a7;
  v35 = a8;
  v34 = a9;
  v41 = *(_OWORD *)a7;
  v42 = *(_OWORD *)a7;
  EtwEventActivityIdControl(4LL, &v42);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v13 = g_AudioSrvWatchDogTimerInMs;
  v15 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v14,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v15[1],
    v13,
    (struct _TP_TIMER *)L"AudioServerInitialize_Internal",
    pftDueTime);
  *a10 = 0LL;
  v16 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v33 = (__int64)v16;
  if ( ++LODWORD(v16[1].DebugInfo) == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer((CAudioDGProcess *)v16);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v16);
  }
  LeaveCriticalSection(v16);
  v29[1] = 1;
  v18 = CAudioDGProcess::CheckADGStatus(v17);
  v19 = v18;
  if ( v18 >= 0 )
  {
    v28 = 0LL;
    v20 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL);
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v28);
    v21 = v20(g_PolicyManager, a1, &v28);
    v19 = v21;
    if ( v21 < 0 )
    {
      v25 = (unsigned int)v21;
      v26 = 2646LL;
    }
    else
    {
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 40LL))(v28);
      if ( (unsigned int)IsProcessAllowed(v22, a2) )
      {
        if ( !a9
          || (v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 48LL))(v28),
              (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a9 + 216LL))(a9) == v27) )
        {
          v33 = v28;
          v32 = 0LL;
          v23 = Microsoft::WRL::Details::MakeAndInitialize<CVADServer,CVADServer,IAudioProcess *,unsigned short const * &,enum _AUDCLNT_SHAREMODE &,unsigned long &,tWAVEFORMATEX const * &,_GUID const * &,VadServerSettings * &,unsigned short * * &,IProcessSubmixProxy * &>(
                  (unsigned int)&v32,
                  (unsigned int)&v33,
                  (unsigned int)&v39,
                  (unsigned int)&v31,
                  (__int64)&v30,
                  (__int64)&v38,
                  (__int64)&v37,
                  (__int64)&v36,
                  (__int64)&v35,
                  (__int64)&v34);
          v19 = v23;
          if ( v23 >= 0 )
          {
            *a10 = v32;
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v28);
            CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
            EtwEventActivityIdControl(4LL, &v42);
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA5E,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v23);
          wil::com_ptr_t<CVADServer,wil::err_returncode_policy>::~com_ptr_t<CVADServer,wil::err_returncode_policy>(&v32);
          goto LABEL_16;
        }
        v19 = -2147024891;
        v25 = 2147942405LL;
        v26 = 2650LL;
      }
      else
      {
        v19 = -2147024891;
        v25 = 2147942405LL;
        v26 = 2648LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v25);
LABEL_16:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v28);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA52,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v18);
LABEL_17:
  wil::details::lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___::_lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___(v29);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v41);
  return v19;
}
