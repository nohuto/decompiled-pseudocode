/*
 * XREFs of AslpFileLargeGetCrcChecksum @ 0x1800A0CA4
 * Callers:
 *     AslpFileLargeGetChecksumAttributes @ 0x1800A0BB0 (AslpFileLargeGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslComputeCrc32 @ 0x1800982FC (AslComputeCrc32.c)
 */

__int64 __fastcall AslpFileLargeGetCrcChecksum(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r14
  int v8; // eax
  unsigned int v9; // r8d
  _BYTE *v10; // r11
  __int64 v11; // [rsp+20h] [rbp-38h]

  *a1 = 0;
  v4 = *(_QWORD *)(*a2 + 16LL);
  if ( v4 < 0x100000 || !a2[5] || a2[6] < 0x1000uLL || !a2[2] || a2[3] < 0x1000uLL || a2[4] )
    return 3221225485LL;
  v5 = v4 - a2[7];
  v6 = v5 - 4096;
  if ( v5 <= a2[6] )
  {
    v8 = AslComputeCrc32(0, (_BYTE *)a2[2], 0x1000u);
    *a1 = AslComputeCrc32(v8, v10, v9);
    return 0LL;
  }
  else
  {
    AslLogCallPrintf(0LL, (unsigned int)"AslpFileLargeGetCrcChecksum", 887, (unsigned int)"FileSize      : %I64u", v4);
    AslLogCallPrintf(
      0LL,
      (unsigned int)"AslpFileLargeGetCrcChecksum",
      888,
      (unsigned int)"CrcFileStart  : %I64u",
      *(_QWORD *)(*a2 + 16LL) - 4096LL);
    AslLogCallPrintf(
      0LL,
      (unsigned int)"AslpFileLargeGetCrcChecksum",
      889,
      (unsigned int)"ViewFileOffset: %I64u",
      a2[7]);
    LODWORD(v11) = *((_DWORD *)a2 + 12);
    AslLogCallPrintf(0LL, (unsigned int)"AslpFileLargeGetCrcChecksum", 890, (unsigned int)"ViewFileSize  : %u", v11);
    AslLogCallPrintf(0LL, (unsigned int)"AslpFileLargeGetCrcChecksum", 891, (unsigned int)"CrcViewOffset : %I64u", v6);
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileLargeGetCrcChecksum",
      895,
      (unsigned int)"Alignment error in the end of file view for CRC checksum");
    return 3221226016LL;
  }
}
