/*
 * XREFs of ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x1800190CC
 * Callers:
 *     ??1AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ @ 0x180019104 (--1AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x1800823C2 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ??1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ @ 0x1800F12C8 (--1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall AudioSrvVolumeTelemetry::LogTelemetry(AudioSrvVolumeTelemetry *this)
{
  char v1; // di
  __int64 v4; // rsi

  v1 = 0;
  if ( *((_QWORD *)this + 1) )
  {
    v4 = *((_QWORD *)this + 1);
    if ( GetTickCount64() - v4 > 0x3E8 )
    {
      (**(void (__fastcall ***)(AudioSrvVolumeTelemetry *, __int64, _QWORD))this)(
        this,
        v4 - *((_QWORD *)this + 2),
        *((unsigned int *)this + 6));
      return 1;
    }
  }
  return v1;
}
