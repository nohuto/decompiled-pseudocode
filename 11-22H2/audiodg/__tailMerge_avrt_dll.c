/*
 * XREFs of __tailMerge_avrt_dll @ 0x140029912
 * Callers:
 *     __imp_load_AvRevertMmThreadCharacteristics @ 0x140029906 (__imp_load_AvRevertMmThreadCharacteristics.c)
 *     __imp_load_AvSetMultimediaMode @ 0x140029991 (__imp_load_AvSetMultimediaMode.c)
 *     __imp_load_AvTaskIndexYield @ 0x1400299A3 (__imp_load_AvTaskIndexYield.c)
 *     __imp_load_AvQuerySystemResponsiveness @ 0x1400299B5 (__imp_load_AvQuerySystemResponsiveness.c)
 *     __imp_load_AvTaskIndexYieldCancel @ 0x1400299C7 (__imp_load_AvTaskIndexYieldCancel.c)
 *     __imp_load_AvSetMmThreadCharacteristicsW @ 0x1400299D9 (__imp_load_AvSetMmThreadCharacteristicsW.c)
 *     __imp_load_AvSetMmThreadPriority @ 0x1400299EB (__imp_load_AvSetMmThreadPriority.c)
 *     __imp_load_AvThreadOpenTaskIndex @ 0x1400299FD (__imp_load_AvThreadOpenTaskIndex.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1400A0E50 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_avrt_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_avrt_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
