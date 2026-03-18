/*
 * XREFs of UpdateWinIniInt @ 0x1C0158014
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C00A1484 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     _anonymous_namespace_::UpdateThresholdFromMetric @ 0x1C0114DE8 (_anonymous_namespace_--UpdateThresholdFromMetric.c)
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x1C0120DDC (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C0157F48 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00D0F08 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateWinIniInt(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v7[16]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v8[80]; // [rsp+40h] [rbp-78h] BYREF

  RtlStringCchPrintfW(v7, 0x10uLL, (size_t *)L"%d");
  RtlLoadStringOrError(a3, v8, 40LL, 0LL);
  return FastWriteProfileStringW(a1, a2, v8, v7);
}
