/*
 * XREFs of FsRtlRemoveDotsFromPath @ 0x1407F96D0
 * Callers:
 *     sub_1409379A8 @ 0x1409379A8 (sub_1409379A8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlRemoveDotsFromPath(PWSTR OriginalString, USHORT PathLength, USHORT *NewLength)
{
  unsigned __int16 v3; // r10
  __int16 v6; // r9
  unsigned __int16 v7; // ax
  int v8; // r8d
  __int64 v9; // rcx
  WCHAR v11; // cx
  int v12; // r11d
  bool v13; // sf
  __int64 v14; // rcx
  WCHAR *v15; // rdi

  v3 = PathLength >> 1;
  v6 = 0;
  if ( PathLength >> 1 == 3 )
  {
    if ( *OriginalString == 92 )
    {
      if ( OriginalString[1] != 46 || OriginalString[2] != 46 )
        goto LABEL_6;
      return -1073741192;
    }
LABEL_4:
    if ( *OriginalString != 46 || OriginalString[1] != 46 || OriginalString[2] != 92 )
      goto LABEL_5;
    return -1073741192;
  }
  if ( v3 == 2 )
  {
    if ( *OriginalString != 46 || OriginalString[1] != 46 )
      goto LABEL_6;
    return -1073741192;
  }
  if ( v3 > 2u )
    goto LABEL_4;
LABEL_5:
  if ( v3 )
  {
LABEL_6:
    v7 = 0;
    while ( v7 )
    {
      v8 = v3 - 1;
      if ( v7 < v8 && OriginalString[v7] == 92 && OriginalString[v7 + 1] == 92 )
        goto LABEL_13;
      v9 = v7;
      if ( OriginalString[v7] != 46 )
        goto LABEL_11;
      if ( v7 == v8 )
      {
        if ( OriginalString[v7 - 1] == 92 )
        {
          if ( v6 > 1 )
            --v6;
          goto LABEL_13;
        }
        goto LABEL_22;
      }
      v11 = OriginalString[v7 + 1];
      if ( v11 == 92 )
      {
        if ( OriginalString[v7 - 1] == 92 )
        {
          ++v7;
          goto LABEL_13;
        }
LABEL_22:
        OriginalString[v6] = 46;
LABEL_12:
        ++v6;
        goto LABEL_13;
      }
      if ( v11 != 46 )
        goto LABEL_22;
      if ( OriginalString[v7 - 1] != 92 )
        goto LABEL_22;
      v12 = v3 - 2;
      if ( v7 != v12 && OriginalString[v7 + 2] != 92 )
        goto LABEL_22;
      v6 -= 2;
      v13 = v6 < 0;
      if ( v6 <= 0 )
      {
LABEL_44:
        if ( v13 )
          return -1073741192;
      }
      else
      {
        while ( OriginalString[(unsigned __int16)v6] != 92 )
        {
          v13 = --v6 < 0;
          if ( v6 <= 0 )
            goto LABEL_44;
        }
      }
      if ( OriginalString[v6] != 92 )
        return -1073741192;
      if ( !v6 )
        v6 = v7 == v12;
      ++v7;
LABEL_13:
      if ( ++v7 >= v3 )
        goto LABEL_14;
    }
    v9 = 0LL;
LABEL_11:
    OriginalString[v6] = OriginalString[v9];
    goto LABEL_12;
  }
LABEL_14:
  *NewLength = 2 * v6;
  if ( v6 < (int)v3 )
  {
    v14 = (__int16)(v3 - v6);
    v15 = &OriginalString[v6];
    while ( v14 )
    {
      *v15++ = 0;
      --v14;
    }
  }
  return 0;
}
