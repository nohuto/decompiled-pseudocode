/*
 * XREFs of _GetColorFromColorString_::_1_::dtor$1 @ 0x18050FE3D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetColorFromColorString_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 72), a2);
}
