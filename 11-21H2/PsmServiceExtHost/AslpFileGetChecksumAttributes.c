/*
 * XREFs of AslpFileGetChecksumAttributes @ 0x1800A04D8
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009FDAC (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x18009F40C (AslFileMappingEnsureMappedAs.c)
 *     RtlFileMapFree @ 0x18009FA64 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x18009FBC0 (RtlFileMapMapView.c)
 *     AslpFileGetChecksum @ 0x1800A03D4 (AslpFileGetChecksum.c)
 *     AslpFileGetCrcChecksum @ 0x1800A0A04 (AslpFileGetCrcChecksum.c)
 */

__int64 __fastcall AslpFileGetChecksumAttributes(__int64 a1, __int64 a2)
{
  bool v2; // zf
  int Checksum; // ebx
  _QWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  _OWORD v10[3]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a2 + 76) == 0;
  memset(v10, 0, sizeof(v10));
  if ( v2 )
  {
    Checksum = AslFileMappingEnsureMappedAs(a2);
    if ( (int)(Checksum + 0x80000000) >= 0 && Checksum != -1073741554 )
      goto LABEL_5;
    v6 = (_QWORD *)(a2 + 8);
    if ( Checksum == -1073741554 )
    {
      *(_QWORD *)&v10[0] = *v6;
      Checksum = RtlFileMapMapView((__int64)v10, 0);
      if ( Checksum < 0 )
      {
LABEL_5:
        AslLogCallPrintf(1LL);
        goto LABEL_12;
      }
      v6 = v10;
    }
    v11 = 0;
    Checksum = AslpFileGetChecksum(&v11, (__int64)v6);
    if ( Checksum >= 0 )
    {
      v7 = v11;
      *(_DWORD *)(a1 + 88) |= 1u;
      v11 = 0;
      *(_QWORD *)(a1 + 80) = v7;
      *(_DWORD *)(a1 + 64) = 2;
      *(_QWORD *)(a1 + 72) = 4LL;
      Checksum = AslpFileGetCrcChecksum(&v11, v6);
      if ( Checksum >= 0 )
      {
        v8 = v11;
        *(_DWORD *)(a1 + 856) |= 1u;
        *(_QWORD *)(a1 + 848) = v8;
        Checksum = 0;
        *(_DWORD *)(a1 + 832) = 2;
        *(_QWORD *)(a1 + 840) = 4LL;
        goto LABEL_12;
      }
    }
    goto LABEL_5;
  }
  AslLogCallPrintf(1LL);
  *(_DWORD *)(a1 + 88) |= 2u;
  Checksum = -1073741823;
  *(_DWORD *)(a1 + 856) |= 2u;
LABEL_12:
  RtlFileMapFree((__int64)v10);
  return (unsigned int)Checksum;
}
