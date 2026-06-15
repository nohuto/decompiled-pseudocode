/*
 * XREFs of PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x1800021D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__()
{
  InitializeCriticalSectionEx(&PickerHostContextManager::s_csPickerHostContextList, 0, 0);
  return atexit((void (__cdecl *)())PickerHostContextManager::_dynamic_atexit_destructor_for__s_csPickerHostContextList__);
}
