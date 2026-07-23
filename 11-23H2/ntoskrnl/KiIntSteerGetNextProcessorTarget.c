/*
 * XREFs of KiIntSteerGetNextProcessorTarget @ 0x140221B74
 * Callers:
 *     KiIntSteerCalculatePriorityDistribution @ 0x140221950 (KiIntSteerCalculatePriorityDistribution.c)
 *     KiIntSteerCalculateUniformDistribution @ 0x14057A450 (KiIntSteerCalculateUniformDistribution.c)
 * Callees:
 *     KiIntPartGetLowestClassProcessorInMask @ 0x140221BB4 (KiIntPartGetLowestClassProcessorInMask.c)
 */

__int64 __fastcall KiIntSteerGetNextProcessorTarget(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_WORD *)(a2 + 8);
  v4[0] = *(_QWORD *)a2 & *(_QWORD *)(a1 + 64);
  v4[1] = v2;
  if ( v4[0] )
    return KiIntPartGetLowestClassProcessorInMask(v4);
  else
    return 0xFFFFFFFFLL;
}
