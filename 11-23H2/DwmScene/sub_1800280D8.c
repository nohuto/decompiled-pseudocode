/*
 * XREFs of sub_1800280D8 @ 0x1800280D8
 * Callers:
 *     sub_1800281A0 @ 0x1800281A0 (sub_1800281A0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 */

__int64 __fastcall sub_1800280D8(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::FrameBuffer::`vftable';
  v2 = *(_QWORD *)(a1 + 160);
  if ( v2 )
    sub_180010530(v2);
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
    sub_180010530(v3);
  sub_180027FD4((void **)(a1 + 120));
  v4 = *(volatile signed __int32 **)(a1 + 104);
  if ( v4 )
    sub_180010574(v4);
  return sub_180028138(a1);
}
