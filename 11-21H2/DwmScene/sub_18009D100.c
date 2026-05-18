/*
 * XREFs of sub_18009D100 @ 0x18009D100
 * Callers:
 *     sub_18009D1E0 @ 0x18009D1E0 (sub_18009D1E0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

unsigned __int64 __fastcall sub_18009D100(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx

  *(_QWORD *)a1 = &Spectre::Engine::ShadowMapCamera::`vftable';
  sub_180010910(a1 + 1912);
  sub_180010910(a1 + 1896);
  sub_180010910(a1 + 1880);
  v2 = *(_QWORD *)(a1 + 1872);
  if ( v2 >= 0x10 )
    sub_180010884(*(char **)(a1 + 1848), v2 + 1);
  *(_QWORD *)(a1 + 1864) = 0LL;
  *(_QWORD *)(a1 + 1872) = 15LL;
  *(_BYTE *)(a1 + 1848) = 0;
  sub_180010910(a1 + 1832);
  sub_180010910(a1 + 1816);
  sub_180010910(a1 + 1800);
  v3 = *(_QWORD *)(a1 + 1792);
  if ( v3 >= 0x10 )
    sub_180010884(*(char **)(a1 + 1768), v3 + 1);
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 15LL;
  *(_BYTE *)(a1 + 1768) = 0;
  return sub_180061488(a1, v3);
}
