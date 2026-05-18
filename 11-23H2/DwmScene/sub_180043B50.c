/*
 * XREFs of sub_180043B50 @ 0x180043B50
 * Callers:
 *     sub_180043E80 @ 0x180043E80 (sub_180043E80.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 */

__int64 __fastcall sub_180043B50(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::RenderState::`vftable';
  sub_180027FD4((void **)(a1 + 128));
  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
    sub_180010530(v2);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010574(v3);
  return sub_180028138(a1);
}
