/*
 * XREFs of _splitpath_s @ 0x18009E7C0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     strncpy_s @ 0x18009F3A0 (strncpy_s.c)
 */

errno_t __cdecl splitpath_s(
        const char *FullPath,
        char *Drive,
        size_t DriveCount,
        char *Dir,
        size_t DirCount,
        char *Filename,
        size_t FilenameCount,
        char *Ext,
        size_t ExtCount)
{
  size_t v12; // rax
  int v13; // ecx
  const char *v14; // rdi
  char v15; // al
  const char *v16; // rbp
  const char *v17; // rsi
  const char *v18; // rdi
  size_t v19; // rdi
  size_t v20; // rdi

  v12 = DriveCount;
  v13 = 0;
  if ( !FullPath )
    goto LABEL_4;
  if ( Drive )
  {
    if ( !DriveCount )
      goto LABEL_4;
  }
  else if ( DriveCount )
  {
LABEL_4:
    v13 = 1;
    goto LABEL_57;
  }
  if ( Dir )
  {
    if ( !DirCount )
      goto LABEL_4;
  }
  else if ( DirCount )
  {
    goto LABEL_4;
  }
  if ( Filename )
  {
    if ( !FilenameCount )
      goto LABEL_4;
  }
  else if ( FilenameCount )
  {
    goto LABEL_4;
  }
  if ( Ext )
  {
    if ( !ExtCount )
      goto LABEL_4;
  }
  else if ( ExtCount )
  {
    goto LABEL_4;
  }
  v14 = FullPath;
  if ( *FullPath )
    v14 = FullPath + 1;
  if ( *v14 == 58 )
  {
    if ( Drive )
    {
      if ( DriveCount < 3 )
        goto LABEL_58;
      strncpy_s(Drive, DriveCount, FullPath, 2uLL);
      v13 = 0;
    }
    FullPath = v14 + 1;
  }
  else if ( Drive )
  {
    *Drive = 0;
  }
  v15 = *FullPath;
  v16 = 0LL;
  v17 = 0LL;
  v18 = FullPath;
  if ( !*FullPath )
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
    if ( Dir )
      *Dir = 0;
LABEL_41:
    if ( v17 && v17 >= FullPath )
    {
      if ( !Filename )
      {
LABEL_46:
        if ( !Ext )
          return 0;
        v19 = v18 - v17;
        if ( ExtCount > v19 )
        {
          strncpy_s(Ext, ExtCount, v17, v19);
          return 0;
        }
        goto LABEL_55;
      }
      if ( FilenameCount > v17 - FullPath )
      {
        strncpy_s(Filename, FilenameCount, FullPath, v17 - FullPath);
        goto LABEL_46;
      }
LABEL_55:
      v13 = 0;
      goto LABEL_56;
    }
    if ( Filename )
    {
      v20 = v18 - FullPath;
      if ( FilenameCount <= v20 )
        goto LABEL_55;
      strncpy_s(Filename, FilenameCount, FullPath, v20);
    }
    if ( Ext )
      *Ext = 0;
    return 0;
  }
  if ( !Dir )
  {
LABEL_38:
    FullPath = v16;
    goto LABEL_41;
  }
  if ( DirCount > v16 - FullPath )
  {
    strncpy_s(Dir, DirCount, FullPath, v16 - FullPath);
    goto LABEL_38;
  }
LABEL_56:
  v12 = DriveCount;
LABEL_57:
  if ( Drive )
  {
LABEL_58:
    if ( v12 )
      *Drive = 0;
  }
  if ( Dir && DirCount )
    *Dir = 0;
  if ( Filename && FilenameCount )
    *Filename = 0;
  if ( Ext && ExtCount )
    *Ext = 0;
  if ( FullPath && !v13 )
    return 34;
  invalid_parameter();
  return 22;
}
