/*
 * XREFs of ??$_snwprintf_s@$0CAA@@@YAHAEAY0CAA@G_KPEBGZZ @ 0x180149948
 * Callers:
 *     ?OriginateExpressionErrorInfo@Composition@UI@Windows@@YAXPEAUExpressionErrorInfo@123@PEBG@Z @ 0x1801499B4 (-OriginateExpressionErrorInfo@Composition@UI@Windows@@YAXPEAUExpressionErrorInfo@123@PEBG@Z.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 * Callees:
 *     _vsnwprintf_s @ 0x180096998 (_vsnwprintf_s.c)
 */

int _snwprintf_s<512>(wchar_t *a1, size_t a2, const wchar_t *a3, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  return vsnwprintf_s(a1, 0x200uLL, a2, a3, va);
}
