/*
 * XREFs of ??$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x1801BD23C
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C0FA0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCSixDofProcessor_HomeHotkey_OnButtonsChanged_@ISMTracing@@QEAAXKK@Z @ 0x1801C0374 (-MPCSixDofProcessor_HomeHotkey_OnButtonsChanged_@ISMTracing@@QEAAXKK@Z.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeHotkey_OnButtonsChanged<unsigned long,unsigned int const &>(
        unsigned int *a1,
        unsigned int *a2)
{
  __int64 v4; // rcx
  ISMTracing *v5; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v4, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCSixDofProcessor_HomeHotkey_OnButtonsChanged_(v5, *a1, *a2);
  }
}
