/*
 * XREFs of _KeyboardHosting::TabTipAdapter::OnModalityInfoChanged_::_1_::dtor$0 @ 0x1802DD9AB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeyboardHosting::TabTipAdapter::OnModalityInfoChanged_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 128), a2);
}
