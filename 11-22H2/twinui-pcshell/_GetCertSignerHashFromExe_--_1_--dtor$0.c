/*
 * XREFs of _GetCertSignerHashFromExe_::_1_::dtor$0 @ 0x18062201A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetCertSignerHashFromExe_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 48), a2);
}
