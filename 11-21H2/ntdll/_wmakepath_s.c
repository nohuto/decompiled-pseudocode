/*
 * XREFs of _wmakepath_s @ 0x18009EB40
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 */

errno_t __cdecl wmakepath_s(
        wchar_t *Buffer,
        size_t BufferCount,
        const wchar_t *Drive,
        const wchar_t *Dir,
        const wchar_t *Filename,
        const wchar_t *Ext)
{
  __int64 v7; // r11
  wchar_t *v8; // r10
  wchar_t v9; // ax
  __int16 v10; // ax
  char *v11; // rcx
  char *v12; // rcx

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
    v11 = (char *)((char *)Filename - (char *)v8);
    while ( ++v7 < BufferCount )
    {
      *v8 = *(wchar_t *)((char *)v8 + (_QWORD)v11);
      if ( !*(wchar_t *)((char *)++v8 + (_QWORD)v11) )
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
        v12 = (char *)((char *)Ext - (char *)v8);
        while ( ++v7 < BufferCount )
        {
          *v8 = *(wchar_t *)((char *)v8 + (_QWORD)v12);
          if ( !*(wchar_t *)((char *)++v8 + (_QWORD)v12) )
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
