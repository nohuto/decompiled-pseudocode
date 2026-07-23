/*
 * XREFs of _wsplitpath_s @ 0x1403E6C70
 * Callers:
 *     <none>
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     wcsncpy_s @ 0x1403E7870 (wcsncpy_s.c)
 */

errno_t __cdecl wsplitpath_s(
        const wchar_t *FullPath,
        wchar_t *Drive,
        size_t DriveSize,
        wchar_t *Dir,
        size_t DirSize,
        wchar_t *Filename,
        size_t FilenameSize,
        wchar_t *Ext,
        size_t ExtSize)
{
  size_t v12; // rax
  int v13; // ecx
  const wchar_t *v14; // rbx
  wchar_t v15; // ax
  const wchar_t *v16; // rbp
  const wchar_t *v17; // rsi
  const wchar_t *v18; // rbx
  rsize_t v19; // r9
  rsize_t v20; // r9
  rsize_t v21; // rbx
  rsize_t v22; // rbx

  v12 = DriveSize;
  v13 = 0;
  if ( !FullPath )
    goto LABEL_4;
  if ( Drive )
  {
    if ( !DriveSize )
      goto LABEL_4;
  }
  else if ( DriveSize )
  {
LABEL_4:
    v13 = 1;
    goto LABEL_57;
  }
  if ( Dir )
  {
    if ( !DirSize )
      goto LABEL_4;
  }
  else if ( DirSize )
  {
    goto LABEL_4;
  }
  if ( Filename )
  {
    if ( !FilenameSize )
      goto LABEL_4;
  }
  else if ( FilenameSize )
  {
    goto LABEL_4;
  }
  if ( Ext )
  {
    if ( !ExtSize )
      goto LABEL_4;
  }
  else if ( ExtSize )
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
      if ( DriveSize < 3 )
        goto LABEL_58;
      wcsncpy_s(Drive, DriveSize, FullPath, 2uLL);
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
        if ( ExtSize > v21 )
        {
          wcsncpy_s(Ext, ExtSize, v17, v21);
          return 0;
        }
        goto LABEL_55;
      }
      v20 = v17 - FullPath;
      if ( FilenameSize > v20 )
      {
        wcsncpy_s(Filename, FilenameSize, FullPath, v20);
        goto LABEL_46;
      }
LABEL_55:
      v13 = 0;
      goto LABEL_56;
    }
    if ( Filename )
    {
      v22 = v18 - FullPath;
      if ( FilenameSize <= v22 )
        goto LABEL_55;
      wcsncpy_s(Filename, FilenameSize, FullPath, v22);
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
  if ( DirSize > v19 )
  {
    wcsncpy_s(Dir, DirSize, FullPath, v19);
    goto LABEL_38;
  }
LABEL_56:
  v12 = DriveSize;
LABEL_57:
  if ( Drive )
  {
LABEL_58:
    if ( v12 )
      *Drive = 0;
  }
  if ( Dir && DirSize )
    *Dir = 0;
  if ( Filename && FilenameSize )
    *Filename = 0;
  if ( Ext && ExtSize )
    *Ext = 0;
  if ( FullPath && !v13 )
    return 34;
  _misaligned_access();
  return 22;
}
