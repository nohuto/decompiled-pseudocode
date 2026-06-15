/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VCXvmPowerReference@@@std@@EEAAXXZ @ 0x18011A850
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePowerReference@CXvmPowerReferenceManager@@QEAAXXZ @ 0x18011A614 (-ReleasePowerReference@CXvmPowerReferenceManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Ref_count_obj2<CXvmPowerReference>::_Destroy(__int64 a1)
{
  CXvmPowerReferenceManager::ReleasePowerReference(*(CXvmPowerReferenceManager **)(a1 + 16));
}
