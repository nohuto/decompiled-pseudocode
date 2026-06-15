/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x1800EF148
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$25 @ 0x18007CE1D (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$25.c)
 *     _CXvmPowerReferenceManager::CXvmPowerReferenceManager_::_1_::dtor$0 @ 0x1801198F7 (_CXvmPowerReferenceManager--CXvmPowerReferenceManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
