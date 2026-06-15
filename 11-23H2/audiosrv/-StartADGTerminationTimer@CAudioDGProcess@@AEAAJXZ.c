/*
 * XREFs of ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x1800432B0
 * Callers:
 *     AUDIOSERVER_rundown @ 0x180006280 (AUDIOSERVER_rundown.c)
 *     AudioServerDisconnect @ 0x1800126E0 (AudioServerDisconnect.c)
 *     ??1CAPOWrapperClient@@UEAA@XZ @ 0x18002AF58 (--1CAPOWrapperClient@@UEAA@XZ.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18004B210 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     wil::details::lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___::_lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___ @ 0x1800CE398 (wil--details--lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___--_lambda_call__lambda_b85f.c)
 *     HAUDIOSRVDIAGNOSTICS_rundown @ 0x1800CF1A0 (HAUDIOSRVDIAGNOSTICS_rundown.c)
 *     AudioServerReleaseAudioStreamHandle @ 0x1801249F0 (AudioServerReleaseAudioStreamHandle.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDGProcess::StartADGTerminationTimer(CAudioDGProcess *this)
{
  CAudioThreadPool *v2; // rdi
  LSTATUS ValueW; // eax
  unsigned int v4; // ecx
  __int64 v5; // rdx
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = ThreadPool;
  if ( !*((_QWORD *)this + 17) )
    *((_QWORD *)this + 17) = (*(__int64 (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CAudioDGProcess *))(*(_QWORD *)ThreadPool + 8LL))(
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
    (*(void (__fastcall **)(CAudioThreadPool *, __int64, __int64 *, _QWORD, _DWORD))(*(_QWORD *)v2 + 24LL))(
      v2,
      v5,
      &v9,
      0LL,
      0);
  }
  return 0LL;
}
