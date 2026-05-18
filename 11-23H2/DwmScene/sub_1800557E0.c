/*
 * XREFs of sub_1800557E0 @ 0x1800557E0
 * Callers:
 *     sub_1800181D0 @ 0x1800181D0 (sub_1800181D0.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 *     sub_180054C80 @ 0x180054C80 (sub_180054C80.c)
 *     sub_180055754 @ 0x180055754 (sub_180055754.c)
 *     sub_180055778 @ 0x180055778 (sub_180055778.c)
 */

__int64 __fastcall sub_1800557E0(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Texture::`vftable';
  sub_180054C80((_QWORD *)(a1 + 112));
  sub_180055778((_QWORD *)(a1 + 136));
  sub_180055754((void **)(a1 + 128));
  sub_180027FD4((void **)(a1 + 112));
  v2 = *(volatile signed __int32 **)(a1 + 104);
  if ( v2 )
    sub_180010574(v2);
  return sub_180028138(a1);
}
