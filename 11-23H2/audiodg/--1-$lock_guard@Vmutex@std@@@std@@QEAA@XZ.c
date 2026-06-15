/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x14006F664
 * Callers:
 *     _CSerialWorkQueue::WorkCallback_::_1_::dtor$0 @ 0x1400705F1 (_CSerialWorkQueue--WorkCallback_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
