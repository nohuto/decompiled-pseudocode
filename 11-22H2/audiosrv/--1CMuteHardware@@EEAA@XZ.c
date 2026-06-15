/*
 * XREFs of ??1CMuteHardware@@EEAA@XZ @ 0x180110A08
 * Callers:
 *     ??_GCMuteHardware@@EEAAPEAXI@Z @ 0x180110AF0 (--_GCMuteHardware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CMuteHardware::~CMuteHardware(CMuteHardware *this)
{
  *(_QWORD *)this = &CMuteHardware::`vftable';
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 6);
  CMuteControlBase::~CMuteControlBase(this);
}
