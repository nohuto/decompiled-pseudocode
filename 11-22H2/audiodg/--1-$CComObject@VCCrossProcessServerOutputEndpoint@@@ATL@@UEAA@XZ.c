/*
 * XREFs of ??1?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x1400901C8
 * Callers:
 *     ??_E?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140090700 (--_E-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140004118 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::~CComObject<CCrossProcessServerOutputEndpoint>(
        CCrossProcessBaseServerEndpoint *this)
{
  *((_DWORD *)this + 124) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 51) = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
  *((_QWORD *)this + 58) = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `CCrossProcessOutputEndpoint'};
  *((_QWORD *)this + 61) = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `ICPAudioHistoryWriter'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(this);
  if ( *((_BYTE *)this + 544) )
  {
    *((_BYTE *)this + 544) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 504));
  }
}
