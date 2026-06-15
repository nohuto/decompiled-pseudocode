/*
 * XREFs of _dynamic_atexit_destructor_for__Sarm::CEndpointResourcePool::s_sharedPool___0 @ 0x180072B20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__Sarm::CEndpointResourcePool::s_sharedPool___0()
{
  if ( qword_1801C2CB0 )
    std::_Ref_count_base::_Decref(qword_1801C2CB0);
}
