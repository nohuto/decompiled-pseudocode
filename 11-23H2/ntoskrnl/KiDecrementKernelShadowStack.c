/*
 * XREFs of KiDecrementKernelShadowStack @ 0x1404201E0
 * Callers:
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x14057BBA0 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 * Callees:
 *     sub_1404201F6 @ 0x1404201F6 (sub_1404201F6.c)
 */

__int64 KiDecrementKernelShadowStack()
{
  __int64 v2; // rcx

  __asm { rdsspq  rdx }
  _R8 = 0LL;
  __asm { wrssq   qword ptr [rdx], r8 }
  sub_1404201F6(*_RDX);
  return sub_1404201F6(v2);
}
