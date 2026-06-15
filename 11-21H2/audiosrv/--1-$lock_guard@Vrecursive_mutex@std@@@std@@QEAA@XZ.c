/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x1800C2748
 * Callers:
 *     _CSerialWorkQueue::TimerCallback_::_1_::dtor$0 @ 0x18006CCC0 (_CSerialWorkQueue--TimerCallback_--_1_--dtor$0.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$10 @ 0x18006E550 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$10.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$2 @ 0x18006E6A0 (_CPlaybackNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$1 @ 0x18006E8F0 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$1.c)
 *     _CSerialWorkQueue::RecurringWaitCallback_::_1_::dtor$0 @ 0x1800D3F18 (_CSerialWorkQueue--RecurringWaitCallback_--_1_--dtor$0.c)
 *     _CXvmPowerReferenceManager::AcquirePowerReference_::_1_::dtor$2 @ 0x180104294 (_CXvmPowerReferenceManager--AcquirePowerReference_--_1_--dtor$2.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$2 @ 0x180104453 (_CCaptureNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$1 @ 0x180128D34 (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
