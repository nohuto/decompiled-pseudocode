/*
 * XREFs of _dynamic_atexit_destructor_for__AltTabWindowHook::s_altTabHook__ @ 0x180224AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__AltTabWindowHook::s_altTabHook__()
{
  if ( qword_1807B4BA0 )
    std::_Ref_count_base::_Decref(qword_1807B4BA0);
}
