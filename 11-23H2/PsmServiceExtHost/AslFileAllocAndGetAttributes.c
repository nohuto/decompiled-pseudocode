/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x18009A3F0
 * Callers:
 *     SdbpCheckAllAttributes @ 0x180092EAC (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x180099998 (AslFileMappingEnsure.c)
 *     AslpFileGetChecksumAttributes @ 0x18009AB68 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x18009AF08 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x18009B3C4 (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x18009B448 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x18009B5E8 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x18009BAE4 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionAttributes @ 0x18009BC08 (AslpFileGetVersionAttributes.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1800A08FC (AslpFileLargeEnsureLargeFileMapping.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v5; // ebx
  int v6; // edx
  int *i; // rax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  _DWORD *v11; // r8
  bool v12; // zf
  int ChecksumAttributes; // eax
  const char *v14; // r9
  int v15; // r8d
  int v16; // esi
  __int64 j; // r13
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int VersionAttributes; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // [rsp+20h] [rbp-38h]

  if ( !a3 )
    return 0;
  if ( *(_DWORD *)(a2 + 56) == 1 )
  {
    v6 = 0;
    for ( i = (int *)(a1 + 24); ; i += 8 )
    {
      v8 = *i;
      if ( !v6 || v6 == 17 )
        break;
      if ( v6 == 28 )
      {
        *((_QWORD *)i - 1) = 1LL;
LABEL_11:
        *(i - 6) = 2;
        v9 = v8 | 1;
        *((_QWORD *)i - 2) = 4LL;
        goto LABEL_12;
      }
      v9 = v8 | 2;
LABEL_12:
      *i = v9;
      if ( ++v6 >= 34 )
        return 0;
    }
    *((_QWORD *)i - 1) = 0LL;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(a2 + 72) )
  {
    v10 = 0;
    v11 = (_DWORD *)(a1 + 24);
    do
    {
      if ( (unsigned int)v10 > 0x1C )
      {
        if ( v10 != 29 && v10 != 30 && v10 != 31 )
        {
          v12 = v10 == 33;
LABEL_27:
          if ( !v12 )
            *v11 |= 2u;
        }
      }
      else if ( v10 != 28 && v10 != 1 && v10 != 17 && v10 != 18 && v10 != 19 )
      {
        v12 = v10 == 22;
        goto LABEL_27;
      }
      ++v10;
      v11 += 8;
    }
    while ( v10 < 34 );
  }
  ChecksumAttributes = AslFileMappingEnsure(a2);
  v5 = ChecksumAttributes;
  if ( ChecksumAttributes == -1073741801 )
  {
    if ( !*(_DWORD *)(a2 + 72) )
    {
      ChecksumAttributes = AslpFileLargeEnsureLargeFileMapping(a1, a2);
      v5 = ChecksumAttributes;
      if ( ChecksumAttributes < 0 )
      {
        v14 = "AslpFileLargeEnsureLargeFileMapping failed [%x]";
        v15 = 501;
        goto LABEL_34;
      }
      goto LABEL_37;
    }
LABEL_36:
    v14 = "AslFileMappingEnsure failed [%x]";
    v15 = 505;
    goto LABEL_34;
  }
  if ( ChecksumAttributes < 0 )
    goto LABEL_36;
LABEL_37:
  v16 = 0;
  for ( j = 0LL; ; j += 32LL )
  {
    if ( ((a3 >> v16) & 1) == 0 || (*(_BYTE *)(a1 + j + 24) & 3) != 0 )
      goto LABEL_91;
    if ( v16 <= 17 )
    {
      if ( v16 == 17 )
      {
        switch ( *(_DWORD *)(a2 + 56) )
        {
          case 4:
            v23 = 1LL;
            break;
          case 5:
            v23 = 2LL;
            break;
          case 6:
            v23 = 3LL;
            break;
          default:
            v23 = 0LL;
            break;
        }
        *(_DWORD *)(a1 + 568) |= 1u;
        *(_DWORD *)(a1 + 544) = 2;
        *(_QWORD *)(a1 + 552) = 4LL;
        *(_QWORD *)(a1 + 560) = v23;
        goto LABEL_91;
      }
      if ( v16 > 8 )
      {
        if ( v16 != 9 && v16 != 10 )
        {
          v18 = v16 - 11;
          if ( v16 != 11 )
            goto LABEL_47;
        }
        goto LABEL_51;
      }
      if ( v16 == 8 )
        goto LABEL_51;
      if ( v16 )
      {
        if ( v16 == 1 )
          goto LABEL_85;
        v18 = v16 - 2;
        if ( v16 == 2 )
        {
LABEL_80:
          ChecksumAttributes = AslpFileGetChecksumAttributes(a1, a2);
          v5 = ChecksumAttributes;
          if ( ChecksumAttributes < 0 )
          {
            v14 = "AslpFileGetChecksumAttributes failed [%x]";
            v15 = 651;
            goto LABEL_34;
          }
          goto LABEL_91;
        }
LABEL_47:
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( (unsigned int)(v21 - 1) > 1 )
                return (unsigned int)-1073741595;
            }
          }
        }
LABEL_51:
        VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
        if ( VersionAttributes <= -1073741688 || (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 )
        {
          LODWORD(v26) = VersionAttributes;
          AslLogCallPrintf(
            1LL,
            (unsigned int)"AslFileAllocAndGetAttributes",
            568,
            (unsigned int)"AslpFileGetVersionAttributes failed [%x]",
            v26);
        }
        goto LABEL_91;
      }
      goto LABEL_87;
    }
    if ( v16 <= 26 )
    {
      switch ( v16 )
      {
        case 26:
          goto LABEL_80;
        case 18:
        case 19:
          goto LABEL_85;
        case 20:
        case 21:
          ChecksumAttributes = AslpFileGetHeaderAttributesNE(a1, a2);
          v5 = ChecksumAttributes;
          if ( ChecksumAttributes < 0 )
          {
            v14 = "AslpFileGetHeaderAttributesNE failed [%x]";
            v15 = 641;
            goto LABEL_34;
          }
          goto LABEL_91;
        case 22:
          goto LABEL_85;
      }
      if ( v16 != 24 )
      {
        ChecksumAttributes = AslpFileGetPeExportNameExeWrapper(a1, a2);
        v5 = ChecksumAttributes;
        if ( ChecksumAttributes < 0 )
        {
          v14 = "AslpFileGetPeExportNameExeWrapper failed [%x]";
          v15 = 622;
          goto LABEL_34;
        }
        goto LABEL_91;
      }
      goto LABEL_51;
    }
    if ( v16 == 27 )
      break;
    if ( v16 == 28 )
    {
      ChecksumAttributes = AslpFileGetFileKindDetailAttribute(a1, a2);
      v5 = ChecksumAttributes;
      if ( ChecksumAttributes < 0 )
      {
        v14 = "AslpFileGetFileKindDetailAttribute failed [%x]";
        v15 = 596;
        goto LABEL_34;
      }
      goto LABEL_91;
    }
    if ( v16 != 32 )
    {
LABEL_85:
      ChecksumAttributes = AslpFileGetHeaderAttributesPE(a1, a2);
      v5 = ChecksumAttributes;
      if ( ChecksumAttributes < 0 )
      {
        v14 = "AslpFileGetHeaderAttributesPE failed [%x]";
        v15 = 612;
        goto LABEL_34;
      }
      goto LABEL_91;
    }
LABEL_87:
    v24 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 1048) |= 1u;
    *(_DWORD *)(a1 + 24) |= 1u;
    *(_QWORD *)(a1 + 16) = (unsigned int)v24;
    *(_DWORD *)(a1 + 1024) = 3;
    *(_QWORD *)(a1 + 1032) = 8LL;
    *(_QWORD *)(a1 + 1040) = v24;
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 4LL;
LABEL_91:
    if ( ++v16 >= 34 )
      return 0;
  }
  ChecksumAttributes = AslpFileGetClrVersionAttribute(a1, a2);
  v5 = ChecksumAttributes;
  if ( ChecksumAttributes >= 0 )
    goto LABEL_91;
  v14 = "AslpFileGetClrVersionAttribute failed [%x]";
  v15 = 631;
LABEL_34:
  LODWORD(v26) = ChecksumAttributes;
  AslLogCallPrintf(1LL, (unsigned int)"AslFileAllocAndGetAttributes", v15, (_DWORD)v14, v26);
  return v5;
}
