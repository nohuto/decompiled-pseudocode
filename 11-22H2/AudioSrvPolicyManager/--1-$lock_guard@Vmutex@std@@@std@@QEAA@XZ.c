/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x18002037C
 * Callers:
 *     _CSerialWorkQueue::WorkCallback_::_1_::dtor$0 @ 0x18004A2F2 (_CSerialWorkQueue--WorkCallback_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
