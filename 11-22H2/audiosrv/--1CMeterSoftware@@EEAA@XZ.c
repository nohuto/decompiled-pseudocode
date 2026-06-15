/*
 * XREFs of ??1CMeterSoftware@@EEAA@XZ @ 0x18012A620
 * Callers:
 *     ??_GCMeterSoftware@@EEAAPEAXI@Z @ 0x18012A670 (--_GCMeterSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CMeterSoftware::~CMeterSoftware(struct _RTL_CRITICAL_SECTION *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMeterSoftware::`vftable';
  DeleteCriticalSection(this + 1);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&this->SpinCount);
  CMeterControlBase::~CMeterControlBase((CMeterControlBase *)this);
}
