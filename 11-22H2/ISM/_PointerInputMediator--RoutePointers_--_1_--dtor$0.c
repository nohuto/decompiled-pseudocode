/*
 * XREFs of _PointerInputMediator::RoutePointers_::_1_::dtor$0 @ 0x180067FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PointerInputMediator::RoutePointers_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_lock<std::mutex>::~unique_lock<std::mutex>(a2 + 128);
}
