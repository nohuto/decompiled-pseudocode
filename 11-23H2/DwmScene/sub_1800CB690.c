/*
 * XREFs of sub_1800CB690 @ 0x1800CB690
 * Callers:
 *     sub_1800CB730 @ 0x1800CB730 (sub_1800CB730.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 */

__int64 __fastcall sub_1800CB690(_QWORD *a1)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  *(_OWORD *)v3 = 0LL;
  sub_180011020(a1 + 12, v3);
  if ( v3[1] )
    sub_180010530(v3[1]);
  sub_18000E72C(a1 + 16);
  return sub_180028068(a1);
}
