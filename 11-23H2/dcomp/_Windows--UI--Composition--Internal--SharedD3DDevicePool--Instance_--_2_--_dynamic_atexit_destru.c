/*
 * XREFs of _Windows::UI::Composition::Internal::SharedD3DDevicePool::Instance_::_2_::_dynamic_atexit_destructor_for__pool__ @ 0x1800B2250
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800680E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::Internal::SharedD3DDevicePool::Instance_::_2_::_dynamic_atexit_destructor_for__pool__()
{
  if ( qword_180220B18 )
    std::_Ref_count_base::_Decref(qword_180220B18);
}
