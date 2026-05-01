/*
 * XREFs of _Windows::Internal::FamilySafety::AppLimits::IsPackagedApp_::_1_::dtor$0 @ 0x180621928
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::FamilySafety::AppLimits::IsPackagedApp_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 32), a2);
}
