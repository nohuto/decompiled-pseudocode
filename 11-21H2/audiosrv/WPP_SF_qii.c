/*
 * XREFs of WPP_SF_qii @ 0x1800FDAFC
 * Callers:
 *     _lambda_36dd9ad043825a17ff19f14a375eeb4d_::operator() @ 0x1800FB9D8 (_lambda_36dd9ad043825a17ff19f14a375eeb4d_--operator().c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qii(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_963f2f7f04c53afe9709a1371902504b_Traceguids, 10LL, (__int64 *)va);
}
