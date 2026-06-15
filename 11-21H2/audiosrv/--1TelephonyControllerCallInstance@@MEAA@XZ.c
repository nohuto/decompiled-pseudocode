/*
 * XREFs of ??1TelephonyControllerCallInstance@@MEAA@XZ @ 0x180162068
 * Callers:
 *     ??_GTelephonyControllerCallInstance@@MEAAPEAXI@Z @ 0x1801620CC (--_GTelephonyControllerCallInstance@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ReleaseSaDeviceResource@@YAJPEA_K@Z @ 0x180065CB4 (-ReleaseSaDeviceResource@@YAJPEA_K@Z.c)
 *     ?ResetState@TelephonyControllerCallInstance@@AEAAJXZ @ 0x18016252C (-ResetState@TelephonyControllerCallInstance@@AEAAJXZ.c)
 */

void __fastcall TelephonyControllerCallInstance::~TelephonyControllerCallInstance(
        TelephonyControllerCallInstance *this)
{
  *(_QWORD *)this = &TelephonyControllerCallInstance::`vftable'{for `ITelephonyControllerCallInstance'};
  *((_QWORD *)this + 1) = &TelephonyControllerCallInstance::`vftable'{for `CUnknown'};
  TelephonyControllerCallInstance::ResetState(this);
  if ( *((_QWORD *)this + 3) )
  {
    ReleaseSaDeviceResource((unsigned __int64 *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 4);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
