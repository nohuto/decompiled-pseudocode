/*
 * XREFs of ?RegisterForDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801E0B70
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800E562C (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x1801E0864 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+D8h] [rbp+10h] BYREF

  v4 = operator new(0x99uLL);
  v6 = 0;
  CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
