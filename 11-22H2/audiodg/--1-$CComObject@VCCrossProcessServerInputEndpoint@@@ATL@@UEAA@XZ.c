/*
 * XREFs of ??1?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14000430C
 * Callers:
 *     ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140002B30 (--_G-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140004118 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::~CComObject<CCrossProcessServerInputEndpoint>(
        CCrossProcessBaseServerEndpoint *this)
{
  *((_DWORD *)this + 122) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 51) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
  *((_QWORD *)this + 58) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(this);
  if ( *((_BYTE *)this + 536) )
  {
    *((_BYTE *)this + 536) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  }
}
