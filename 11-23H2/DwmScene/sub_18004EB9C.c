/*
 * XREFs of sub_18004EB9C @ 0x18004EB9C
 * Callers:
 *     sub_18004EF20 @ 0x18004EF20 (sub_18004EF20.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 */

__int64 __fastcall sub_18004EB9C(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Shader::`vftable';
  sub_180027FD4((void **)(a1 + 136));
  v2 = *(volatile signed __int32 **)(a1 + 128);
  if ( v2 )
    sub_180010574(v2);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010574(v3);
  return sub_180028138(a1);
}
