/*
 * XREFs of sub_1800888DC @ 0x1800888DC
 * Callers:
 *     sub_180047EA0 @ 0x180047EA0 (sub_180047EA0.c)
 *     sub_1800895C4 @ 0x1800895C4 (sub_1800895C4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 *     sub_1800888BC @ 0x1800888BC (sub_1800888BC.c)
 */

__int64 __fastcall sub_1800888DC(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 )
    sub_180010530(v2);
  sub_180027FD4((void **)(a1 + 120));
  sub_1800888BC((_QWORD *)(a1 + 112));
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010574(v3);
  return sub_180028138(a1);
}
