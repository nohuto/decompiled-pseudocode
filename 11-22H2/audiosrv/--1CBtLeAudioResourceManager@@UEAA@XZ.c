/*
 * XREFs of ??1CBtLeAudioResourceManager@@UEAA@XZ @ 0x1800F55E0
 * Callers:
 *     ??_GCBtLeAudioResourceManager@@UEAAPEAXI@Z @ 0x1800F57F0 (--_GCBtLeAudioResourceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1_RecurringTask@@QEAA@XZ @ 0x180018FE8 (--1_RecurringTask@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CBtLeAudioResourceManager::~CBtLeAudioResourceManager(CBtLeAudioResourceManager *this)
{
  void *v2; // rdi

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v2 = (void *)*((_QWORD *)this + 30);
  if ( v2 )
  {
    _RecurringTask::~_RecurringTask(*((PTP_TIMER **)this + 30));
    operator delete(v2);
  }
  *((_DWORD *)this + 59) = -1073741823;
  CBtAudioResourceManagerBase::~CBtAudioResourceManagerBase(this);
}
