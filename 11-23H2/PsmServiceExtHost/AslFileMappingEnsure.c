/*
 * XREFs of AslFileMappingEnsure @ 0x180099998
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x180099B38 (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x180099CFC (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x18009A3F0 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x18009AF08 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x18009B448 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x18009B5E8 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x18009BAE4 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionBlock @ 0x18009BCBC (AslpFileGetVersionBlock.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x180099F60 (AslpFileMappingGetFileKind.c)
 *     RtlFileMapMapView @ 0x18009A204 (RtlFileMapMapView.c)
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
