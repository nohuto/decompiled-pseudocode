/*
 * XREFs of ??1CSpatialProperties@@QEAA@XZ @ 0x1800056E0
 * Callers:
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18000557C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x180005768 (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 */

void __fastcall CSpatialProperties::~CSpatialProperties(CSpatialProperties *this)
{
  if ( *((_BYTE *)this + 97) )
    CSpatialAudioTechnologies::FreeTopologyList(this);
  *((_QWORD *)this + 5) = 0LL;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((char *)this + 88);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((char *)this + 80);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((char *)this + 72);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((char *)this + 64);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
