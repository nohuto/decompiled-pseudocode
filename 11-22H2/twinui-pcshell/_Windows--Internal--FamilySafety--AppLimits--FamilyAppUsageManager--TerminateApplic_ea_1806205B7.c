/*
 * XREFs of _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::TerminateApplication_::_1_::dtor$1 @ 0x1806205B7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::TerminateApplication_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 56), a2);
}
