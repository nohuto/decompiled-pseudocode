/*
 * XREFs of _splitpath_helper @ 0x180094D40
 * Callers:
 *     _splitpath @ 0x180094CB0 (_splitpath.c)
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     strncpy_s @ 0x18009F3A0 (strncpy_s.c)
 */

__int64 __fastcall splitpath_helper(
        char *Source,
        char *Destination,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        char *Destinationa,
        unsigned __int64 a7,
        char *a8,
        unsigned __int64 a9)
{
  unsigned __int64 v12; // rax
  int v13; // ecx
  char *v14; // rdi
  char v15; // al
  char *v16; // r14
  const char *v17; // rbp
  char *v18; // rdi
  rsize_t v19; // rdi
  rsize_t v20; // rdi

  v12 = a3;
  v13 = 0;
  if ( !Source )
    goto LABEL_4;
  if ( Destination )
  {
    if ( !a3 )
      goto LABEL_4;
  }
  else if ( a3 )
  {
LABEL_4:
    v13 = 1;
    goto LABEL_57;
  }
  if ( a4 )
  {
    if ( !a5 )
      goto LABEL_4;
  }
  else if ( a5 )
  {
    goto LABEL_4;
  }
  if ( Destinationa )
  {
    if ( !a7 )
      goto LABEL_4;
  }
  else if ( a7 )
  {
    goto LABEL_4;
  }
  if ( a8 )
  {
    if ( !a9 )
      goto LABEL_4;
  }
  else if ( a9 )
  {
    goto LABEL_4;
  }
  v14 = Source;
  if ( *Source )
    v14 = Source + 1;
  if ( *v14 == 58 )
  {
    if ( Destination )
    {
      if ( a3 < 3 )
        goto LABEL_58;
      strncpy_s(Destination, 0xFFFFFFFFFFFFFFFFuLL, Source, 2uLL);
      v13 = 0;
    }
    Source = v14 + 1;
  }
  else if ( Destination )
  {
    *Destination = 0;
  }
  v15 = *Source;
  v16 = 0LL;
  v17 = 0LL;
  v18 = Source;
  if ( !*Source )
    goto LABEL_39;
  do
  {
    if ( v15 == 47 || v15 == 92 )
    {
      v16 = v18 + 1;
    }
    else if ( v15 == 46 )
    {
      v17 = v18;
    }
    v15 = *++v18;
  }
  while ( *v18 );
  if ( !v16 )
  {
LABEL_39:
    if ( a4 )
      *a4 = 0;
LABEL_41:
    if ( v17 && v17 >= Source )
    {
      if ( !Destinationa )
      {
LABEL_46:
        if ( !a8 )
          return 0LL;
        v19 = v18 - v17;
        if ( a9 > v19 )
        {
          strncpy_s(a8, 0xFFFFFFFFFFFFFFFFuLL, v17, v19);
          return 0LL;
        }
        goto LABEL_55;
      }
      if ( a7 > v17 - Source )
      {
        strncpy_s(Destinationa, 0xFFFFFFFFFFFFFFFFuLL, Source, v17 - Source);
        goto LABEL_46;
      }
LABEL_55:
      v13 = 0;
      goto LABEL_56;
    }
    if ( Destinationa )
    {
      v20 = v18 - Source;
      if ( a7 <= v20 )
        goto LABEL_55;
      strncpy_s(Destinationa, 0xFFFFFFFFFFFFFFFFuLL, Source, v20);
    }
    if ( a8 )
      *a8 = 0;
    return 0LL;
  }
  if ( !a4 )
  {
LABEL_38:
    Source = v16;
    goto LABEL_41;
  }
  if ( a5 > v16 - Source )
  {
    strncpy_s(a4, 0xFFFFFFFFFFFFFFFFuLL, Source, v16 - Source);
    goto LABEL_38;
  }
LABEL_56:
  v12 = a3;
LABEL_57:
  if ( Destination )
  {
LABEL_58:
    if ( v12 )
      *Destination = 0;
  }
  if ( a4 && a5 )
    *a4 = 0;
  if ( Destinationa && a7 )
    *Destinationa = 0;
  if ( a8 && a9 )
    *a8 = 0;
  if ( Source && !v13 )
    return 34LL;
  invalid_parameter();
  return 22LL;
}
