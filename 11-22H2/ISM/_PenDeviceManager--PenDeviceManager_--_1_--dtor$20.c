/*
 * XREFs of _PenDeviceManager::PenDeviceManager_::_1_::dtor$20 @ 0x180080947
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenDeviceManager::PenDeviceManager_::_1_::dtor_20(__int64 a1, __int64 a2)
{
  return std::list<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>::~list<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>(*(_QWORD *)(a2 + 80) + 8LL);
}
