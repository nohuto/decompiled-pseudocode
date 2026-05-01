/*
 * XREFs of ?SHRegValueExists@@YAHPEAUHKEY__@@PEBGPEAK@Z @ 0x18017F978
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E3788 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SHRegValueExists(HKEY a1, const unsigned __int16 *a2, unsigned int *a3)
{
  return RegQueryValueExW(a1, a2, 0LL, 0LL, 0LL, 0LL) == 0;
}
