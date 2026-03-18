/*
 * XREFs of KiIntPartGetLowestClassProcessorInMask @ 0x1402FE1C4
 * Callers:
 *     KiIntSteerCalculatePriorityDistribution @ 0x1402FDFE0 (KiIntSteerCalculatePriorityDistribution.c)
 *     KiIntSteerCalculateDistribution @ 0x1402FF310 (KiIntSteerCalculateDistribution.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x1403AFE88 (KiIntSteerChooseInitialTargetProcessors.c)
 *     KiIntSteerCalculateFallbackDistribution @ 0x1405781D0 (KiIntSteerCalculateFallbackDistribution.c)
 *     KiIntSteerGetNextProcessorTarget @ 0x140578414 (KiIntSteerGetNextProcessorTarget.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402FE230 (KeFindFirstSetRightGroupAffinity.c)
 */

__int64 __fastcall KiIntPartGetLowestClassProcessorInMask(__int128 *a1)
{
  unsigned int v1; // edx
  __int64 v2; // r11
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( KiIntPartInitialized )
  {
    if ( !*((_WORD *)a1 + 4) )
    {
      v4 = 0LL;
      if ( *(_BYTE *)(KiInterruptPartitions + 2) )
      {
        v2 = *(_QWORD *)a1;
        while ( (v2 & *(_QWORD *)(KiInterruptPartitions + 16 * (v1 + 1LL))) == 0 )
        {
          if ( ++v1 >= *(unsigned __int8 *)(KiInterruptPartitions + 2) )
            return KeFindFirstSetRightGroupAffinity(a1);
        }
        *(_QWORD *)&v4 = v2 & *(_QWORD *)(KiInterruptPartitions + 16 * (v1 + 1LL));
        a1 = &v4;
      }
    }
  }
  return KeFindFirstSetRightGroupAffinity(a1);
}
