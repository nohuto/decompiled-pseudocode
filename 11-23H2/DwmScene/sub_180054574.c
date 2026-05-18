/*
 * XREFs of sub_180054574 @ 0x180054574
 * Callers:
 *     sub_180018050 @ 0x180018050 (sub_180018050.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 *     sub_180054C80 @ 0x180054C80 (sub_180054C80.c)
 */

__int64 __fastcall sub_180054574(_QWORD *a1)
{
  void **v2; // rbx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rcx

  v2 = (void **)(a1 + 16);
  *a1 = &Spectre::Engine::Sampler::`vftable';
  sub_180054C80(a1 + 16);
  sub_180027FD4(v2);
  v3 = a1[15];
  if ( v3 )
    sub_180010530(v3);
  v4 = (volatile signed __int32 *)a1[13];
  if ( v4 )
    sub_180010574(v4);
  return sub_180028138((__int64)a1);
}
