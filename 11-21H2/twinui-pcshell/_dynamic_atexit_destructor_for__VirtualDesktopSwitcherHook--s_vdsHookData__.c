/*
 * XREFs of _dynamic_atexit_destructor_for__VirtualDesktopSwitcherHook::s_vdsHookData__ @ 0x180224A60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__VirtualDesktopSwitcherHook::s_vdsHookData__()
{
  if ( qword_1807B4B90 )
    std::_Ref_count_base::_Decref(qword_1807B4B90);
}
