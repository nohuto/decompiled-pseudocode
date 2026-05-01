/*
 * XREFs of _PinHistory::PinHistory_::_1_::dtor$2 @ 0x1802B5654
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PinHistory::PinHistory_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::~deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(*(_QWORD *)(a2 + 64) + 64LL);
}
