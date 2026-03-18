/*
 * XREFs of KiConvertDynamicHeteroPolicy @ 0x140460FE8
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140240C70 (KiSearchForNewThreadOnProcessor.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x140243890 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiComputeHeteroThreadQos @ 0x1402B0DC0 (KiComputeHeteroThreadQos.c)
 *     KiSetThreadQosLevelUnsafe @ 0x140461FF8 (KiSetThreadQosLevelUnsafe.c)
 */

__int64 __fastcall KiConvertDynamicHeteroPolicy(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r9
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v2 = KiComputeHeteroThreadQos(a1, &v5);
  v3 = v2;
  if ( v2 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
    KiSetThreadQosLevelUnsafe(a1);
  return (unsigned int)KiDynamicHeteroCpuPolicy[2 * v3 + v5];
}
