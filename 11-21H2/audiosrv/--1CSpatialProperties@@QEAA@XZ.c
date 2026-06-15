/*
 * XREFs of ??1CSpatialProperties@@QEAA@XZ @ 0x18013D53C
 * Callers:
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18014433C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x18013F82C (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 */

void __fastcall CSpatialProperties::~CSpatialProperties(CSpatialProperties *this)
{
  if ( *((_BYTE *)this + 97) )
    CSpatialAudioTechnologies::FreeTopologyList(this);
  *((_QWORD *)this + 5) = 0LL;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 10);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
