/*
 * XREFs of _snscanf_s @ 0x1800997E0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008E6B8 (_invalid_parameter.c)
 *     _sinput_s @ 0x18009C494 (_sinput_s.c)
 */

int snscanf_s(const char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return sinput_s(Buffer, BufferCount, Format, (__int64 *)va);
  invalid_parameter();
  return -1;
}
