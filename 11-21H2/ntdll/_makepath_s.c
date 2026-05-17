/*
 * XREFs of _makepath_s @ 0x18009E430
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 */

errno_t __cdecl makepath_s(
        char *Buffer,
        size_t BufferCount,
        const char *Drive,
        const char *Dir,
        const char *Filename,
        const char *Ext)
{
  __int64 v7; // r11
  char *v8; // r10
  char v9; // al
  char v10; // al
  const char *v11; // rcx
  const char *v12; // rcx

  if ( !Buffer || !BufferCount )
  {
    invalid_parameter();
    return 22;
  }
  v7 = 0LL;
  v8 = Buffer;
  if ( Drive && *Drive )
  {
    v7 = 2LL;
    if ( BufferCount <= 2 )
      goto LABEL_29;
    *Buffer = *Drive;
    Buffer[1] = 58;
    v8 = Buffer + 2;
  }
  if ( Dir && *Dir )
  {
    while ( ++v7 < BufferCount )
    {
      v9 = *Dir++;
      *v8++ = v9;
      if ( !*Dir )
      {
        v10 = *(Dir - 1);
        if ( v10 != 47 && v10 != 92 )
        {
          if ( ++v7 >= BufferCount )
            goto LABEL_29;
          *v8++ = 92;
        }
        goto LABEL_15;
      }
    }
    goto LABEL_29;
  }
LABEL_15:
  if ( Filename && *Filename )
  {
    v11 = (const char *)(Filename - v8);
    while ( ++v7 < BufferCount )
    {
      *v8 = v8[(_QWORD)v11];
      if ( !(++v8)[(_QWORD)v11] )
        goto LABEL_20;
    }
    goto LABEL_29;
  }
LABEL_20:
  if ( Ext && *Ext )
  {
    if ( *Ext == 46 )
      goto LABEL_25;
    if ( ++v7 < BufferCount )
    {
      *v8++ = 46;
      if ( *Ext )
      {
LABEL_25:
        v12 = (const char *)(Ext - v8);
        while ( ++v7 < BufferCount )
        {
          *v8 = v8[(_QWORD)v12];
          if ( !(++v8)[(_QWORD)v12] )
            goto LABEL_28;
        }
        goto LABEL_29;
      }
      goto LABEL_28;
    }
LABEL_29:
    *Buffer = 0;
    invalid_parameter();
    return 34;
  }
LABEL_28:
  if ( v7 + 1 > BufferCount )
    goto LABEL_29;
  *v8 = 0;
  return 0;
}
