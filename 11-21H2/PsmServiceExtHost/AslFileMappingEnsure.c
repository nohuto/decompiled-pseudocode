/*
 * XREFs of AslFileMappingEnsure @ 0x18009F33C
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x18009F4DC (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x18009F6A0 (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x18009FDAC (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1800A0878 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1800A0DB4 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1800A0F54 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1800A1448 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionBlock @ 0x1800A1620 (AslpFileGetVersionBlock.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x18009F91C (AslpFileMappingGetFileKind.c)
 *     RtlFileMapMapView @ 0x18009FBC0 (RtlFileMapMapView.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int FileKind; // edi
  _DWORD *v4; // rsi

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
    FileKind = RtlFileMapMapView(a1 + 8, 0LL);
    if ( FileKind >= 0 )
    {
      if ( *(_BYTE *)(a1 + 51) )
      {
        *v4 = 6;
      }
      else
      {
        FileKind = AslpFileMappingGetFileKind(a1 + 8, v4);
        if ( FileKind < 0 )
        {
          AslLogCallPrintf(1LL);
          *v4 = 3;
        }
      }
    }
  }
  return (unsigned int)FileKind;
}
