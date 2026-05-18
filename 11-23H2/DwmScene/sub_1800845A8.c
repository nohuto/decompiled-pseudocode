/*
 * XREFs of sub_1800845A8 @ 0x1800845A8
 * Callers:
 *     sub_1800846F0 @ 0x1800846F0 (sub_1800846F0.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 */

__int64 __fastcall sub_1800845A8(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ConstantBuffer::`vftable';
  sub_180027FD4((void **)(a1 + 112));
  v2 = *(volatile signed __int32 **)(a1 + 104);
  if ( v2 )
    sub_180010574(v2);
  return sub_180028138(a1);
}
