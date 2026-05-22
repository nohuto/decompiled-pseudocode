/*
 * XREFs of CallOnThreadExit::_dynamic_initializer_for__s_callbacks__ @ 0x180001F10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAA@XZ @ 0x1800523C8 (--0-$list@UCallbackData@CallOnThreadExit@@V-$allocator@UCallbackData@CallOnThreadExit@@@std@@@st.c)
 */

int CallOnThreadExit::_dynamic_initializer_for__s_callbacks__()
{
  std::list<CallOnThreadExit::CallbackData>::list<CallOnThreadExit::CallbackData>();
  return atexit((void (__cdecl *)())CallOnThreadExit::_dynamic_atexit_destructor_for__s_callbacks__);
}
