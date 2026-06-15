/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x1800D570C
 * Callers:
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$2 @ 0x18007BA6D (_CPlaybackNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CSerialWorkQueue::WorkCallback_::_1_::dtor$0 @ 0x18007C2B8 (_CSerialWorkQueue--WorkCallback_--_1_--dtor$0.c)
 *     _CSerialWorkQueue::RecurringWaitCallback_::_1_::dtor$0 @ 0x1800D66A9 (_CSerialWorkQueue--RecurringWaitCallback_--_1_--dtor$0.c)
 *     _CXvmPowerReferenceManager::AcquirePowerReference_::_1_::dtor$2 @ 0x18011A194 (_CXvmPowerReferenceManager--AcquirePowerReference_--_1_--dtor$2.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$2 @ 0x18011A353 (_CCaptureNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$1 @ 0x180136796 (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
