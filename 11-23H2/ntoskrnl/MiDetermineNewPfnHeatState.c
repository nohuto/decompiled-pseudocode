/*
 * XREFs of MiDetermineNewPfnHeatState @ 0x140347B78
 * Callers:
 *     MiDetermineCoalescedLargePageHeatState @ 0x140347B38 (MiDetermineCoalescedLargePageHeatState.c)
 *     MiCreatePfnTemplate @ 0x1403756F4 (MiCreatePfnTemplate.c)
 *     MiInitializeNewPfns @ 0x140375910 (MiInitializeNewPfns.c)
 *     MiEnableNewPfns @ 0x14061AEB0 (MiEnableNewPfns.c)
 *     MiInitializeDynamicPfns @ 0x14061B448 (MiInitializeDynamicPfns.c)
 *     MxCreateFreePfns @ 0x140B426A0 (MxCreateFreePfns.c)
 * Callees:
 *     MiColdPageSizeSupported @ 0x140347BC0 (MiColdPageSizeSupported.c)
 */

__int64 __fastcall MiDetermineNewPfnHeatState(int a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r8d
  unsigned int v4; // ecx

  v2 = 0;
  if ( !a1 )
  {
    if ( (unsigned int)MiColdPageSizeSupported(a2) )
    {
      return 1;
    }
    else
    {
      v4 = v3;
      if ( (HvlEnlightenments & 0x200000) != 0 )
        return 1;
      return v4;
    }
  }
  return v2;
}
