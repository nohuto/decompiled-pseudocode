/*
 * XREFs of ?UnregisterFromXusbConnectionEventsOnBackground@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DB984
 * Callers:
 *     ?HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x1804003E8 (-HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_InitCoro$2 @ 0x1801DB704 (GamingOverlayExperienceManager--UnregisterFromXusbConnectionEventsOnBackground$_InitCoro$2.c)
 */

_BYTE *__fastcall GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+78h] [rbp+10h] BYREF

  v4 = operator new(0x3AuLL);
  v6 = 0;
  GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
