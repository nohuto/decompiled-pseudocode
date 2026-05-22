/*
 * XREFs of _PenDeviceManager::PenDeviceManager_::_1_::dtor$2 @ 0x180185C64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenDeviceManager::PenDeviceManager_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::unordered_map<void *,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>::~unordered_map<void *,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>(*(_QWORD *)(a2 + 64) + 80LL);
}
