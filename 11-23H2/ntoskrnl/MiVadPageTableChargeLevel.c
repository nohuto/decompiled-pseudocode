/*
 * XREFs of MiVadPageTableChargeLevel @ 0x140277EA0
 * Callers:
 *     MiCommitPageTablesForVad @ 0x1406F9680 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x140764B80 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MiPageSizeToPteLevel @ 0x14064E7D0 (MiPageSizeToPteLevel.c)
 *     MiGetAweVadPageSize @ 0x140A4200C (MiGetAweVadPageSize.c)
 */

__int64 __fastcall MiVadPageTableChargeLevel(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  unsigned int v3; // ecx
  __int64 AweVadPageSize; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) != 0 )
  {
    if ( (v1 & 0x800000) == 0 && (v1 & 0x180000u) < 0x100000 )
    {
LABEL_4:
      if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 )
      {
        AweVadPageSize = MiGetAweVadPageSize();
        return MiPageSizeToPteLevel(AweVadPageSize);
      }
      return 0LL;
    }
  }
  else if ( (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
  {
    goto LABEL_4;
  }
  v3 = MiVadPageIndices[((unsigned __int64)*(unsigned int *)(a1 + 48) >> 19) & 3];
  if ( v3 > 1 )
    return 0LL;
  result = 1LL;
  if ( !v3 )
    return 2LL;
  return result;
}
