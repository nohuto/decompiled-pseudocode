/*
 * XREFs of _wsplitpath_s @ 0x18009ECD0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     wcsncpy_s @ 0x18009F960 (wcsncpy_s.c)
 */

errno_t __cdecl wsplitpath_s(
        const wchar_t *FullPath,
        wchar_t *Drive,
        size_t DriveCount,
        wchar_t *Dir,
        size_t DirCount,
        wchar_t *Filename,
        size_t FilenameCount,
        wchar_t *Ext,
        size_t ExtCount)
{
  size_t v12; // rax
  int v13; // ecx
  const wchar_t *v14; // rbx
  wchar_t v15; // ax
  const wchar_t *v16; // rbp
  const wchar_t *v17; // rsi
  const wchar_t *v18; // rbx
  size_t v19; // r9
  size_t v20; // r9
  size_t v21; // rbx
  size_t v22; // rbx

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
      wcsncpy_s(Drive, DriveCount, FullPath, 2uLL);
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
        v21 = v18 - v17;
        if ( ExtCount > v21 )
        {
          wcsncpy_s(Ext, ExtCount, v17, v21);
          return 0;
        }
        goto LABEL_55;
      }
      v20 = v17 - FullPath;
      if ( FilenameCount > v20 )
      {
        wcsncpy_s(Filename, FilenameCount, FullPath, v20);
        goto LABEL_46;
      }
LABEL_55:
      v13 = 0;
      goto LABEL_56;
    }
    if ( Filename )
    {
      v22 = v18 - FullPath;
      if ( FilenameCount <= v22 )
        goto LABEL_55;
      wcsncpy_s(Filename, FilenameCount, FullPath, v22);
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
  v19 = v16 - FullPath;
  if ( DirCount > v19 )
  {
    wcsncpy_s(Dir, DirCount, FullPath, v19);
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
