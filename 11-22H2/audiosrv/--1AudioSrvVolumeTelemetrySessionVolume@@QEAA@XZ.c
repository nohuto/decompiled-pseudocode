/*
 * XREFs of ??1AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ @ 0x180019104
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001C1C4 (--1CAudioSession@@MEAA@XZ.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x1800190CC (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 */

void __fastcall AudioSrvVolumeTelemetrySessionVolume::~AudioSrvVolumeTelemetrySessionVolume(
        AudioSrvVolumeTelemetrySessionVolume *this)
{
  *(_QWORD *)this = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
