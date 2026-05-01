/*
 * XREFs of AslpFileGetImageNtHeader @ 0x1800A11C4
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x18009F6A0 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x1800A067C (AslpFileGetClrVersion.c)
 *     AslpFileGetExeWrapper @ 0x1800A0AC0 (AslpFileGetExeWrapper.c)
 *     AslpFileGetNtHeaderAttributes @ 0x1800A12C0 (AslpFileGetNtHeaderAttributes.c)
 *     AslpFileQueryExportName @ 0x1800A23B8 (AslpFileQueryExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageNtHeader(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+58h] [rbp+10h]

  if ( *(_DWORD *)(a2 + 56) == 6 )
  {
    v7 = *(_QWORD *)(a2 + 32);
    v3 = *(int *)(v7 + 60);
    v4 = v3 + v7;
    v5 = v3 + 264;
    if ( *(_QWORD *)(a2 + 24) < v5 || *(_QWORD *)(a2 + 40) < v5 )
    {
      v2 = -1073741701;
      AslLogCallPrintf(1LL);
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
    AslLogCallPrintf(1LL);
  }
  return v2;
}
