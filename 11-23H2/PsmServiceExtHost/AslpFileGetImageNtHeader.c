/*
 * XREFs of AslpFileGetImageNtHeader @ 0x18009B860
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x180099CFC (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x18009AD0C (AslpFileGetClrVersion.c)
 *     AslpFileGetExeWrapper @ 0x18009B144 (AslpFileGetExeWrapper.c)
 *     AslpFileGetNtHeaderAttributes @ 0x18009B95C (AslpFileGetNtHeaderAttributes.c)
 *     AslpFileQueryExportName @ 0x18009CA68 (AslpFileQueryExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageNtHeader(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-28h]
  int v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp+10h]

  if ( *(_DWORD *)(a2 + 56) == 6 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    v3 = *(int *)(v9 + 60);
    v4 = v3 + v9;
    v5 = v3 + 264;
    if ( *(_QWORD *)(a2 + 24) < v5 || *(_QWORD *)(a2 + 40) < v5 )
    {
      v2 = -1073741701;
      v8 = -1073741701;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetImageNtHeader",
        2923,
        (unsigned int)"File mapping invalid [%x]",
        v8);
    }
    else
    {
      *a1 = v4;
      return 0;
    }
  }
  else
  {
    v2 = -1073741637;
    v7 = -1073741637;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetImageNtHeader",
      2911,
      (unsigned int)"File mapping not a PE [%x]",
      v7);
  }
  return v2;
}
