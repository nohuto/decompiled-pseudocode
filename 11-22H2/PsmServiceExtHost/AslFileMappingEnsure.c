/*
 * XREFs of AslFileMappingEnsure @ 0x180099CF8
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x180099E98 (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x18009A05C (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x18009A750 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x18009B268 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x18009B7A8 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x18009B948 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x18009BE44 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionBlock @ 0x18009C01C (AslpFileGetVersionBlock.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x18009A2C0 (AslpFileMappingGetFileKind.c)
 *     RtlFileMapMapView @ 0x18009A564 (RtlFileMapMapView.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int v3; // edi
  _DWORD *v4; // rsi
  int FileKind; // eax
  int v6; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 72) )
  {
    if ( *(_DWORD *)(a1 + 56) != 1 )
      return *(_QWORD *)(a1 + 32) == 0LL ? 0xC000046D : 0;
    return 3221225758LL;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    return 0;
  }
  else
  {
    v4 = (_DWORD *)(a1 + 56);
    if ( *(_DWORD *)(a1 + 56) == 1 )
      return 3221225758LL;
    v3 = RtlFileMapMapView(a1 + 8, 0LL);
    if ( v3 >= 0 )
    {
      if ( *(_BYTE *)(a1 + 51) )
      {
        *v4 = 6;
      }
      else
      {
        FileKind = AslpFileMappingGetFileKind(a1 + 8, v4);
        v3 = FileKind;
        if ( FileKind < 0 )
        {
          v6 = FileKind;
          AslLogCallPrintf(
            1LL,
            (unsigned int)"AslFileMappingEnsure",
            591,
            (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]",
            *(_QWORD *)a1,
            v6);
          *v4 = 3;
        }
      }
    }
  }
  return (unsigned int)v3;
}
