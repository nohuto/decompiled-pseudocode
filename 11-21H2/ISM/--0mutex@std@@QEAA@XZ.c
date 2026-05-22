/*
 * XREFs of ??0mutex@std@@QEAA@XZ @ 0x180047DDC
 * Callers:
 *     _dynamic_initializer_for__PointerInputMediator::s_frameQueueLock__ @ 0x180001470 (_dynamic_initializer_for__PointerInputMediator--s_frameQueueLock__.c)
 *     CallOnThreadExit::_dynamic_initializer_for__s_mutex__ @ 0x1800015B0 (CallOnThreadExit--_dynamic_initializer_for__s_mutex__.c)
 * Callees:
 *     <none>
 */

std::mutex *__fastcall std::mutex::mutex(std::mutex *this)
{
  _Mtx_init_in_situ(this, 2);
  return this;
}
