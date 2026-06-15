/*
 * XREFs of AudioServerIsOffloadCapable @ 0x1800F34B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z @ 0x180002634 (-AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180046328 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerIsOffloadCapable(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v9; // edi
  __int64 *v10; // rax
  __int64 (__fastcall *v11)(struct IAudioPolicyManager *, __int64, struct IAudioProcess **); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // r9d
  CEndpointCharacteristics *v19; // [rsp+30h] [rbp-50h] BYREF
  struct IAudioProcess *v20; // [rsp+38h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v10 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          a1,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v10[1],
    v9,
    (struct _TP_TIMER *)L"AudioServerIsOffloadCapable",
    pftDueTime);
  v20 = 0LL;
  v11 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                 + 32LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v20);
  v12 = v11(g_PolicyManager, a1, &v20);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v19 = 0LL;
    v14 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                 + 24LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            0LL,
            0LL,
            &v19);
    v13 = v14;
    if ( v14 >= 0 )
    {
      if ( AllowUseofOffloadResources(v19, v20, a3) )
        *a4 = CEndpointCharacteristics::HasHardwareAudioEngine(v19);
      else
        *a4 = 0;
      v13 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x110C,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v14);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1106,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v12);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v15, v16, v17);
  return v13;
}
