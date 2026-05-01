/*
 * XREFs of AslpFileLargeEnsureLargeFileMapping @ 0x1800A61E8
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009FDAC (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x18009F91C (AslpFileMappingGetFileKind.c)
 *     AslpFileLargeGetChecksumAttributes @ 0x1800A6438 (AslpFileLargeGetChecksumAttributes.c)
 *     AslpFileLargeMapCreate @ 0x1800A6714 (AslpFileLargeMapCreate.c)
 *     AslpFileLargeMapDelete @ 0x1800A6944 (AslpFileLargeMapDelete.c)
 */

__int64 __fastcall AslpFileLargeEnsureLargeFileMapping(__int64 a1, __int64 a2)
{
  unsigned int v5; // eax
  _DWORD *v6; // rcx
  int FileKind; // ebx
  _QWORD *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a2 + 24) < 0x100000uLL )
    return 3221225712LL;
  v10 = 0LL;
  v5 = 0;
  v6 = (_DWORD *)(a1 + 24);
  do
  {
    if ( v5 > 0x13 && v5 != 22 && v5 != 24 && (v5 <= 0x19 || v5 > 0x1F && v5 != 33) )
      *v6 |= 2u;
    ++v5;
    v6 += 8;
  }
  while ( (int)v5 < 34 );
  FileKind = AslpFileLargeMapCreate(&v10, a2 + 8);
  if ( FileKind >= 0 )
  {
    v8 = v10;
    if ( (int)AslpFileLargeGetChecksumAttributes(a1, v10) < 0 )
      AslLogCallPrintf(1LL);
    if ( v8 )
    {
      *(_QWORD *)(a2 + 16) = v8[1];
      *(_BYTE *)(a2 + 49) = 1;
      v9 = v8[2];
      v8[1] = 0LL;
      *(_QWORD *)(a2 + 32) = v9;
      *(_QWORD *)(a2 + 40) = v8[3];
      *(_WORD *)(a2 + 50) = 1;
      *(_DWORD *)(a2 + 76) = 1;
      v8[2] = 0LL;
      v8[3] = 0LL;
      AslpFileLargeMapDelete(&v10);
      FileKind = AslpFileMappingGetFileKind((_QWORD *)(a2 + 8), (int *)(a2 + 56));
    }
    else
    {
      FileKind = -1073741584;
    }
  }
  AslpFileLargeMapDelete(&v10);
  return (unsigned int)FileKind;
}
