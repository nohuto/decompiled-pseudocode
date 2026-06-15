/*
 * XREFs of ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x1800C12F4
 * Callers:
 *     ??1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ @ 0x1800C10EC (--1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall AudioSrvVolumeTelemetry::LogTelemetry(AudioSrvVolumeTelemetry *this)
{
  char v1; // di
  __int64 v3; // rsi

  v1 = 0;
  if ( *((_QWORD *)this + 1) )
  {
    v3 = *((_QWORD *)this + 1);
    if ( GetTickCount64() - v3 > 0x3E8 )
    {
      (**(void (__fastcall ***)(AudioSrvVolumeTelemetry *, __int64, _QWORD))this)(
        this,
        v3 - *((_QWORD *)this + 2),
        *((unsigned int *)this + 6));
      return 1;
    }
  }
  return v1;
}
