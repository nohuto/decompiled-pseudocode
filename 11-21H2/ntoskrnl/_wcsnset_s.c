/*
 * XREFs of _wcsnset_s @ 0x1403E1670
 * Callers:
 *     <none>
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

errno_t __cdecl wcsnset_s(wchar_t *Dst, size_t SizeInWords, wchar_t Val, size_t MaxCount)
{
  wchar_t *v5; // rax

  if ( MaxCount )
  {
    if ( !Dst )
      goto LABEL_18;
LABEL_6:
    if ( !SizeInWords )
      goto LABEL_18;
    v5 = Dst;
    if ( *Dst )
    {
      while ( MaxCount )
      {
        if ( !--SizeInWords )
          goto LABEL_16;
        *v5 = Val;
        --MaxCount;
        if ( !*++v5 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( MaxCount )
      {
LABEL_16:
        if ( SizeInWords )
          return 0;
        *Dst = 0;
        goto LABEL_18;
      }
    }
    while ( *v5 )
    {
      if ( !--SizeInWords )
        break;
      ++v5;
    }
    goto LABEL_16;
  }
  if ( Dst )
    goto LABEL_6;
  if ( !SizeInWords )
    return 0;
LABEL_18:
  _misaligned_access();
  return 22;
}
