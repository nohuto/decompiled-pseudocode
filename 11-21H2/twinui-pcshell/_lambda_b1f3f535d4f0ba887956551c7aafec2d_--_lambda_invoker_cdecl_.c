/*
 * XREFs of _lambda_b1f3f535d4f0ba887956551c7aafec2d_::_lambda_invoker_cdecl_ @ 0x18055E120
 * Callers:
 *     <none>
 * Callees:
 *     ?Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z @ 0x180238570 (-Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z.c)
 */

__int64 __fastcall lambda_b1f3f535d4f0ba887956551c7aafec2d_::_lambda_invoker_cdecl_(_DWORD *Parameter)
{
  if ( (int)RoInitialize(1LL) >= 0 )
  {
    TwinUI::Lighting::AssistantLightManager::Animate((__int64)Parameter, Parameter[26]);
    RoUninitialize();
  }
  return 0LL;
}
