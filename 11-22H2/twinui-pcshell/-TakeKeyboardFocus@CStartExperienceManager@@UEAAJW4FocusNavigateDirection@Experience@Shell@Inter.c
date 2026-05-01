/*
 * XREFs of ?TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x180445F80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x1802D4B28 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z.c)
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x180747320 (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall CStartExperienceManager::TakeKeyboardFocus(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  int v4; // eax

  result = CSingleViewShellExperience::BringToForeground((CSingleViewShellExperience *)(a1 + 280));
  v3 = 0;
  if ( (int)result >= 0 )
  {
    v4 = CStartExperienceManager::ReactivateHelper((CStartExperienceManager *)(a1 - 40), L"OnReceivingKeyboardFocus");
    if ( v4 < 0 )
      return (unsigned int)v4;
    return v3;
  }
  return result;
}
