/*
 * XREFs of swscanf_s @ 0x1403E75B0
 * Callers:
 *     sub_1406D0CB0 @ 0x1406D0CB0 (sub_1406D0CB0.c)
 *     sub_14094AA64 @ 0x14094AA64 (sub_14094AA64.c)
 *     sub_14094E74C @ 0x14094E74C (sub_14094E74C.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403EA014 @ 0x1403EA014 (sub_1403EA014.c)
 */

int swscanf_s(const wchar_t *Src, const wchar_t *Format, ...)
{
  __int64 v4; // rdx
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Src[v4] );
    return sub_1403EA014(Src, v4, Format, va);
  }
  else
  {
    _misaligned_access();
    return -1;
  }
}
