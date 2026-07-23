/*
 * XREFs of _snwscanf_s @ 0x1403E6720
 * Callers:
 *     sub_1406BAFD4 @ 0x1406BAFD4 (sub_1406BAFD4.c)
 *     sub_140A22790 @ 0x140A22790 (sub_140A22790.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403EA014 @ 0x1403EA014 (sub_1403EA014.c)
 */

int snwscanf_s(const wchar_t *Src, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return sub_1403EA014(Src, MaxCount, Format, (__int64 *)va);
  _misaligned_access();
  return -1;
}
