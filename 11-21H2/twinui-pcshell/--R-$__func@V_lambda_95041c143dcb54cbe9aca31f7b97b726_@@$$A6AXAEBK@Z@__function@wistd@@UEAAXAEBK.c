/*
 * XREFs of ??R?$__func@V_lambda_95041c143dcb54cbe9aca31f7b97b726_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK@Z @ 0x1805E0F50
 * Callers:
 *     <none>
 * Callees:
 *     ??$InputSwitchWnfIgnored@AEBK@InputSwitchingManagerTelemetry@@SAXAEBK@Z @ 0x1805DF4CC (--$InputSwitchWnfIgnored@AEBK@InputSwitchingManagerTelemetry@@SAXAEBK@Z.c)
 */

void __fastcall wistd::__function::__func<_lambda_95041c143dcb54cbe9aca31f7b97b726_,void (unsigned long const &)>::operator()(
        __int64 a1,
        int *a2)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( v2 == -536870911 )
    winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::HandleWnfCallback(
      *(winrt::Windows::Internal::Shell::implementation::InputSwitchingManager **)(a1 + 8),
      0xE0000001);
  else
    InputSwitchingManagerTelemetry::InputSwitchWnfIgnored<unsigned long const &>(&v2);
}
