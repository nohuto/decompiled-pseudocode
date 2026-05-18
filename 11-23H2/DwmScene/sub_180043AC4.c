/*
 * XREFs of sub_180043AC4 @ 0x180043AC4
 * Callers:
 *     sub_180043E40 @ 0x180043E40 (sub_180043E40.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180028004 @ 0x180028004 (sub_180028004.c)
 *     sub_1800445E8 @ 0x1800445E8 (sub_1800445E8.c)
 */

__int64 __fastcall sub_180043AC4(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Material::`vftable';
  sub_1800445E8();
  v2 = *(volatile signed __int32 **)(a1 + 224);
  if ( v2 )
    sub_180010574(v2);
  sub_180028004((void **)(a1 + 200));
  v3 = *(_QWORD *)(a1 + 176);
  if ( v3 )
    sub_180010530(v3);
  v4 = *(_QWORD *)(a1 + 144);
  if ( v4 )
    sub_180010530(v4);
  v5 = *(_QWORD *)(a1 + 128);
  if ( v5 )
    sub_180010530(v5);
  v6 = *(volatile signed __int32 **)(a1 + 104);
  if ( v6 )
    sub_180010574(v6);
  return sub_180028138(a1);
}
