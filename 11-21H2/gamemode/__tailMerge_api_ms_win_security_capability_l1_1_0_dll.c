/*
 * XREFs of __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x10007376
 * Callers:
 *     __imp_load__CapabilityCheck@12 @ 0x1000736C (__imp_load__CapabilityCheck@12.c)
 * Callees:
 *     ___delayLoadHelper2@8 @ 0x100067BC (___delayLoadHelper2@8.c)
 */

int __usercall _tailMerge_api_ms_win_security_capability_l1_1_0_dll@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int (__fastcall *Helper2)(int, int); // eax

  Helper2 = (int (__fastcall *)(int, int))__delayLoadHelper2(
                                            (int)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_security_capability_l1_1_0_dll,
                                            a1);
  return Helper2(a3, a2);
}
