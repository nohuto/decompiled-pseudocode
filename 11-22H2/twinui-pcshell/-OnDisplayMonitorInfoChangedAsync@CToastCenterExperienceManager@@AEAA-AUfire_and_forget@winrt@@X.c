/*
 * XREFs of ?OnDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801E0808
 * Callers:
 *     ?OnDisplayMonitorInfoChanged@CToastCenterExperienceManager@@AEAAXUDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UDisplayMonitorInfoChangedEventArgs@3456@@Z @ 0x180437850 (-OnDisplayMonitorInfoChanged@CToastCenterExperienceManager@@AEAAXUDisplayMonitorInfoCollection@S.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x1801E0588 (CToastCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+88h] [rbp+10h] BYREF

  v4 = operator new(0x4AuLL);
  v6 = 0;
  CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
