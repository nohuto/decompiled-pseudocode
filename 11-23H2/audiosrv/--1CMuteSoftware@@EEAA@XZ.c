/*
 * XREFs of ??1CMuteSoftware@@EEAA@XZ @ 0x1801109F0
 * Callers:
 *     ??_ECMuteSoftware@@EEAAPEAXI@Z @ 0x180110AE0 (--_ECMuteSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x180018FE8 (--1_RecurringTask@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CMuteSoftware::~CMuteSoftware(CMuteSoftware *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &CMuteSoftware::`vftable';
  v2 = (void *)*((_QWORD *)this + 13);
  if ( v2 )
  {
    _RecurringTask::~_RecurringTask(*((PTP_TIMER **)this + 13));
    operator delete(v2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 6);
  CMuteControlBase::~CMuteControlBase(this);
}
