/*
 * XREFs of ?CreateDisplayMonitorInfoCollectionAsync@CControlCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DE640
 * Callers:
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801057B0 (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_InitCoro$2 @ 0x1801DE0CC (CControlCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+138h] [rbp+10h] BYREF

  v4 = operator new(0xF2uLL);
  v6 = 0;
  CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
