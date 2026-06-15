/*
 * XREFs of ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x180046600
 * Callers:
 *     ??0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x180046548 (--0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x1800CB8A8 (--0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
 * Callees:
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x1800466CC (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
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
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_972200849a753c8240eefd9f39169899_Traceguids, this);
  }
  return this;
}
