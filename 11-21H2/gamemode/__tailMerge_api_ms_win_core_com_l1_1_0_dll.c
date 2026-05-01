/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x10007314
 * Callers:
 *     __imp_load__CoSetProxyBlanket@32 @ 0x1000730A (__imp_load__CoSetProxyBlanket@32.c)
 *     __imp_load__CoGetCallContext@8 @ 0x1000735C (__imp_load__CoGetCallContext@8.c)
 * Callees:
 *     ___delayLoadHelper2@8 @ 0x100067BC (___delayLoadHelper2@8.c)
 */

int __usercall _tailMerge_api_ms_win_core_com_l1_1_0_dll@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int (__fastcall *Helper2)(int, int); // eax

  Helper2 = (int (__fastcall *)(int, int))__delayLoadHelper2(
                                            (int)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_0_dll,
                                            a1);
  return Helper2(a3, a2);
}
