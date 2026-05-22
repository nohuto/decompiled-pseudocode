/*
 * XREFs of ??$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z @ 0x1800EE8D4
 * Callers:
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800F1DBC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z @ 0x1800F1458 (-MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_Update3DFocusWNF<unsigned __int64 &,unsigned __int64 &,unsigned long &,unsigned long &,unsigned long &,unsigned long &>(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  __int64 v10; // rcx
  ISMTracing *v11; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v10, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCInputRouter_Update3DFocusWNF_(v11, *a1, *a2, *a3, *a4, *a5, *a6);
  }
}
