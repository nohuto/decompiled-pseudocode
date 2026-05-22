/*
 * XREFs of ??$MPCHolographicInputManager_OnKeyboardKeyPress@AEAJAEAKW4InputType@@AEA_N@ISMTracing@@SAXAEAJAEAK$$QEAW4InputType@@AEA_N@Z @ 0x18009C134
 * Callers:
 *     ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x18009F31C (-OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCHolographicInputManager_OnKeyboardKeyPress_@ISMTracing@@QEAAXJKK_N@Z @ 0x18009EA38 (-MPCHolographicInputManager_OnKeyboardKeyPress_@ISMTracing@@QEAAXJKK_N@Z.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_OnKeyboardKeyPress<long &,unsigned long &,enum InputType,bool &>(
        int *a1,
        unsigned int *a2,
        unsigned int *a3,
        bool *a4)
{
  __int64 v8; // rcx
  ISMTracing *v9; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v8, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_OnKeyboardKeyPress_(v9, *a1, *a2, *a3, *a4);
  }
}
