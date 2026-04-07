/*
 * XREFs of wil::details::lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___::_lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___ @ 0x1800A2890
 * Callers:
 *     _CAcrylicSheet::StopAnimations_::_1_::dtor$0 @ 0x1800A3D43 (_CAcrylicSheet--StopAnimations_--_1_--dtor$0.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003865C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

char __fastcall wil::details::lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___::_lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___(
        __int64 a1)
{
  char result; // al
  struct CVisual *v2; // rcx

  result = 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v2 = *(struct CVisual **)a1;
    if ( *((_BYTE *)v2 + 464) )
    {
      *((_BYTE *)v2 + 464) = 0;
      return CDesktopManager::UnregisterForGlobalTimeChangeNotification(v2);
    }
  }
  return result;
}
