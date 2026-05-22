/*
 * XREFs of CallOnThreadExit::_dynamic_initializer_for__s_mutex__ @ 0x180001F40
 * Callers:
 *     <none>
 * Callees:
 *     ??0mutex@std@@QEAA@XZ @ 0x18005243C (--0mutex@std@@QEAA@XZ.c)
 */

int CallOnThreadExit::_dynamic_initializer_for__s_mutex__()
{
  std::mutex::mutex((std::mutex *)&unk_180268D60);
  return atexit((void (__cdecl *)())CallOnThreadExit::_dynamic_atexit_destructor_for__s_mutex__);
}
