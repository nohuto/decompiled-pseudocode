/*
 * XREFs of ??1CVolumeHardware@@EEAA@XZ @ 0x180126FD0
 * Callers:
 *     ??_ECVolumeHardware@@EEAAPEAXI@Z @ 0x1801270E0 (--_ECVolumeHardware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CVolumeHardware::~CVolumeHardware(CVolumeHardware *this)
{
  *(_QWORD *)this = &CVolumeHardware::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 32);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 31);
  CVolumeControlBase::~CVolumeControlBase(this);
}
