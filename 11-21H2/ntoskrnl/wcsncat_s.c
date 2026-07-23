/*
 * XREFs of wcsncat_s @ 0x1403E7750
 * Callers:
 *     sub_14080D370 @ 0x14080D370 (sub_14080D370.c)
 *     sub_140952178 @ 0x140952178 (sub_140952178.c)
 *     sub_1409CFF00 @ 0x1409CFF00 (sub_1409CFF00.c)
 *     sub_1409FB95C @ 0x1409FB95C (sub_1409FB95C.c)
 *     sub_1409FC2D0 @ 0x1409FC2D0 (sub_1409FC2D0.c)
 *     sub_1409FE5F4 @ 0x1409FE5F4 (sub_1409FE5F4.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

errno_t __cdecl wcsncat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src, rsize_t MaxCount)
{
  rsize_t v4; // r11
  wchar_t *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax

  v4 = SizeInWords;
  v5 = Dst;
  if ( MaxCount )
  {
    if ( !Dst )
    {
LABEL_28:
      _misaligned_access();
      return 22;
    }
  }
  else if ( !Dst )
  {
    if ( !SizeInWords )
      return 0;
    goto LABEL_28;
  }
  if ( !SizeInWords )
    goto LABEL_28;
  if ( MaxCount && !Src )
  {
LABEL_11:
    v7 = 22;
  }
  else
  {
    while ( *Dst )
    {
      ++Dst;
      if ( !--SizeInWords )
        goto LABEL_11;
    }
    if ( MaxCount == -1LL )
    {
      v8 = (char *)Dst - (char *)Src;
      while ( 1 )
      {
        v9 = *Src;
        *(const wchar_t *)((char *)Src + v8) = *Src;
        ++Src;
        if ( !v9 )
          return 0;
        if ( !--SizeInWords )
          goto LABEL_23;
      }
    }
    if ( MaxCount )
    {
      v10 = (char *)Src - (char *)Dst;
      do
      {
        v11 = *(wchar_t *)((char *)Dst + v10);
        *Dst++ = v11;
        if ( !v11 )
          return 0;
        if ( !--SizeInWords )
          goto LABEL_23;
      }
      while ( --MaxCount );
    }
    *Dst = 0;
LABEL_23:
    if ( SizeInWords )
      return 0;
    if ( MaxCount == -1LL )
    {
      v5[v4 - 1] = 0;
      return 80;
    }
    v7 = 34;
  }
  *v5 = 0;
  _misaligned_access();
  return v7;
}
