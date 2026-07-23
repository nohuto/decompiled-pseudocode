/*
 * XREFs of strncat_s @ 0x1403E7230
 * Callers:
 *     <none>
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

errno_t __cdecl strncat_s(char *a1, rsize_t SizeInBytes, const char *Src, rsize_t MaxCount)
{
  rsize_t v4; // r11
  char *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  char v9; // al
  signed __int64 v10; // r8
  char v11; // al

  v4 = SizeInBytes;
  v5 = a1;
  if ( MaxCount )
  {
    if ( !a1 )
    {
LABEL_28:
      _misaligned_access();
      return 22;
    }
  }
  else if ( !a1 )
  {
    if ( !SizeInBytes )
      return 0;
    goto LABEL_28;
  }
  if ( !SizeInBytes )
    goto LABEL_28;
  if ( MaxCount && !Src )
  {
LABEL_11:
    v7 = 22;
  }
  else
  {
    while ( *a1 )
    {
      ++a1;
      if ( !--SizeInBytes )
        goto LABEL_11;
    }
    if ( MaxCount == -1LL )
    {
      v8 = a1 - Src;
      while ( 1 )
      {
        v9 = *Src;
        Src[v8] = *Src;
        ++Src;
        if ( !v9 )
          return 0;
        if ( !--SizeInBytes )
          goto LABEL_23;
      }
    }
    if ( MaxCount )
    {
      v10 = Src - a1;
      do
      {
        v11 = a1[v10];
        *a1++ = v11;
        if ( !v11 )
          return 0;
        if ( !--SizeInBytes )
          goto LABEL_23;
      }
      while ( --MaxCount );
    }
    *a1 = 0;
LABEL_23:
    if ( SizeInBytes )
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
