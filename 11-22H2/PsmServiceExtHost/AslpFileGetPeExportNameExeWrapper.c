/*
 * XREFs of AslpFileGetPeExportNameExeWrapper @ 0x18009BE44
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009A750 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x180099828 (AslStringXmlSanitize.c)
 *     AslFileMappingEnsure @ 0x180099CF8 (AslFileMappingEnsure.c)
 *     AslpFileGetExeWrapper @ 0x18009B4A4 (AslpFileGetExeWrapper.c)
 *     AslpFileGetExportName @ 0x18009B658 (AslpFileGetExportName.c)
 */

__int64 __fastcall AslpFileGetPeExportNameExeWrapper(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  const char *v6; // r9
  int v7; // r8d
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-28h]
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF
  PWSTR v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0;
  v14 = 0LL;
  v4 = AslFileMappingEnsure(a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 56) == 6 )
    {
      if ( (int)AslpFileGetExeWrapper(&v13, a2) < 0 )
      {
        v9 = 2;
      }
      else
      {
        *(_QWORD *)(a1 + 816) = v13;
        v9 = 1;
        *(_DWORD *)(a1 + 800) = 2;
        *(_QWORD *)(a1 + 808) = 4LL;
      }
      *(_DWORD *)(a1 + 824) |= v9;
      if ( (int)AslpFileGetExportName(&v14, a2) >= 0 )
      {
        v4 = AslStringXmlSanitize(v14);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = "AslStringXmlSanitize failed [%x]";
          v7 = 2480;
          goto LABEL_3;
        }
        *(_DWORD *)(a1 + 736) = 4;
        v11 = -1LL;
        do
          ++v11;
        while ( *(_WORD *)(v10 + 2 * v11) );
        *(_DWORD *)(a1 + 760) |= 5u;
        *(_QWORD *)(a1 + 744) = v11;
        *(_QWORD *)(a1 + 752) = v10;
        return 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 824) |= 2u;
    }
    *(_DWORD *)(a1 + 760) |= 2u;
    return 0;
  }
  v6 = "AslFileMappingEnsure failed [%x]";
  v7 = 2445;
LABEL_3:
  v12 = v4;
  AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetPeExportNameExeWrapper", v7, (_DWORD)v6, v12);
  return v5;
}
