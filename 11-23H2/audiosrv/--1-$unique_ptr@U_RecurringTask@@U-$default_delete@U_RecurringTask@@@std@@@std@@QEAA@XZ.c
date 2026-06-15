/*
 * XREFs of ??1?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAA@XZ @ 0x1800D86C4
 * Callers:
 *     _CSerialWorkQueue::QueueRecurringItem_::_1_::dtor$2 @ 0x180079EEB (_CSerialWorkQueue--QueueRecurringItem_--_1_--dtor$2.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$6 @ 0x1800F5267 (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$6.c)
 * Callees:
 *     ??1_RecurringTask@@QEAA@XZ @ 0x180018FE8 (--1_RecurringTask@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<_RecurringTask>::~unique_ptr<_RecurringTask>(PTP_TIMER **a1)
{
  PTP_TIMER *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    _RecurringTask::~_RecurringTask(*a1);
    operator delete(v1);
  }
}
