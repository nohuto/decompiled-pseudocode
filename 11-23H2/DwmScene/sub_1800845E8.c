/*
 * XREFs of sub_1800845E8 @ 0x1800845E8
 * Callers:
 *     sub_180083B50 @ 0x180083B50 (sub_180083B50.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001B880 @ 0x18001B880 (sub_18001B880.c)
 *     sub_180028004 @ 0x180028004 (sub_180028004.c)
 *     sub_180083BBC @ 0x180083BBC (sub_180083BBC.c)
 */

__int64 __fastcall sub_1800845E8(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
    sub_180010530(v2);
  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 )
    sub_180010530(v3);
  sub_180028004((void **)(a1 + 88));
  sub_180083BBC(a1 + 56);
  result = sub_18001B880(a1 + 32);
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    return sub_180010530(v5);
  return result;
}
