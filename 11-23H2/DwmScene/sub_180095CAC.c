/*
 * XREFs of sub_180095CAC @ 0x180095CAC
 * Callers:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 */

__int64 __fastcall sub_180095CAC(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-10h] BYREF

  *a1 = &Spectre::Engine::ImageProcessingEffectBloom::`vftable';
  v9 = 0LL;
  sub_180011020(a1 + 23, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_180010530(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011020(a1 + 31, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_180010530(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011020(a1 + 25, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_180010530(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011020(a1 + 29, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_180010530(*((__int64 *)&v9 + 1));
  v2 = a1[34];
  if ( v2 )
    sub_180010530(v2);
  v3 = a1[32];
  if ( v3 )
    sub_180010530(v3);
  v4 = a1[30];
  if ( v4 )
    sub_180010530(v4);
  v5 = a1[28];
  if ( v5 )
    sub_180010530(v5);
  v6 = a1[26];
  if ( v6 )
    sub_180010530(v6);
  v7 = a1[24];
  if ( v7 )
    sub_180010530(v7);
  return sub_180097DAC(a1);
}
