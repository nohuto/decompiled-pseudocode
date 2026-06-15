/*
 * XREFs of ??1?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x140083284
 * Callers:
 *     ??_E?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140083880 (--_E-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x1400834C8 (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::~CComObject<CCrossProcessClientInputEndpoint>(
        CCrossProcessBaseClientEndpoint *this)
{
  *((_DWORD *)this + 124) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 51) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 52) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 53) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioClock2'};
  *((_QWORD *)this + 57) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
  *((_QWORD *)this + 60) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `CCrossProcessControl'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint(this);
  if ( *((_BYTE *)this + 544) )
  {
    *((_BYTE *)this + 544) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 504));
  }
}
