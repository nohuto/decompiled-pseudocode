/*
 * XREFs of __tailMerge_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll @ 0x100072C3
 * Callers:
 *     __imp_load__RmGameModeGetLargestValidResourceRequest@4 @ 0x100072B9 (__imp_load__RmGameModeGetLargestValidResourceRequest@4.c)
 *     __imp_load__RmGameModeInitializeResourceRequest@4 @ 0x100072DA (__imp_load__RmGameModeInitializeResourceRequest@4.c)
 *     __imp_load__RmGameModeRegisterProcess@12 @ 0x100072EA (__imp_load__RmGameModeRegisterProcess@12.c)
 *     __imp_load__RmGameModeUnregisterProcess@4 @ 0x100072FA (__imp_load__RmGameModeUnregisterProcess@4.c)
 * Callees:
 *     ___delayLoadHelper2@8 @ 0x100067BC (___delayLoadHelper2@8.c)
 */

int __usercall _tailMerge_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll@<eax>(
        int a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>)
{
  int (__fastcall *Helper2)(int, int); // eax

  Helper2 = (int (__fastcall *)(int, int))__delayLoadHelper2(
                                            (int)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll,
                                            a1);
  return Helper2(a3, a2);
}
