/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x140758FD8
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1407578E4 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1407590E0 (AslFileMappingEnsure.c)
 *     AslpFileGetVersionAttributes @ 0x140759408 (AslpFileGetVersionAttributes.c)
 *     AslpFileGetChecksumAttributes @ 0x140A5808C (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x140A58408 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x140A588A0 (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140A58924 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140A58AC8 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x140A58F90 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x140A59778 (AslpFileLargeEnsureLargeFileMapping.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v5; // eax
  int HeaderAttributesNE; // ebx
  int v7; // esi
  __int64 j; // r13
  int VersionAttributes; // eax
  int v11; // edx
  int *i; // rax
  int v13; // ecx
  int v14; // ecx
  int v15; // edx
  _DWORD *v16; // r8
  bool v17; // zf
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax

  if ( !a3 )
    return 0;
  if ( *(_DWORD *)(a2 + 64) == 1 )
  {
    v11 = 0;
    for ( i = (int *)(a1 + 24); ; i += 8 )
    {
      v13 = *i;
      if ( !v11 || v11 == 17 )
        break;
      if ( v11 == 28 )
      {
        *((_QWORD *)i - 1) = 1LL;
LABEL_27:
        *(i - 6) = 2;
        v14 = v13 | 1;
        *((_QWORD *)i - 2) = 4LL;
        goto LABEL_28;
      }
      v14 = v13 | 2;
LABEL_28:
      *i = v14;
      if ( ++v11 >= 34 )
        return 0;
    }
    *((_QWORD *)i - 1) = 0LL;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(a2 + 80) )
  {
    v15 = 0;
    v16 = (_DWORD *)(a1 + 24);
    do
    {
      if ( (unsigned int)v15 > 0x1C )
      {
        if ( v15 != 29 && v15 != 30 && v15 != 31 )
        {
          v17 = v15 == 33;
LABEL_42:
          if ( !v17 )
            *v16 |= 2u;
        }
      }
      else if ( v15 != 28 && v15 != 1 && v15 != 17 && v15 != 18 && v15 != 19 )
      {
        v17 = v15 == 22;
        goto LABEL_42;
      }
      ++v15;
      v16 += 8;
    }
    while ( v15 < 34 );
  }
  v5 = AslFileMappingEnsure(a2);
  HeaderAttributesNE = v5;
  if ( v5 == -1073741801 )
  {
    if ( !*(_DWORD *)(a2 + 80) )
    {
      HeaderAttributesNE = AslpFileLargeEnsureLargeFileMapping(a1, a2);
      if ( HeaderAttributesNE >= 0 )
        goto LABEL_6;
    }
  }
  else if ( v5 >= 0 )
  {
LABEL_6:
    v7 = 0;
    for ( j = 0LL; ; j += 32LL )
    {
      if ( ((a3 >> v7) & 1) != 0 && (*(_DWORD *)(a1 + j + 24) & 3) == 0 )
      {
        if ( v7 > 17 )
        {
          if ( v7 <= 26 )
          {
            switch ( v7 )
            {
              case 26:
                goto LABEL_81;
              case 18:
              case 19:
                goto LABEL_86;
              case 20:
              case 21:
                HeaderAttributesNE = AslpFileGetHeaderAttributesNE(a1, a2);
                if ( HeaderAttributesNE < 0 )
                  goto LABEL_48;
                goto LABEL_8;
              case 22:
                goto LABEL_86;
            }
            if ( v7 != 24 )
            {
              HeaderAttributesNE = AslpFileGetPeExportNameExeWrapper(a1, a2);
              if ( HeaderAttributesNE < 0 )
                break;
              goto LABEL_8;
            }
            goto LABEL_17;
          }
          if ( v7 == 27 )
          {
            HeaderAttributesNE = AslpFileGetClrVersionAttribute(a1, a2);
            if ( HeaderAttributesNE < 0 )
              break;
            goto LABEL_8;
          }
          if ( v7 == 28 )
          {
            HeaderAttributesNE = AslpFileGetFileKindDetailAttribute(a1, a2);
            if ( HeaderAttributesNE < 0 )
              break;
            goto LABEL_8;
          }
          if ( v7 != 32 )
          {
LABEL_86:
            HeaderAttributesNE = AslpFileGetHeaderAttributesPE(a1, a2);
            if ( HeaderAttributesNE < 0 )
              break;
            goto LABEL_8;
          }
        }
        else
        {
          if ( v7 == 17 )
          {
            switch ( *(_DWORD *)(a2 + 64) )
            {
              case 4:
                v22 = 1LL;
                break;
              case 5:
                v22 = 2LL;
                break;
              case 6:
                v22 = 3LL;
                break;
              default:
                v22 = 0LL;
                break;
            }
            *(_DWORD *)(a1 + 568) |= 1u;
            *(_DWORD *)(a1 + 544) = 2;
            *(_QWORD *)(a1 + 552) = 4LL;
            *(_QWORD *)(a1 + 560) = v22;
            goto LABEL_8;
          }
          if ( v7 > 8 )
          {
            if ( v7 != 9 && v7 != 10 )
            {
              v18 = v7 - 11;
              if ( v7 != 11 )
                goto LABEL_53;
            }
            goto LABEL_17;
          }
          if ( v7 == 8 )
            goto LABEL_17;
          if ( v7 )
          {
            if ( v7 == 1 )
              goto LABEL_86;
            v18 = v7 - 2;
            if ( v7 == 2 )
            {
LABEL_81:
              HeaderAttributesNE = AslpFileGetChecksumAttributes(a1, a2);
              if ( HeaderAttributesNE < 0 )
                break;
              goto LABEL_8;
            }
LABEL_53:
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  if ( (unsigned int)(v21 - 1) >= 2 )
                    return (unsigned int)-1073741595;
                }
              }
            }
LABEL_17:
            VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
            if ( VersionAttributes <= -1073741688 || (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 )
              AslLogCallPrintf(1LL);
            goto LABEL_8;
          }
        }
        v23 = *(_QWORD *)(a2 + 24);
        *(_DWORD *)(a1 + 1048) |= 1u;
        *(_DWORD *)(a1 + 24) |= 1u;
        *(_QWORD *)(a1 + 16) = (unsigned int)v23;
        *(_DWORD *)(a1 + 1024) = 3;
        *(_QWORD *)(a1 + 1032) = 8LL;
        *(_QWORD *)(a1 + 1040) = v23;
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = 4LL;
      }
LABEL_8:
      if ( ++v7 >= 34 )
        return 0;
    }
  }
LABEL_48:
  AslLogCallPrintf(1LL);
  return (unsigned int)HeaderAttributesNE;
}
