/*
 * XREFs of wil::details::lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___::_lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___ @ 0x1800628C4
 * Callers:
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     _CAcrylicSheet::StopAnimations_::_1_::dtor$0 @ 0x18009B48A (_CAcrylicSheet--StopAnimations_--_1_--dtor$0.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18000ED0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

char __fastcall wil::details::lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___::_lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___(
        __int64 a1)
{
  struct CVisual *v1; // rbx
  char result; // al

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(struct CVisual **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    if ( *((_BYTE *)v1 + 492) )
    {
      result = CDesktopManager::UnregisterForGlobalTimeChangeNotification(v1);
      *((_BYTE *)v1 + 492) = 0;
    }
  }
  return result;
}
