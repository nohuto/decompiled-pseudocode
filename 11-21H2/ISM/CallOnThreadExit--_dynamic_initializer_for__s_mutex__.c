/*
 * XREFs of CallOnThreadExit::_dynamic_initializer_for__s_mutex__ @ 0x1800015B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0mutex@std@@QEAA@XZ @ 0x180047DDC (--0mutex@std@@QEAA@XZ.c)
 */

int CallOnThreadExit::_dynamic_initializer_for__s_mutex__()
{
  std::mutex::mutex((std::mutex *)&unk_180242C60);
  return atexit((void (__cdecl *)())CallOnThreadExit::_dynamic_atexit_destructor_for__s_mutex__);
}
