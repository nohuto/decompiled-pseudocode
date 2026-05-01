/*
 * XREFs of AslpFileGetChecksumAttributes @ 0x18009AB68
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009A3F0 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x180099A68 (AslFileMappingEnsureMappedAs.c)
 *     RtlFileMapFree @ 0x18009A0A8 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x18009A204 (RtlFileMapMapView.c)
 *     AslpFileGetChecksum @ 0x18009AA64 (AslpFileGetChecksum.c)
 *     AslpFileGetCrcChecksum @ 0x18009B094 (AslpFileGetCrcChecksum.c)
 */

__int64 __fastcall AslpFileGetChecksumAttributes(__int64 a1, __int64 a2)
{
  bool v2; // zf
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  int v7; // eax
  int Checksum; // eax
  __int64 v9; // rax
  int CrcChecksum; // eax
  __int64 v11; // rax
  _OWORD v13[3]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a2 + 76) == 0;
  memset(v13, 0, sizeof(v13));
  if ( v2 )
  {
    v5 = AslFileMappingEnsureMappedAs(a2);
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741554 )
    {
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetChecksumAttributes",
        3683,
        (unsigned int)"AslFileMappingEnsureMappedAs failed [%x]",
        v5);
      goto LABEL_16;
    }
    v6 = (_QWORD *)(a2 + 8);
    if ( v5 == -1073741554 )
    {
      *(_QWORD *)&v13[0] = *v6;
      v7 = RtlFileMapMapView((__int64)v13, 0);
      v5 = v7;
      if ( v7 < 0 )
      {
        AslLogCallPrintf(
          1LL,
          (unsigned int)"AslpFileGetChecksumAttributes",
          3701,
          (unsigned int)"RtlFileMapMapView failed [%x]",
          v7);
        goto LABEL_16;
      }
      v6 = v13;
    }
    v14 = 0;
    Checksum = AslpFileGetChecksum(&v14, (__int64)v6);
    v5 = Checksum;
    if ( Checksum >= 0 )
    {
      v9 = v14;
      *(_DWORD *)(a1 + 88) |= 1u;
      v14 = 0;
      *(_QWORD *)(a1 + 80) = v9;
      *(_DWORD *)(a1 + 64) = 2;
      *(_QWORD *)(a1 + 72) = 4LL;
      CrcChecksum = AslpFileGetCrcChecksum(&v14, v6);
      v5 = CrcChecksum;
      if ( CrcChecksum >= 0 )
      {
        v11 = v14;
        *(_DWORD *)(a1 + 856) |= 1u;
        *(_QWORD *)(a1 + 848) = v11;
        v5 = 0;
        *(_DWORD *)(a1 + 832) = 2;
        *(_QWORD *)(a1 + 840) = 4LL;
      }
      else
      {
        AslLogCallPrintf(
          1LL,
          (unsigned int)"AslpFileGetChecksumAttributes",
          3734,
          (unsigned int)"AslpFileGetCrcChecksum failed [%x]",
          CrcChecksum);
      }
    }
    else
    {
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetChecksumAttributes",
        3717,
        (unsigned int)"AslpFileGetChecksum failed [%x]",
        Checksum);
    }
  }
  else
  {
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetChecksumAttributes",
      3669,
      (unsigned int)"AslpFileGetChecksumAttributes called with a partial view which is not supported");
    *(_DWORD *)(a1 + 88) |= 2u;
    v5 = -1073741823;
    *(_DWORD *)(a1 + 856) |= 2u;
  }
LABEL_16:
  RtlFileMapFree((__int64)v13);
  return v5;
}
