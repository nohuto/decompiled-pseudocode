/*
 * XREFs of AslFileMappingGetImageTypeEx @ 0x18009A05C
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x180099E98 (AslFileMappingGetFileKindDetail.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x180099CF8 (AslFileMappingEnsure.c)
 *     AslpFileGetImageNtHeader @ 0x18009BBC0 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x18009D680 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslFileMappingGetImageTypeEx(_WORD *a1, _WORD *a2, int *a3, _DWORD *a4, __int64 a5)
{
  _WORD *v7; // r8
  unsigned int v8; // r14d
  __int16 v9; // dx
  __int16 v10; // r15
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ebx
  int ImageNtHeader; // eax
  const char *v15; // r9
  int v16; // r8d
  __int64 v17; // rax
  __int16 v19; // [rsp+30h] [rbp-68h]
  _QWORD v20[10]; // [rsp+48h] [rbp-50h] BYREF

  v7 = a2;
  v20[0] = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( *(_DWORD *)(a5 + 56) == 1 )
  {
    v13 = -1073741701;
    goto LABEL_25;
  }
  ImageNtHeader = AslFileMappingEnsure(a5);
  v13 = ImageNtHeader;
  if ( ImageNtHeader < 0 )
  {
    v15 = "AslFileMappingEnsure failed [%x]";
    v16 = 1102;
LABEL_5:
    AslLogCallPrintf(1LL, (unsigned int)"AslFileMappingGetImageTypeEx", v16, (_DWORD)v15, ImageNtHeader);
LABEL_6:
    v9 = 0;
LABEL_7:
    v11 = 0;
    v12 = 0;
    v7 = a2;
    goto LABEL_25;
  }
  if ( *(_DWORD *)(a5 + 56) != 6 )
  {
    v13 = -1073741701;
    goto LABEL_6;
  }
  ImageNtHeader = AslpFileGetImageNtHeader(v20, a5);
  v13 = ImageNtHeader;
  if ( ImageNtHeader < 0 )
  {
    v15 = "AslpFileGetImageNtHeader failed [%x]";
    v16 = 1122;
    goto LABEL_5;
  }
  v9 = *(_WORD *)(v20[0] + 4LL);
  v19 = v9;
  v10 = *(_WORD *)(v20[0] + 24LL);
  if ( *(_DWORD *)(a5 + 72) || !a3 && !a4 )
    goto LABEL_13;
  if ( v10 == 267 )
  {
    v8 = *(_DWORD *)(v20[0] + 232LL);
  }
  else if ( v10 == 523 )
  {
    v8 = *(_DWORD *)(v20[0] + 248LL);
  }
  if ( !v8 )
  {
LABEL_13:
    v13 = 0;
    goto LABEL_7;
  }
  v17 = AslpImageRvaToVa(v20[0], a5 + 8, v8);
  v20[1] = v17;
  if ( v17 )
  {
    v11 = 1;
    v12 = *(_DWORD *)(v17 + 16);
    v13 = 0;
  }
  else
  {
    AslLogCallPrintf(
      2LL,
      (unsigned int)"AslFileMappingGetImageTypeEx",
      1176,
      (unsigned int)"Failed to find the Cor20Header");
    v13 = 0;
    v12 = 0;
    v11 = 0;
  }
  v9 = v19;
  v7 = a2;
LABEL_25:
  if ( a1 )
    *a1 = v9;
  if ( v7 )
    *v7 = v10;
  if ( a3 )
    *a3 = v11;
  if ( a4 )
    *a4 = v12;
  return v13;
}
