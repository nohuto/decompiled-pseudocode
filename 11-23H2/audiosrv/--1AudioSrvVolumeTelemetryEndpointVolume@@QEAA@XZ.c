/*
 * XREFs of ??1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ @ 0x1800F1278
 * Callers:
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x180126F28 (--1CVolumeControlBase@@MEAA@XZ.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x1800190CC (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 */

void __fastcall AudioSrvVolumeTelemetryEndpointVolume::~AudioSrvVolumeTelemetryEndpointVolume(
        AudioSrvVolumeTelemetryEndpointVolume *this)
{
  *(_QWORD *)this = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
