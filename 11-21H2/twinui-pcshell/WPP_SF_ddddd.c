/*
 * XREFs of WPP_SF_ddddd @ 0x1802EF7CC
 * Callers:
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800B6134 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_ddddd(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+A8h] [rbp+20h] BYREF
  __int64 v6; // [rsp+B0h] [rbp+28h] BYREF
  va_list va; // [rsp+B0h] [rbp+28h]
  __int64 v8; // [rsp+B8h] [rbp+30h] BYREF
  va_list va1; // [rsp+B8h] [rbp+30h]
  __int64 v10; // [rsp+C0h] [rbp+38h] BYREF
  va_list va2; // [rsp+C0h] [rbp+38h]
  va_list va3; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v8 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v10 = va_arg(va3, _QWORD);
  v5 = a4;
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_614e7a2dd5e83d66d84b98d107ce0dd2_Traceguids,
           0xBu,
           &v5,
           4LL,
           va,
           4LL,
           va1,
           4LL,
           va2,
           4LL,
           va3,
           4LL,
           0LL);
}
