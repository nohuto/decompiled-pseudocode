/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x1800C2C34
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$25 @ 0x180071B2E (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$25.c)
 *     _CXvmPowerReferenceManager::CXvmPowerReferenceManager_::_1_::dtor$0 @ 0x180103AF2 (_CXvmPowerReferenceManager--CXvmPowerReferenceManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
