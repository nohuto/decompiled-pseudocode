/*
 * XREFs of ??$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1801BBA88
 * Callers:
 *     _lambda_cdce16f825702c0a1c57b181431f22d2_::operator() @ 0x1801E9714 (_lambda_cdce16f825702c0a1c57b181431f22d2_--operator().c)
 *     _lambda_f11de0bc23a1be581f21c48152b34889_::operator() @ 0x18028D158 (_lambda_f11de0bc23a1be581f21c48152b34889_--operator().c)
 * Callees:
 *     ??$as@UIInspectable@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIInspectable@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180079540 (--$as@UIInspectable@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@win.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::as<IInspectable>(
        __int64 (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2)
{
  winrt::impl::as<IInspectable,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(a2, *a1);
  return a2;
}
