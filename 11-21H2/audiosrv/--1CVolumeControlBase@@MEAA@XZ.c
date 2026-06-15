/*
 * XREFs of ??1CVolumeControlBase@@MEAA@XZ @ 0x1800CB9CC
 * Callers:
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x1800CBA68 (--1CVolumeHardware@@EEAA@XZ.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x1800CBABC (--1CVolumeSoftware@@EEAA@XZ.c)
 *     ??_ECVolumeControlBase@@MEAAPEAXI@Z @ 0x1800CBB30 (--_ECVolumeControlBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ @ 0x1800C10EC (--1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     ??1?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800CB90C (--1-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@AT.c)
 */

void __fastcall CVolumeControlBase::~CVolumeControlBase(CVolumeControlBase *this)
{
  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_972200849a753c8240eefd9f39169899_Traceguids, this);
  }
  AudioSrvVolumeTelemetryEndpointVolume::~AudioSrvVolumeTelemetryEndpointVolume((CVolumeControlBase *)((char *)this + 136));
  ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>::~CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>((void **)this + 10);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)this + 8);
  CoTaskMemFree(*((LPVOID *)this + 7));
  *((_QWORD *)this + 7) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
}
