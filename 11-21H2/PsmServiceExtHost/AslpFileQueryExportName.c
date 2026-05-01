/*
 * XREFs of AslpFileQueryExportName @ 0x1800A23B8
 * Callers:
 *     AslpFileGetExportName @ 0x1800A0C64 (AslpFileGetExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     RtlStringCchCopyA @ 0x18009EF54 (RtlStringCchCopyA.c)
 *     AslpFileGetImageNtHeader @ 0x1800A11C4 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1800A2C80 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileQueryExportName(_BYTE *a1, __int64 a2)
{
  int ImageNtHeader; // ebx
  unsigned int *v5; // rax
  unsigned int *v6; // r8
  unsigned __int64 v7; // rax
  _BYTE *v8; // rax
  unsigned int v9; // ecx
  ULONG Size; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+18h]
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  Size = 0;
  v13 = 0LL;
  *a1 = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v13, a2);
  if ( ImageNtHeader < 0 )
    goto LABEL_2;
  v5 = (unsigned int *)RtlImageDirectoryEntryToData(*(PVOID *)(a2 + 32), *(_BYTE *)(a2 + 51), 0, &Size);
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
  v8 = (_BYTE *)AslpImageRvaToVa(v13, a2 + 8, v6[3]);
  if ( !v8 || (unsigned __int64)v8 >= *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 24) || !*v8 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_17;
  }
  v9 = *(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 24) - (_DWORD)v8;
  if ( v9 > 0x100 )
    v9 = 256;
  v12 = v9;
  ImageNtHeader = RtlStringCchCopyA(a1, v9, (__int64)v8);
  if ( ImageNtHeader >= 0 )
    return 0;
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
