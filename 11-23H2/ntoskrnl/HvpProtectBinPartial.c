/*
 * XREFs of HvpProtectBinPartial @ 0x14070B1F0
 * Callers:
 *     HvpSetRangeProtection @ 0x140709B64 (HvpSetRangeProtection.c)
 *     HvpAddBin @ 0x14074F364 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F984 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImage @ 0x140A1DFA4 (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPoolEx @ 0x1402970D4 (CmpProtectPoolEx.c)
 *     MmSetPageProtection @ 0x1403C2E50 (MmSetPageProtection.c)
 */

__int64 __fastcall HvpProtectBinPartial(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, char a6)
{
  unsigned int v6; // ebx

  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    MmSetPageProtection(a2 + a4, a5, a6 != 0 ? 4 : 2);
    return 0;
  }
  else
  {
    v6 = 0;
    if ( a6 )
    {
      if ( !(unsigned int)CmpProtectPoolEx() )
        return (unsigned int)-1073741670;
    }
    else
    {
      CmpProtectPoolEx();
    }
  }
  return v6;
}
