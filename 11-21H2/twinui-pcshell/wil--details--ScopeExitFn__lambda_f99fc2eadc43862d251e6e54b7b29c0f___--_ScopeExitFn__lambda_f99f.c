/*
 * XREFs of wil::details::ScopeExitFn__lambda_f99fc2eadc43862d251e6e54b7b29c0f___::_ScopeExitFn__lambda_f99fc2eadc43862d251e6e54b7b29c0f___ @ 0x1803A0EFC
 * Callers:
 *     _MiniSearchExperienceManager::Hide_::_1_::dtor$1 @ 0x1803A1B18 (_MiniSearchExperienceManager--Hide_--_1_--dtor$1.c)
 * Callees:
 *     ?UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A4808 (-UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_f99fc2eadc43862d251e6e54b7b29c0f___::_ScopeExitFn__lambda_f99fc2eadc43862d251e6e54b7b29c0f___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    MiniSearchExperienceManager::UnboostPriority(*(MiniSearchExperienceManager **)a1);
  }
}
