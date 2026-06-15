/*
 * XREFs of ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180018F50
 * Callers:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x180018E8C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800DEC4C (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 * Callees:
 *     ??1_RecurringTask@@QEAA@XZ @ 0x180018FE8 (--1_RecurringTask@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x1801631B0 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall CAudioSession::FinalRelease(CAudioSession *this)
{
  _RecurringTask *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi

  if ( *((_BYTE *)this + 904) )
    MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 0LL, 0LL, 1LL);
  v2 = (_RecurringTask *)*((_QWORD *)this + 67);
  *((_QWORD *)this + 67) = 0LL;
  if ( v2 )
  {
    _RecurringTask::~_RecurringTask(v2);
    operator delete(v2, 0x20uLL);
  }
  v3 = (_QWORD *)*((_QWORD *)this + 88);
  v4 = (_QWORD *)*((_QWORD *)this + 89);
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v3 + 32LL))(*v3, (char *)this + 8);
    ++v3;
  }
}
