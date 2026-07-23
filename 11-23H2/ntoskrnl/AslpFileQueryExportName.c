/*
 * XREFs of AslpFileQueryExportName @ 0x140A594B0
 * Callers:
 *     AslpFileGetExportName @ 0x140A587D4 (AslpFileGetExportName.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     RtlStringCchCopyA @ 0x1403C360C (RtlStringCchCopyA.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x140A58D40 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140A59700 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileQueryExportName(NTSTRSAFE_PSTR pszDest, __int64 a2)
{
  int ImageNtHeader; // ebx
  unsigned int *v5; // rax
  unsigned int *v6; // r8
  unsigned __int64 v7; // rax
  const char *v8; // rax
  unsigned int v9; // ecx
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  Size = 0;
  v12 = 0LL;
  *pszDest = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v12, a2);
  if ( ImageNtHeader < 0 )
    goto LABEL_2;
  v5 = (unsigned int *)RtlImageDirectoryEntryToData(*(PVOID *)(a2 + 32), *(_BYTE *)(a2 + 59), 0, &Size);
  v6 = v5;
  if ( !v5 || Size < 0x28 )
  {
    ImageNtHeader = -1073741275;
    if ( !v5 )
      return (unsigned int)ImageNtHeader;
LABEL_17:
    AslLogCallPrintf(2LL);
    return (unsigned int)ImageNtHeader;
  }
  v7 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)v6 < v7 || (unsigned __int64)(v6 + 10) > v7 + *(_QWORD *)(a2 + 24) )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_17;
  }
  v8 = (const char *)AslpImageRvaToVa(v12, a2 + 8, v6[3]);
  if ( !v8 || (unsigned __int64)v8 >= *(_QWORD *)(a2 + 24) + *(_QWORD *)(a2 + 32) || !*v8 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_17;
  }
  v9 = *(_DWORD *)(a2 + 24) + *(_DWORD *)(a2 + 32) - (_DWORD)v8;
  if ( v9 > 0x100 )
    v9 = 256;
  ImageNtHeader = RtlStringCchCopyA(pszDest, v9, v8);
  if ( ImageNtHeader >= 0 )
    return 0;
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
