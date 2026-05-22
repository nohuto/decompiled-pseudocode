/*
 * XREFs of ??0recursive_mutex@std@@QEAA@XZ @ 0x180054E54
 * Callers:
 *     _dynamic_initializer_for__DWMCursorBroker::s_lock__ @ 0x1800026D0 (_dynamic_initializer_for__DWMCursorBroker--s_lock__.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::recursive_mutex::recursive_mutex(std::recursive_mutex *this)
{
  _Mtx_init_in_situ((_Mtx_t)&DWMCursorBroker::s_lock, 258);
  return &DWMCursorBroker::s_lock;
}
