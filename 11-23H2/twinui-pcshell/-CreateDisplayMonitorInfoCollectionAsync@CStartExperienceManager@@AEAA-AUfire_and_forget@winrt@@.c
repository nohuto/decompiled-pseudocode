/*
 * XREFs of ?CreateDisplayMonitorInfoCollectionAsync@CStartExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801E1A90
 * Callers:
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801068D4 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_InitCoro$2 @ 0x1801E151C (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+138h] [rbp+10h] BYREF

  v4 = operator new(0xF2uLL);
  v6 = 0;
  CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
