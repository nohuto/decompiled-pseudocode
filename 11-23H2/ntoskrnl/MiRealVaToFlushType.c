/*
 * XREFs of MiRealVaToFlushType @ 0x14038CDA8
 * Callers:
 *     MiFlushValidPteFromTb @ 0x14038CA94 (MiFlushValidPteFromTb.c)
 *     MiDbgReleaseAddress @ 0x14038CB40 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x14038CC04 (MiDbgWriteCheck.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x14025D7A4 (MiHyperSpaceSize.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiRealVaToFlushType(unsigned __int64 a1)
{
  unsigned __int64 v1; // r10
  __int64 v2; // rax
  int SystemRegionType; // eax
  unsigned int v4; // ecx

  v1 = a1;
  if ( a1 < 0xFFFF800000000000uLL )
    return 1;
  if ( a1 >= qword_140C67068 && (v2 = MiHyperSpaceSize(), v1 < qword_140C67068 + v2) )
  {
    return 1;
  }
  else
  {
    SystemRegionType = MiGetSystemRegionType(v1);
    v4 = 0;
    if ( SystemRegionType == 1 )
      return 2;
  }
  return v4;
}
