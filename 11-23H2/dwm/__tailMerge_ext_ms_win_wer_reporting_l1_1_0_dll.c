/*
 * XREFs of __tailMerge_ext_ms_win_wer_reporting_l1_1_0_dll @ 0x140006D94
 * Callers:
 *     __imp_load_WerReportAddDump @ 0x140006D88 (__imp_load_WerReportAddDump.c)
 *     __imp_load_WerReportSetParameter @ 0x140006E68 (__imp_load_WerReportSetParameter.c)
 *     __imp_load_WerReportCloseHandle @ 0x140006E7A (__imp_load_WerReportCloseHandle.c)
 *     __imp_load_WerReportSubmit @ 0x140006E8C (__imp_load_WerReportSubmit.c)
 *     __imp_load_WerReportCreate @ 0x140006E9E (__imp_load_WerReportCreate.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1400056F0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_wer_reporting_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_wer_reporting_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
