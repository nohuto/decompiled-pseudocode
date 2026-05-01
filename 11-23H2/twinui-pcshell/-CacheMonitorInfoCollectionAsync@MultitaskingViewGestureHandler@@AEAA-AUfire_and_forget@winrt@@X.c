/*
 * XREFs of ?CacheMonitorInfoCollectionAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x18020D2DC
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x1800A2440 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_InitCoro$2 @ 0x18020D038 (MultitaskingViewGestureHandler--CacheMonitorInfoCollectionAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+98h] [rbp+10h] BYREF

  v4 = operator new(0x5AuLL);
  v6 = 0;
  MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
