/*
 * XREFs of ??1CVolumeControlBase@@MEAA@XZ @ 0x180126F28
 * Callers:
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x180126FD0 (--1CVolumeHardware@@EEAA@XZ.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x180127024 (--1CVolumeSoftware@@EEAA@XZ.c)
 *     ??_ECVolumeControlBase@@MEAAPEAXI@Z @ 0x1801270A0 (--_ECVolumeControlBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 *     ??1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ @ 0x1800F1278 (--1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ.c)
 *     ??1?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800FE908 (--1-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@AT.c)
 */

void __fastcall CVolumeControlBase::~CVolumeControlBase(CVolumeControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids, this);
  }
  AudioSrvVolumeTelemetryEndpointVolume::~AudioSrvVolumeTelemetryEndpointVolume((CVolumeControlBase *)((char *)this + 136));
  ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>::~CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>((void **)this + 10);
  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
    CoTaskMemFree(v2);
  CoTaskMemFree(*((LPVOID *)this + 7));
  *((_QWORD *)this + 7) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
}
