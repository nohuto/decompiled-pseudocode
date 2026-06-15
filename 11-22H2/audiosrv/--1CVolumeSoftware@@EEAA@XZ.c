/*
 * XREFs of ??1CVolumeSoftware@@EEAA@XZ @ 0x180127074
 * Callers:
 *     ??_ECVolumeSoftware@@EEAAPEAXI@Z @ 0x180127170 (--_ECVolumeSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x180018FE8 (--1_RecurringTask@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CVolumeSoftware::~CVolumeSoftware(CVolumeSoftware *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &CVolumeSoftware::`vftable';
  v2 = (void *)*((_QWORD *)this + 38);
  if ( v2 )
  {
    _RecurringTask::~_RecurringTask(*((PTP_TIMER **)this + 38));
    operator delete(v2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 31);
  CVolumeControlBase::~CVolumeControlBase(this);
}
