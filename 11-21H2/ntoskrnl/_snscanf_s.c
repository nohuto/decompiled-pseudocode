/*
 * XREFs of _snscanf_s @ 0x1403E6600
 * Callers:
 *     <none>
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403E9BB4 @ 0x1403E9BB4 (sub_1403E9BB4.c)
 */

int snscanf_s(const char *Src, size_t MaxCount, const char *Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return sub_1403E9BB4(Src, MaxCount, Format, (__int64 *)va);
  _misaligned_access();
  return -1;
}
