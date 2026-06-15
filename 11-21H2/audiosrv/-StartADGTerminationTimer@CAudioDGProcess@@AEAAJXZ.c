/*
 * XREFs of ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18003918C
 * Callers:
 *     ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x18001D850 (--_GCAPOWrapperClient@@UEAAPEAXI@Z.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180024820 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBG@Z @ 0x180050A44 (-s_adPublishApoTelemetry@@YAJPEBG@Z.c)
 *     AUDIOSERVER_rundown @ 0x1800F0DE0 (AUDIOSERVER_rundown.c)
 *     AudioServerReleaseAudioHistoryProducerHandle @ 0x1800F3930 (AudioServerReleaseAudioHistoryProducerHandle.c)
 *     wil::details::lambda_call__lambda_24f8363e66238397a034505ba40e8655___::_lambda_call__lambda_24f8363e66238397a034505ba40e8655___ @ 0x180117ACC (wil--details--lambda_call__lambda_24f8363e66238397a034505ba40e8655___--_lambda_call__lambda_24f8.c)
 *     HAUDIOSRVDIAGNOSTICS_rundown @ 0x1801185E0 (HAUDIOSRVDIAGNOSTICS_rundown.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x180118630 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDGProcess::StartADGTerminationTimer(CAudioDGProcess *this)
{
  struct CAudioThreadPool *v2; // rdi
  LSTATUS ValueW; // eax
  unsigned int v4; // ecx
  __int64 v5; // rdx
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = ThreadPool;
  if ( !*((_QWORD *)this + 17) )
    *((_QWORD *)this + 17) = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CAudioDGProcess *))(*(_QWORD *)ThreadPool + 8LL))(
                               ThreadPool,
                               CAudioDGProcess::OnADGInactivityTimerFiredHandler,
                               this);
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"AudioDGInactiveTimeout",
             0x18u,
             0LL,
             &pvData,
             &pcbData);
  v4 = pvData;
  if ( ValueW )
    v4 = 300;
  v5 = *((_QWORD *)this + 17);
  pvData = v4;
  if ( v5 )
  {
    v9 = -10000000LL * v4;
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, __int64 *, _QWORD, _DWORD))(*(_QWORD *)v2 + 24LL))(
      v2,
      v5,
      &v9,
      0LL,
      0);
  }
  return 0LL;
}
