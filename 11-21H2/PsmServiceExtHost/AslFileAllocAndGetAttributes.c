/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x18009FDAC
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1800981CC (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x18009F33C (AslFileMappingEnsure.c)
 *     AslpFileGetChecksumAttributes @ 0x1800A04D8 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1800A0878 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x1800A0D30 (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1800A0DB4 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1800A0F54 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1800A1448 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionAttributes @ 0x1800A156C (AslpFileGetVersionAttributes.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1800A61E8 (AslpFileLargeEnsureLargeFileMapping.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int PeExportNameExeWrapper; // ebx
  int v6; // edx
  int *i; // rcx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  __int64 j; // r13
  int VersionAttributes; // eax
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rax

  if ( a3 )
  {
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
        if ( v10 != 1 && (v10 <= 0x10 || v10 > 0x13 && v10 != 22 && (v10 <= 0x1B || v10 > 0x1F && v10 != 33)) )
          *v11 |= 2u;
        ++v10;
        v11 += 8;
      }
      while ( (int)v10 < 34 );
    }
    v12 = AslFileMappingEnsure(a2);
    PeExportNameExeWrapper = v12;
    if ( v12 == -1073741801 )
    {
      if ( *(_DWORD *)(a2 + 72) )
        goto LABEL_28;
      PeExportNameExeWrapper = AslpFileLargeEnsureLargeFileMapping(a1, a2);
      if ( PeExportNameExeWrapper < 0 )
        goto LABEL_28;
    }
    else if ( v12 < 0 )
    {
LABEL_28:
      AslLogCallPrintf(1LL);
      return (unsigned int)PeExportNameExeWrapper;
    }
    v13 = 0;
    for ( j = 0LL; ; j += 32LL )
    {
      if ( ((a3 >> v13) & 1) != 0 && (*(_BYTE *)(a1 + j + 24) & 3) == 0 )
      {
        if ( v13 > 0x17 )
        {
          switch ( v13 )
          {
            case 0x18u:
              goto LABEL_41;
            case 0x19u:
LABEL_78:
              PeExportNameExeWrapper = AslpFileGetPeExportNameExeWrapper(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_28;
              goto LABEL_44;
            case 0x1Au:
LABEL_76:
              PeExportNameExeWrapper = AslpFileGetChecksumAttributes(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_28;
              goto LABEL_44;
            case 0x1Bu:
              PeExportNameExeWrapper = AslpFileGetClrVersionAttribute(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_28;
              goto LABEL_44;
            case 0x1Cu:
              PeExportNameExeWrapper = AslpFileGetFileKindDetailAttribute(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_28;
              goto LABEL_44;
          }
          if ( v13 <= 0x1F )
            goto LABEL_59;
          if ( v13 != 32 )
          {
            v18 = v13 == 33;
            goto LABEL_58;
          }
        }
        else
        {
          if ( v13 == 23 )
            goto LABEL_78;
          if ( v13 > 0x11 )
          {
            if ( v13 > 0x13 )
            {
              if ( v13 <= 0x15 )
              {
                PeExportNameExeWrapper = AslpFileGetHeaderAttributesNE(a1, a2);
                if ( PeExportNameExeWrapper < 0 )
                  goto LABEL_28;
                goto LABEL_44;
              }
              v18 = v13 == 22;
LABEL_58:
              if ( !v18 )
                return (unsigned int)-1073741595;
            }
LABEL_59:
            PeExportNameExeWrapper = AslpFileGetHeaderAttributesPE(a1, a2);
            if ( PeExportNameExeWrapper < 0 )
              goto LABEL_28;
            goto LABEL_44;
          }
          if ( v13 == 17 )
          {
            switch ( *(_DWORD *)(a2 + 56) )
            {
              case 4:
                v17 = 1LL;
                break;
              case 5:
                v17 = 2LL;
                break;
              case 6:
                v17 = 3LL;
                break;
              default:
                v17 = 0LL;
                break;
            }
            *(_DWORD *)(a1 + 568) |= 1u;
            *(_DWORD *)(a1 + 544) = 2;
            *(_QWORD *)(a1 + 552) = 4LL;
            *(_QWORD *)(a1 + 560) = v17;
            goto LABEL_44;
          }
          if ( v13 )
          {
            if ( v13 == 1 )
              goto LABEL_59;
            if ( v13 == 2 )
              goto LABEL_76;
LABEL_41:
            VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
            if ( VersionAttributes <= -1073741688 || (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 )
              AslLogCallPrintf(1LL);
            goto LABEL_44;
          }
        }
        v19 = *(_QWORD *)(a2 + 24);
        *(_DWORD *)(a1 + 1048) |= 1u;
        *(_DWORD *)(a1 + 24) |= 1u;
        *(_QWORD *)(a1 + 16) = (unsigned int)v19;
        *(_DWORD *)(a1 + 1024) = 3;
        *(_QWORD *)(a1 + 1032) = 8LL;
        *(_QWORD *)(a1 + 1040) = v19;
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = 4LL;
      }
LABEL_44:
      if ( (int)++v13 >= 34 )
        return 0;
    }
  }
  return 0;
}
