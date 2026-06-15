/*
 * XREFs of WPP_SF_di @ 0x180023B60
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180021410 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_di(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, 0xCu, &v5, 4LL, va, 8LL, 0LL);
}
