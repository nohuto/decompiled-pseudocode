/*
 * XREFs of ?DimStart@CStartExperienceManager@@UEAAJXZ @ 0x180444820
 * Callers:
 *     <none>
 * Callees:
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x1802D4CAC (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 */

__int64 __fastcall CStartExperienceManager::DimStart(CStartExperienceManager *this)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 720) )
    return 0LL;
  result = CStartExperienceManager::ReactivateHelper(
             (CStartExperienceManager *)((char *)this - 40),
             L"OnDimmedStateChanged",
             1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
