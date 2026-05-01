/*
 * XREFs of __tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll @ 0x10007335
 * Callers:
 *     __imp_load__CreateGameConfigStoreClient@4 @ 0x1000732B (__imp_load__CreateGameConfigStoreClient@4.c)
 *     __imp_load__FreeGameConfigStoreClient@4 @ 0x1000734C (__imp_load__FreeGameConfigStoreClient@4.c)
 * Callees:
 *     ___delayLoadHelper2@8 @ 0x100067BC (___delayLoadHelper2@8.c)
 */

int __usercall _tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int (__fastcall *Helper2)(int, int); // eax

  Helper2 = (int (__fastcall *)(int, int))__delayLoadHelper2(
                                            (int)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_core_resourcepolicy_l1_1_0_dll,
                                            a1);
  return Helper2(a3, a2);
}
