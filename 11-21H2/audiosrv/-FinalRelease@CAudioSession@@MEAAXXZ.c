/*
 * XREFs of ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x1800D7640
 * Callers:
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800D618C (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x1800C9FF0 (--1_RecurringTask@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015BDB0 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall CAudioSession::FinalRelease(CAudioSession *this)
{
  PTP_TIMER *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi

  if ( *((_BYTE *)this + 904) )
    MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 0LL, 0LL, 1LL);
  v2 = (PTP_TIMER *)*((_QWORD *)this + 67);
  *((_QWORD *)this + 67) = 0LL;
  if ( v2 )
  {
    _RecurringTask::~_RecurringTask(v2);
    operator delete(v2);
  }
  v3 = (_QWORD *)*((_QWORD *)this + 88);
  v4 = (_QWORD *)*((_QWORD *)this + 89);
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v3 + 32LL))(*v3, (char *)this + 8);
    ++v3;
  }
}
