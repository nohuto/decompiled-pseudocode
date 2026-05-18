/*
 * XREFs of sub_18009EFA4 @ 0x18009EFA4
 * Callers:
 *     sub_18009F0C0 @ 0x18009F0C0 (sub_18009F0C0.c)
 *     sub_18009F818 @ 0x18009F818 (sub_18009F818.c)
 *     sub_1800EB1F0 @ 0x1800EB1F0 (sub_1800EB1F0.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009EFA4(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::RenderTargetState::`vftable';
  v2 = a1[54];
  if ( v2 )
    sub_180010530(v2);
  v3 = a1[52];
  if ( v3 )
    sub_180010530(v3);
  v4 = a1[50];
  if ( v4 )
    sub_180010530(v4);
  sub_18000B4B0((__int64)(a1 + 33), 16LL, 8LL);
  sub_18000B4B0((__int64)(a1 + 17), 16LL, 8LL);
  return sub_18000B4B0((__int64)(a1 + 1), 16LL, 8LL);
}
