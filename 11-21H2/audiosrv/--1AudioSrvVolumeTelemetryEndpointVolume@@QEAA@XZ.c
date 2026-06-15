/*
 * XREFs of ??1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ @ 0x1800C10EC
 * Callers:
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x1800CB9CC (--1CVolumeControlBase@@MEAA@XZ.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x1800C12F4 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 */

void __fastcall AudioSrvVolumeTelemetryEndpointVolume::~AudioSrvVolumeTelemetryEndpointVolume(
        AudioSrvVolumeTelemetryEndpointVolume *this)
{
  *(_QWORD *)this = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
