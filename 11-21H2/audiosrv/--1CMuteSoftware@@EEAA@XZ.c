/*
 * XREFs of ??1CMuteSoftware@@EEAA@XZ @ 0x1800C9F88
 * Callers:
 *     ??_ECMuteSoftware@@EEAAPEAXI@Z @ 0x1800CA0E0 (--_ECMuteSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x1800C9FF0 (--1_RecurringTask@@QEAA@XZ.c)
 */

void __fastcall CMuteSoftware::~CMuteSoftware(CMuteSoftware *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &CMuteSoftware::`vftable';
  v2 = (void *)*((_QWORD *)this + 13);
  if ( v2 )
  {
    _RecurringTask::~_RecurringTask(*((_RecurringTask **)this + 13));
    operator delete(v2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 6);
  CMuteControlBase::~CMuteControlBase((void **)this);
}
