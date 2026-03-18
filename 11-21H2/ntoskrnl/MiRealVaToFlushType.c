/*
 * XREFs of MiRealVaToFlushType @ 0x140227300
 * Callers:
 *     MiFlushValidPteFromTb @ 0x140227254 (MiFlushValidPteFromTb.c)
 *     MiDbgReleaseAddress @ 0x1403AD0A8 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1403AD16C (MiDbgWriteCheck.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x14027A0F4 (MiHyperSpaceSize.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiRealVaToFlushType(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  int SystemRegionType; // eax
  unsigned int v6; // ecx
  __int64 v8; // rax

  v4 = a1;
  if ( a1 >= 0xFFFF800000000000uLL && (a1 < qword_140C51BE8 || (v8 = MiHyperSpaceSize(), v4 >= qword_140C51BE8 + v8)) )
  {
    SystemRegionType = MiGetSystemRegionType(v4, a2, a3, a4);
    v6 = 0;
    if ( SystemRegionType == 1 )
      return 2;
  }
  else
  {
    return 1;
  }
  return v6;
}
