/*
 * XREFs of wcscat_s @ 0x1403E7610
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     sub_14080D370 @ 0x14080D370 (sub_14080D370.c)
 *     sub_140812698 @ 0x140812698 (sub_140812698.c)
 *     sub_1409F8680 @ 0x1409F8680 (sub_1409F8680.c)
 *     sub_1409FC108 @ 0x1409FC108 (sub_1409FC108.c)
 *     sub_140A15C98 @ 0x140A15C98 (sub_140A15C98.c)
 *     sub_140B1CC84 @ 0x140B1CC84 (sub_140B1CC84.c)
 *     sub_140B54AE4 @ 0x140B54AE4 (sub_140B54AE4.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  wchar_t *v3; // r9
  wchar_t v4; // ax
  errno_t v5; // ebx

  if ( Dst && SizeInWords )
  {
    if ( Src )
    {
      v3 = Dst;
      while ( *v3 )
      {
        ++v3;
        if ( !--SizeInWords )
          goto LABEL_12;
      }
      while ( 1 )
      {
        v4 = *Src++;
        *v3++ = v4;
        if ( !v4 )
          return 0;
        if ( !--SizeInWords )
        {
          v5 = 34;
          goto LABEL_13;
        }
      }
    }
    else
    {
LABEL_12:
      v5 = 22;
LABEL_13:
      *Dst = 0;
      _misaligned_access();
      return v5;
    }
  }
  else
  {
    _misaligned_access();
    return 22;
  }
}
