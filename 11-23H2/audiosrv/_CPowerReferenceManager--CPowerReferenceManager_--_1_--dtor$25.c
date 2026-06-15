/*
 * XREFs of _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$25 @ 0x18007CDED
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor_25(__int64 a1, __int64 a2)
{
  std::mutex::~mutex(*(_Mtx_t *)(a2 + 120));
}
