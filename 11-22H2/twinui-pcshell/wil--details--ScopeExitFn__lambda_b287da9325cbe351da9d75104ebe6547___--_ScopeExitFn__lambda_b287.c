/*
 * XREFs of wil::details::ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___::_ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___ @ 0x180466224
 * Callers:
 *     _UndockedSearchAppExperienceManager::Hide_::_1_::dtor$4 @ 0x1802BEAE1 (_UndockedSearchAppExperienceManager--Hide_--_1_--dtor$4.c)
 *     _UndockedSearchAppExperienceManager::HideWithArgs_::_1_::dtor$5 @ 0x1802BEB6B (_UndockedSearchAppExperienceManager--HideWithArgs_--_1_--dtor$5.c)
 * Callees:
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B2F60 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___::_ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    UndockedSearchAppExperienceManager::UnboostPriority(*(UndockedSearchAppExperienceManager **)a1);
  }
}
