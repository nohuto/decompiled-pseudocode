/*
 * XREFs of ??$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z @ 0x1801E8D70
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801ECC24 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCSixDofProcessor_HomeEventUpdate_@ISMTracing@@QEAAXKK@Z @ 0x1801EBE34 (-MPCSixDofProcessor_HomeEventUpdate_@ISMTracing@@QEAAXKK@Z.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEventUpdate<unsigned long,unsigned long &>(
        unsigned int *a1,
        unsigned int *a2)
{
  __int64 v4; // rcx
  ISMTracing *v5; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v4, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCSixDofProcessor_HomeEventUpdate_(v5, *a1, *a2);
  }
}
