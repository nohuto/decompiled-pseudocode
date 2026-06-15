/*
 * XREFs of WPP_SF_qDD @ 0x18010CC38
 * Callers:
 *     _lambda_b4f8d47091f36d5a3f35dc44bd3a4f48_::operator() @ 0x18010B6D0 (_lambda_b4f8d47091f36d5a3f35dc44bd3a4f48_--operator().c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qDD(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_cde6b4e0c3b236ab5d448129360c4228_Traceguids, 11LL, (__int64 *)va);
}
