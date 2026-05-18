/*
 * XREFs of sub_18008BE3C @ 0x18008BE3C
 * Callers:
 *     sub_180086A50 @ 0x180086A50 (sub_180086A50.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 *     sub_18007E7DC @ 0x18007E7DC (sub_18007E7DC.c)
 */

__int64 __fastcall sub_18008BE3C(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::VertexLayout::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 168);
  if ( v2 )
    sub_180010574(v2);
  sub_180027FD4((void **)(a1 + 144));
  sub_18007E7DC(a1 + 112);
  return sub_180028138(a1);
}
