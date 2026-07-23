/*
 * XREFs of sub_140420586 @ 0x140420586
 * Callers:
 *     KiDecrementKernelShadowStack @ 0x140420570 (KiDecrementKernelShadowStack.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_140420586(__int64 _RCX, __int64 _RDX)
{
  __asm { wrssq   qword ptr [rdx-8], rcx }
}
