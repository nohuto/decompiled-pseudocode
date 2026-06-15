/*
 * XREFs of ??1EndpointDevice@@MEAA@XZ @ 0x18015DAA0
 * Callers:
 *     ??_GEndpointDevice@@MEAAPEAXI@Z @ 0x18015DBAC (--_GEndpointDevice@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall EndpointDevice::~EndpointDevice(EndpointDevice *this)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx

  *(_QWORD *)this = &EndpointDevice::`vftable'{for `IEndpointDevice'};
  *((_QWORD *)this + 1) = &EndpointDevice::`vftable'{for `CUnknown'};
  v2 = *((_QWORD *)this + 22);
  if ( v2 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 19), 2 * v2 + 2);
  *((_QWORD *)this + 21) = 0LL;
  *((_WORD *)this + 76) = 0;
  *((_QWORD *)this + 22) = 7LL;
  v3 = *((_QWORD *)this + 18);
  if ( v3 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 15), 2 * v3 + 2);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 7LL;
  *((_WORD *)this + 60) = 0;
  v4 = *((_QWORD *)this + 11);
  if ( v4 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 8), 2 * v4 + 2);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 7LL;
  *((_WORD *)this + 32) = 0;
  v5 = *((_QWORD *)this + 7);
  if ( v5 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 4), 2 * v5 + 2);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 7LL;
  *((_WORD *)this + 16) = 0;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
