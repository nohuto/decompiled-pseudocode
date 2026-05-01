/*
 * XREFs of _Windows::Internal::FamilySafety::AppLimits::ComposeWin32AppId_::_1_::dtor$2 @ 0x180627A4E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::FamilySafety::AppLimits::ComposeWin32AppId_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 64), a2);
}
