/*
 * XREFs of AslFileMappingEnsureMappedAs @ 0x180099DC8
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1800903E4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1800958F8 (SdbpCheckMatchingTextEntry.c)
 *     AslpFileGetChecksumAttributes @ 0x18009AEC8 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x18009A2C0 (AslpFileMappingGetFileKind.c)
 *     RtlFileMapMapView @ 0x18009A564 (RtlFileMapMapView.c)
 */

__int64 __fastcall AslFileMappingEnsureMappedAs(__int64 a1)
{
  _DWORD *v1; // rsi
  int v2; // eax
  int v5; // eax
  unsigned int v6; // ebx
  int FileKind; // eax

  v1 = (_DWORD *)(a1 + 56);
  v2 = *(_DWORD *)(a1 + 56);
  if ( *(_DWORD *)(a1 + 72) )
  {
    if ( v2 != 1 )
      return 3221226605LL;
    return 3221225758LL;
  }
  if ( v2 == 1 )
    return 3221225758LL;
  v5 = RtlFileMapMapView(a1 + 8, 0LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 51) )
    {
      *v1 = 6;
    }
    else
    {
      FileKind = AslpFileMappingGetFileKind(a1 + 8, v1);
      v6 = FileKind;
      if ( FileKind < 0 )
      {
        AslLogCallPrintf(
          1LL,
          (unsigned int)"AslFileMappingEnsureMappedAs",
          503,
          (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]",
          *(_QWORD *)a1,
          FileKind);
        *v1 = 3;
      }
    }
  }
  else if ( v5 == -1073741554 && !*(_BYTE *)(a1 + 51) )
  {
    return 0;
  }
  return v6;
}
