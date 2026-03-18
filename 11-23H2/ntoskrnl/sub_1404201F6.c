/*
 * XREFs of sub_1404201F6 @ 0x1404201F6
 * Callers:
 *     KiDecrementKernelShadowStack @ 0x1404201E0 (KiDecrementKernelShadowStack.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1404201F6(__int64 _RCX, __int64 _RDX)
{
  __asm { wrssq   qword ptr [rdx-8], rcx }
}
