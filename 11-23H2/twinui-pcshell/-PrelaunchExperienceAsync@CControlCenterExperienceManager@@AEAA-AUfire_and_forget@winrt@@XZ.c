/*
 * XREFs of ?PrelaunchExperienceAsync@CControlCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DF85C
 * Callers:
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801057B0 (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CControlCenterExperienceManager::PrelaunchExperienceAsync$_InitCoro$2 @ 0x1801DF290 (CControlCenterExperienceManager--PrelaunchExperienceAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall CControlCenterExperienceManager::PrelaunchExperienceAsync(__int64 a1, _BYTE *a2)
{
  char *v4; // rax
  int v6; // [rsp+138h] [rbp+10h] BYREF

  v4 = (char *)operator new(0xFAuLL);
  v6 = 0;
  CControlCenterExperienceManager::PrelaunchExperienceAsync__InitCoro_2(&v6, v4, a2, a1);
  return a2;
}
