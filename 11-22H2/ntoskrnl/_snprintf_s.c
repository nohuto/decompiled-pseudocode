/*
 * XREFs of _snprintf_s @ 0x1403DE5B0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1409BEE80 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     _vsnprintf_s @ 0x1403DE5E0 (_vsnprintf_s.c)
 */

int snprintf_s(char *DstBuf, size_t SizeInBytes, size_t MaxCount, const char *Format, ...)
{
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, Format);
  return vsnprintf_s(DstBuf, SizeInBytes, MaxCount, Format, va);
}
