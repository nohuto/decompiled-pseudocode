/*
 * XREFs of WPP_SF_l @ 0x1802EF850
 * Callers:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x1800B7B50 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_l(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_614e7a2dd5e83d66d84b98d107ce0dd2_Traceguids, 0xEu, &v5, 4LL, 0LL);
}
