/*
 * XREFs of wcsncpy_s @ 0x1403E7870
 * Callers:
 *     _wsplitpath_s @ 0x1403E6C70 (_wsplitpath_s.c)
 *     sub_14051FB70 @ 0x14051FB70 (sub_14051FB70.c)
 *     sub_14052AF40 @ 0x14052AF40 (sub_14052AF40.c)
 *     sub_140603A00 @ 0x140603A00 (sub_140603A00.c)
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 *     sub_1406768BC @ 0x1406768BC (sub_1406768BC.c)
 *     sub_1409D1048 @ 0x1409D1048 (sub_1409D1048.c)
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 *     sub_1409E1514 @ 0x1409E1514 (sub_1409E1514.c)
 *     sub_1409FC2D0 @ 0x1409FC2D0 (sub_1409FC2D0.c)
 *     sub_1409FD160 @ 0x1409FD160 (sub_1409FD160.c)
 *     sub_140A71180 @ 0x140A71180 (sub_140A71180.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

errno_t __cdecl wcsncpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src, rsize_t MaxCount)
{
  errno_t v5; // ebx
  wchar_t *v6; // r11
  rsize_t v7; // r10
  signed __int64 v8; // r11
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax
  rsize_t v12; // rbx

  if ( MaxCount )
  {
    if ( !Dst )
      goto LABEL_4;
  }
  else if ( !Dst )
  {
    if ( SizeInWords )
    {
LABEL_4:
      _misaligned_access();
      return 22;
    }
    return 0;
  }
  if ( !SizeInWords )
    goto LABEL_4;
  if ( !MaxCount )
  {
    *Dst = 0;
    return 0;
  }
  if ( Src )
  {
    v6 = Dst;
    v7 = SizeInWords;
    if ( MaxCount == -1LL )
    {
      v8 = (char *)Dst - (char *)Src;
      while ( 1 )
      {
        v9 = *Src;
        *(const wchar_t *)((char *)Src + v8) = *Src;
        ++Src;
        if ( !v9 )
          break;
        if ( !--v7 )
          goto LABEL_25;
      }
    }
    else
    {
      v10 = (char *)Src - (char *)Dst;
      while ( 1 )
      {
        v11 = *(wchar_t *)((char *)v6 + v10);
        v12 = MaxCount;
        *v6++ = v11;
        if ( !v11 )
          break;
        if ( --v7 )
        {
          if ( --MaxCount )
            continue;
        }
        MaxCount = v12 - 1;
        if ( !v7 )
          MaxCount = v12;
        if ( !MaxCount )
          *v6 = 0;
LABEL_25:
        if ( v7 )
          return 0;
        if ( MaxCount == -1LL )
        {
          Dst[SizeInWords - 1] = 0;
          return 80;
        }
        v5 = 34;
        goto LABEL_29;
      }
    }
    return 0;
  }
  v5 = 22;
LABEL_29:
  *Dst = 0;
  _misaligned_access();
  return v5;
}
