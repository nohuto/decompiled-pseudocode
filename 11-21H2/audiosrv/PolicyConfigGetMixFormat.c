/*
 * XREFs of PolicyConfigGetMixFormat @ 0x1800EB9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     MIDL_user_allocate @ 0x18001AC90 (MIDL_user_allocate.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8D0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetMixFormat(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  __int64 *v7; // rax
  int v8; // ebx
  int MixFormat; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  unsigned __int16 *v13; // rdi
  void *v14; // rax
  struct _GUID v16; // [rsp+30h] [rbp-68h] BYREF
  struct _TP_TIMER *pv[11]; // [rsp+40h] [rbp-58h] BYREF
  CEndpointCharacteristics *v18; // [rsp+B0h] [rbp+18h] BYREF
  void *Src; // [rsp+B8h] [rbp+20h] BYREF

  Src = 0LL;
  v18 = 0LL;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v6,
    (struct _TP_TIMER *)L"PolicyConfigGetMixFormat",
    pftDueTime);
  *a3 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                              + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v18);
  if ( v8 < 0 )
    goto LABEL_9;
  v16 = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                (struct _RTL_CRITICAL_SECTION *)v18,
                eHostProcessConnector,
                &v16,
                (struct tWAVEFORMATEX **)&Src);
  v13 = (unsigned __int16 *)Src;
  v8 = MixFormat;
  if ( MixFormat >= 0 )
  {
    v14 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a3 = v14;
    if ( v14 )
      memcpy_0(v14, v13, v13[8] + 18LL);
    else
      v8 = -2147024882;
  }
  if ( v13 )
    CoTaskMemFree(v13);
  if ( v8 < 0 )
LABEL_9:
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetMixFormat", 2046, v8);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v10, v11, v12);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
  return (unsigned int)v8;
}
