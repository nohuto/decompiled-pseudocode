/*
 * XREFs of KiDecrementKernelShadowStack @ 0x140420570
 * Callers:
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x14057C090 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 * Callees:
 *     sub_140420586 @ 0x140420586 (sub_140420586.c)
 */

__int64 KiDecrementKernelShadowStack()
{
  __int64 v2; // rcx

  __asm { rdsspq  rdx }
  _R8 = 0LL;
  __asm { wrssq   qword ptr [rdx], r8 }
  sub_140420586(*_RDX);
  return sub_140420586(v2);
}
