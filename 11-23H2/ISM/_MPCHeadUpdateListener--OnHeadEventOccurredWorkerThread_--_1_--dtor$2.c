/*
 * XREFs of _MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor$2 @ 0x1800D275A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>(a2 + 48);
}
