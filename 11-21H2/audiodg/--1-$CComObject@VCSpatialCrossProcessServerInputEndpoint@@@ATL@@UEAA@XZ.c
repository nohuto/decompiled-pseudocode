/*
 * XREFs of ??1?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14008D2A4
 * Callers:
 *     ??_G?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14008D790 (--_G-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14008D4CC (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::~CComObject<CSpatialCrossProcessServerInputEndpoint>(
        CSpatialCrossProcessServerEndpoint *this)
{
  *((_DWORD *)this + 360) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 165) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 166) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 179) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint(this);
  if ( *((_BYTE *)this + 1488) )
  {
    *((_BYTE *)this + 1488) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 1448));
  }
}
