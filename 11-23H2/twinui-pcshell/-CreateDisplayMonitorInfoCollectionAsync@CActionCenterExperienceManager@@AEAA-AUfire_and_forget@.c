/*
 * XREFs of ?CreateDisplayMonitorInfoCollectionAsync@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DC1AC
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800E923C (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_InitCoro$2 @ 0x1801DBF5C (CActionCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+98h] [rbp+10h] BYREF

  v4 = operator new(0x52uLL);
  v6 = 0;
  CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
