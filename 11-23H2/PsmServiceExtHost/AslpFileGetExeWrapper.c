/*
 * XREFs of AslpFileGetExeWrapper @ 0x18009B144
 * Callers:
 *     AslpFileGetPeExportNameExeWrapper @ 0x18009BAE4 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x18009B860 (AslpFileGetImageNtHeader.c)
 *     AslpFileHasActiveMarkWrapper @ 0x18009C2EC (AslpFileHasActiveMarkWrapper.c)
 *     AslpFileHasSecuromWrapper @ 0x18009C45C (AslpFileHasSecuromWrapper.c)
 *     AslpHasStarForceWrapper @ 0x18009D294 (AslpHasStarForceWrapper.c)
 */

__int64 __fastcall AslpFileGetExeWrapper(_DWORD *a1, __int64 a2)
{
  int ImageNtHeader; // eax
  int HasActiveMarkWrapper; // ebx
  __int64 v7; // rdi
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  *a1 = 0;
  v10 = 0LL;
  if ( *(_QWORD *)(a2 + 24) >= 0x100000000uLL )
    return 0LL;
  ImageNtHeader = AslpFileGetImageNtHeader(&v10, a2);
  HasActiveMarkWrapper = ImageNtHeader;
  if ( ImageNtHeader >= 0 )
  {
    v7 = v10;
    if ( (unsigned int)AslpFileHasSecuromWrapper(v10) )
    {
      *a1 = 1;
    }
    else
    {
      HasActiveMarkWrapper = AslpFileHasActiveMarkWrapper(&v9, v7, a2);
      if ( HasActiveMarkWrapper < 0 )
      {
        if ( HasActiveMarkWrapper == -1073741275 )
          AslLogCallPrintf(
            2LL,
            (unsigned int)"AslpFileGetExeWrapper",
            3000,
            (unsigned int)"AslpFileHasActiveMarkWrapper failed (FileSize: %I64u) [%x]",
            *(_QWORD *)(a2 + 24),
            -1073741275,
            -1073741275);
        else
          AslLogCallPrintf(
            1LL,
            (unsigned int)"AslpFileGetExeWrapper",
            3002,
            (unsigned int)"AslpFileHasActiveMarkWrapper failed [%x]",
            HasActiveMarkWrapper);
        return (unsigned int)HasActiveMarkWrapper;
      }
      if ( v9 )
      {
        *a1 = 2;
      }
      else if ( *(_DWORD *)v7 == 17744 && *(_BYTE *)(v7 + 26) == 83 && *(_BYTE *)(v7 + 27) == 82 )
      {
        *a1 = 3;
      }
      else if ( (unsigned int)AslpHasStarForceWrapper(v7) )
      {
        *a1 = 4;
      }
    }
    return 0;
  }
  else
  {
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetExeWrapper",
      2975,
      (unsigned int)"AslpFileGetImageNtHeader failed [%x]",
      ImageNtHeader);
  }
  return (unsigned int)HasActiveMarkWrapper;
}
