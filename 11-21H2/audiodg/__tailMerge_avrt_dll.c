/*
 * XREFs of __tailMerge_avrt_dll @ 0x140031092
 * Callers:
 *     __imp_load_AvRevertMmThreadCharacteristics @ 0x140031086 (__imp_load_AvRevertMmThreadCharacteristics.c)
 *     __imp_load_AvSetMultimediaMode @ 0x140031111 (__imp_load_AvSetMultimediaMode.c)
 *     __imp_load_AvTaskIndexYield @ 0x140031123 (__imp_load_AvTaskIndexYield.c)
 *     __imp_load_AvQuerySystemResponsiveness @ 0x140031135 (__imp_load_AvQuerySystemResponsiveness.c)
 *     __imp_load_AvTaskIndexYieldCancel @ 0x140031147 (__imp_load_AvTaskIndexYieldCancel.c)
 *     __imp_load_AvSetMmThreadCharacteristicsW @ 0x140031159 (__imp_load_AvSetMmThreadCharacteristicsW.c)
 *     __imp_load_AvSetMmThreadPriority @ 0x14003116B (__imp_load_AvSetMmThreadPriority.c)
 *     __imp_load_AvThreadOpenTaskIndex @ 0x14003117D (__imp_load_AvThreadOpenTaskIndex.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x14002D490 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_avrt_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_avrt_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
