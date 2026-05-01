/*
 * XREFs of ??$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIInspectable@@@3@XZ @ 0x18017C238
 * Callers:
 *     _lambda_ccf65d9649214ffd774f2e628ae5cb52_::operator() @ 0x18019C97C (_lambda_ccf65d9649214ffd774f2e628ae5cb52_--operator().c)
 *     _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::operator() @ 0x18019CDF8 (_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--operator().c)
 *     _lambda_5a859347bbbbbb78c34c3a6938b2a83e_::operator() @ 0x1801A7048 (_lambda_5a859347bbbbbb78c34c3a6938b2a83e_--operator().c)
 * Callees:
 *     ??$as@UIInspectable@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIInspectable@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800514A4 (--$as@UIInspectable@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@win.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::as<IInspectable>(
        __int64 (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2)
{
  winrt::impl::as<IInspectable,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(a2, *a1);
  return a2;
}
