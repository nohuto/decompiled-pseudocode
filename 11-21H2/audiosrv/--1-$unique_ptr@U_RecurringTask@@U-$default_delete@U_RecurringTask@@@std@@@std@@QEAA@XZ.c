/*
 * XREFs of ??1?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAA@XZ @ 0x1800C9EB4
 * Callers:
 *     _CSerialWorkQueue::QueueRecurringItem_::_1_::dtor$2 @ 0x1800CAE8D (_CSerialWorkQueue--QueueRecurringItem_--_1_--dtor$2.c)
 *     _CBtAudioResourceManager::CBtAudioResourceManager_::_1_::dtor$5 @ 0x18011388C (_CBtAudioResourceManager--CBtAudioResourceManager_--_1_--dtor$5.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x1800C9FF0 (--1_RecurringTask@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<_RecurringTask>::~unique_ptr<_RecurringTask>(_RecurringTask **a1)
{
  _RecurringTask *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    _RecurringTask::~_RecurringTask(*a1);
    operator delete(v1);
  }
}
