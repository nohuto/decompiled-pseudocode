/*
 * XREFs of AslpFileLargeEnsureLargeFileMapping @ 0x1800A0C6C
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009A750 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x18009A2C0 (AslpFileMappingGetFileKind.c)
 *     AslpFileLargeGetChecksumAttributes @ 0x1800A0F20 (AslpFileLargeGetChecksumAttributes.c)
 *     AslpFileLargeMapCreate @ 0x1800A11FC (AslpFileLargeMapCreate.c)
 *     AslpFileLargeMapDelete @ 0x1800A142C (AslpFileLargeMapDelete.c)
 */

__int64 __fastcall AslpFileLargeEnsureLargeFileMapping(__int64 a1, __int64 a2)
{
  _DWORD *v5; // r8
  unsigned int i; // edx
  bool v7; // zf
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  bool v13; // zf
  bool v14; // zf
  unsigned int v15; // ecx
  int FileKind; // ebx
  _QWORD *v17; // rbx
  int ChecksumAttributes; // eax
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-18h]
  _QWORD *v21; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a2 + 24) < 0x100000uLL )
    return 3221225712LL;
  v21 = 0LL;
  v5 = (_DWORD *)(a1 + 24);
  for ( i = 0; (int)i < 34; ++i )
  {
    if ( i > 0xE )
    {
      if ( i > 0x1A )
      {
        if ( i == 27 || i == 28 || i == 29 || i == 30 )
          goto LABEL_34;
        v15 = i - 31;
        v14 = i == 31;
      }
      else
      {
        if ( i == 26 || i == 15 || i == 16 || i == 17 || i == 18 || i == 19 )
          goto LABEL_34;
        v15 = i - 22;
        v14 = i == 22;
      }
      if ( v14 )
        goto LABEL_34;
      v13 = v15 == 2;
    }
    else
    {
      if ( i == 14 )
        goto LABEL_34;
      if ( i > 7 )
      {
        v7 = i == 8;
        v8 = i - 8;
      }
      else
      {
        if ( i == 7 || !i )
          goto LABEL_34;
        v8 = i - 1;
        v7 = i == 1;
      }
      if ( v7 )
        goto LABEL_34;
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_34;
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_34;
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_34;
      v12 = v11 - 1;
      if ( !v12 )
        goto LABEL_34;
      v13 = v12 == 1;
    }
    if ( !v13 )
      *v5 |= 2u;
LABEL_34:
    v5 += 8;
  }
  FileKind = AslpFileLargeMapCreate(&v21, a2 + 8, v5);
  if ( FileKind >= 0 )
  {
    v17 = v21;
    ChecksumAttributes = AslpFileLargeGetChecksumAttributes(a1, v21);
    if ( ChecksumAttributes < 0 )
    {
      v20 = ChecksumAttributes;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileLargeEnsureLargeFileMapping",
        249,
        (unsigned int)"AslpFileLargeGetChecksumAttributes failed to get checksum attributes [%x]",
        v20);
    }
    if ( v17 )
    {
      *(_QWORD *)(a2 + 16) = v17[1];
      *(_BYTE *)(a2 + 49) = 1;
      v19 = v17[2];
      v17[1] = 0LL;
      *(_QWORD *)(a2 + 32) = v19;
      *(_QWORD *)(a2 + 40) = v17[3];
      *(_WORD *)(a2 + 50) = 1;
      *(_DWORD *)(a2 + 76) = 1;
      v17[2] = 0LL;
      v17[3] = 0LL;
      AslpFileLargeMapDelete(&v21);
      FileKind = AslpFileMappingGetFileKind((_QWORD *)(a2 + 8), (int *)(a2 + 56));
    }
    else
    {
      FileKind = -1073741584;
    }
  }
  AslpFileLargeMapDelete(&v21);
  return (unsigned int)FileKind;
}
