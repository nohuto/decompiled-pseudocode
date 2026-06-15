/*
 * XREFs of ??1?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x1400900FC
 * Callers:
 *     ??_G?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400906A0 (--_G-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14009028C (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint>::~CComObject<CCrossProcessClientOutputEndpoint>(
        CCrossProcessBaseClientEndpoint *this)
{
  *((_DWORD *)this + 126) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 51) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 52) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 53) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock2'};
  *((_QWORD *)this + 57) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `CCrossProcessOutputEndpoint'};
  *((_QWORD *)this + 60) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `CCrossProcessControl'};
  *((_QWORD *)this + 62) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpointInternal'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint(this);
  if ( *((_BYTE *)this + 552) )
  {
    *((_BYTE *)this + 552) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 512));
  }
}
