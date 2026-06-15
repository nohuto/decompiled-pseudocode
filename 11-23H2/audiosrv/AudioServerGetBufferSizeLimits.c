/*
 * XREFs of AudioServerGetBufferSizeLimits @ 0x180120D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C (--$copy_to@UIMMDevice@@@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x1800834D0 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall AudioServerGetBufferSizeLimits(
        __int64 a1,
        __int64 a2,
        const struct tWAVEFORMATEX *a3,
        int a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 pftDueTime; // rbx
  unsigned int v10; // edi
  __int64 *v11; // rax
  int v12; // ebx
  int KSFormatFromWFXFormat; // eax
  void *v14; // rdi
  __int64 v16; // [rsp+38h] [rbp-29h] BYREF
  __int64 v17; // [rsp+40h] [rbp-21h] BYREF
  __int64 v18; // [rsp+48h] [rbp-19h] BYREF
  __int64 v19; // [rsp+50h] [rbp-11h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-9h] BYREF
  struct _TP_TIMER *v21[7]; // [rsp+60h] [rbp-1h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  pv = 0LL;
  v16 = 0LL;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          a1,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v21,
    (struct _TP_TIMER *)v11[1],
    v10,
    (struct _TP_TIMER *)L"AudioServerGetBufferSizeLimits",
    pftDueTime);
  v12 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                             + 24LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL,
          &v16);
  if ( v12 < 0 )
    goto LABEL_11;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>((__int64 *)(v16 + 40), &v19);
  v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v19 + 24LL))(
          v19,
          &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
          1LL);
  if ( v12 < 0 )
    goto LABEL_11;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 64LL))(v18, &v17);
  if ( v12 < 0 )
    goto LABEL_11;
  KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(a3, (struct KSDATAFORMAT_WAVEFORMATEX **)&pv);
  v14 = pv;
  v12 = KSFormatFromWFXFormat;
  if ( KSFormatFromWFXFormat >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *, __int64 *))(*(_QWORD *)v17 + 80LL))(v17, pv, a5, a6);
    if ( v12 >= 0 )
    {
      if ( a4 )
      {
        *a5 /= 2LL;
        *a6 /= 2LL;
      }
    }
  }
  if ( v14 )
    CoTaskMemFree(v14);
  if ( v12 < 0 )
LABEL_11:
    AudSrvTraceLoggingErrorHelper("AudioServerGetBufferSizeLimits", 4453, v12);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v21);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v19);
  return (unsigned int)v12;
}
