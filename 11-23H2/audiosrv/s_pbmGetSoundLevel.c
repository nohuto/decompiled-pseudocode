/*
 * XREFs of s_pbmGetSoundLevel @ 0x180112CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmGetSoundLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  int v11; // esi
  __int64 *v12; // rax
  unsigned int SoundLevel; // ebx
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-50h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v11 = 0;
  v12 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          a1,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v12[1],
    v7,
    (struct _TP_TIMER *)L"s_pbmGetSoundLevel",
    pftDueTime);
  if ( (unsigned int)IsPbmSoundLevelSupported() )
  {
    SoundLevel = PbmGetSoundLevel(a1, a2, a3, a4, a5);
  }
  else
  {
    if ( g_PolicyManager )
    {
      v15 = 0LL;
      v11 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                        + 32LL))(
              g_PolicyManager,
              a1,
              &v15);
      if ( v11 >= 0 )
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v15 + 344LL))(
                v15,
                a2,
                a3,
                a4,
                a5);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
    }
    SoundLevel = v11;
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return SoundLevel;
}
