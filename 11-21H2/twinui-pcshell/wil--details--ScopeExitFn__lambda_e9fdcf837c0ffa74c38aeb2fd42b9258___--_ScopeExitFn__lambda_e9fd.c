/*
 * XREFs of wil::details::ScopeExitFn__lambda_e9fdcf837c0ffa74c38aeb2fd42b9258___::_ScopeExitFn__lambda_e9fdcf837c0ffa74c38aeb2fd42b9258___ @ 0x18036E7BC
 * Callers:
 *     _CStartExperienceManager::PlayTransitionToCortana_::_1_::dtor$0 @ 0x18036FDC0 (_CStartExperienceManager--PlayTransitionToCortana_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::ScopeExitFn__lambda_e9fdcf837c0ffa74c38aeb2fd42b9258___::_ScopeExitFn__lambda_e9fdcf837c0ffa74c38aeb2fd42b9258___(
        __int64 a1)
{
  BOOL result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return EnableWindow(**(HWND **)a1, 1);
  }
  return result;
}
