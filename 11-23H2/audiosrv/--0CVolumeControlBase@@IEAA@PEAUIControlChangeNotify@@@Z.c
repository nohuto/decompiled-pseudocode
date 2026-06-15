/*
 * XREFs of ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x1800210E4
 * Callers:
 *     ??0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x18002102C (--0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x180126E80 (--0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
 * Callees:
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x1800211B0 (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 */

CVolumeControlBase *__fastcall CVolumeControlBase::CVolumeControlBase(
        CVolumeControlBase *this,
        struct IControlChangeNotify *a2)
{
  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 8), 0, 0);
  *((_DWORD *)this + 12) = 51;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 16) = a2;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  AudioSrvVolumeTelemetry::AudioSrvVolumeTelemetry((CVolumeControlBase *)((char *)this + 136));
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 17) = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 60) = 1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids, this);
  }
  return this;
}
