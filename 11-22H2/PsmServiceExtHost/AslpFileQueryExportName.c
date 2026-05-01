/*
 * XREFs of AslpFileQueryExportName @ 0x18009CDC8
 * Callers:
 *     AslpFileGetExportName @ 0x18009B658 (AslpFileGetExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     RtlStringCchCopyA @ 0x18009996C (RtlStringCchCopyA.c)
 *     AslpFileGetImageNtHeader @ 0x18009BBC0 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x18009D680 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileQueryExportName(_BYTE *a1, __int64 a2)
{
  int ImageNtHeader; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  int v7; // r8d
  unsigned int *v8; // rax
  unsigned int *v9; // r8
  unsigned __int64 v10; // rax
  _BYTE *v11; // rax
  unsigned int v12; // ecx
  int v14; // [rsp+20h] [rbp-48h]
  ULONG Size; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+18h]
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  Size = 0;
  v17 = 0LL;
  *a1 = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v17, a2);
  v5 = ImageNtHeader;
  if ( ImageNtHeader < 0 )
  {
    v6 = "AslpFileGetImageNtHeader failed [%x]";
    v7 = 3338;
LABEL_3:
    v14 = ImageNtHeader;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileQueryExportName", v7, (_DWORD)v6, v14);
    return v5;
  }
  v8 = (unsigned int *)RtlImageDirectoryEntryToData(*(PVOID *)(a2 + 32), *(_BYTE *)(a2 + 51), 0, &Size);
  v9 = v8;
  if ( v8 && Size >= 0x28 )
  {
    v10 = *(_QWORD *)(a2 + 32);
    if ( (unsigned __int64)v9 < v10 || (unsigned __int64)(v9 + 10) > v10 + *(_QWORD *)(a2 + 24) )
    {
      v5 = -1073741701;
      AslLogCallPrintf(
        2LL,
        (unsigned int)"AslpFileQueryExportName",
        3369,
        (unsigned int)"Export directory pointer invalid (points to location outside file), invalid image format");
      return v5;
    }
    v11 = (_BYTE *)AslpImageRvaToVa(v17, a2 + 8, v9[3]);
    if ( !v11 || (unsigned __int64)v11 >= *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 24) || !*v11 )
    {
      v5 = -1073741701;
      AslLogCallPrintf(
        2LL,
        (unsigned int)"AslpFileQueryExportName",
        3378,
        (unsigned int)"Export directory invalid or invalid image format");
      return v5;
    }
    v12 = *(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 24) - (_DWORD)v11;
    if ( v12 > 0x100 )
      v12 = 256;
    v16 = v12;
    ImageNtHeader = RtlStringCchCopyA(a1, v12, (__int64)v11);
    v5 = ImageNtHeader;
    if ( ImageNtHeader >= 0 )
      return 0;
    v6 = "RtlStringCchCopyA failed [%x]";
    v7 = 3390;
    goto LABEL_3;
  }
  v5 = -1073741275;
  if ( v8 )
    AslLogCallPrintf(
      2LL,
      (unsigned int)"AslpFileQueryExportName",
      3355,
      (unsigned int)"RtlImageDirectoryEntryToData returned ExportDirectory that was too small");
  return v5;
}
