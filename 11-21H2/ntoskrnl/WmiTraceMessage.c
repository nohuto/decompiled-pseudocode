/*
 * XREFs of WmiTraceMessage @ 0x14022A8A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022A8D0 @ 0x14022A8D0 (sub_14022A8D0.c)
 */

__int64 WmiTraceMessage(int a1, int a2, int a3, int a4, ...)
{
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, a4);
  return sub_14022A8D0(a1, a2, a3, a4, (__int64)va, 0);
}
