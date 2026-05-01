/*
 * XREFs of AslpFileMappingGetFileKind @ 0x18009F91C
 * Callers:
 *     AslFileMappingEnsure @ 0x18009F33C (AslFileMappingEnsure.c)
 *     AslFileMappingEnsureMappedAs @ 0x18009F40C (AslFileMappingEnsureMappedAs.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1800A61E8 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileMappingGetFileKind(_QWORD *a1, int *a2)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rax

  v3 = 0;
  if ( !a1[2] || !a1[4] )
  {
    *a2 = 1;
    return 0LL;
  }
  v4 = 3;
  if ( a1[2] < 0x40uLL )
  {
    *a2 = 3;
    return 0LL;
  }
  v5 = a1[3];
  if ( (unsigned __int64)(v5 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = -1073741811;
    AslLogCallPrintf(1LL);
  }
  else if ( *(_WORD *)v5 == 23117 )
  {
    v4 = 4;
    v6 = *(unsigned int *)(v5 + 60);
    if ( a1[2] >= (unsigned __int64)(v6 + 4) )
    {
      if ( *(_DWORD *)((unsigned int)v6 + v5) == 17744 )
      {
        v4 = 6;
      }
      else if ( *(_WORD *)((unsigned int)v6 + v5) == 17742 )
      {
        v4 = 5;
      }
    }
  }
  *a2 = v4;
  return v3;
}
