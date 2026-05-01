/*
 * XREFs of wil::details::ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___::_ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___ @ 0x18019BB90
 * Callers:
 *     _UndockedSearchAppExperienceManager::HideWithArgs_::_1_::dtor$5 @ 0x18019F370 (_UndockedSearchAppExperienceManager--HideWithArgs_--_1_--dtor$5.c)
 *     _UndockedSearchAppExperienceManager::Hide_::_1_::dtor$3 @ 0x1802149FD (_UndockedSearchAppExperienceManager--Hide_--_1_--dtor$3.c)
 * Callees:
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180092F30 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
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
