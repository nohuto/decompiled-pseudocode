/*
 * XREFs of ?DimStart@CStartExperienceManager@@UEAAJXZ @ 0x18036EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x18022CAC6 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 */

__int64 __fastcall CStartExperienceManager::DimStart(CStartExperienceManager *this)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 648) )
    return 0LL;
  result = CStartExperienceManager::ReactivateHelper(
             (CStartExperienceManager *)((char *)this - 40),
             L"OnDimmedStateChanged",
             1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
