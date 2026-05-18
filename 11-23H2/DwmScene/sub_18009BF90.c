/*
 * XREFs of sub_18009BF90 @ 0x18009BF90
 * Callers:
 *     sub_18009C190 @ 0x18009C190 (sub_18009C190.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800105A8 @ 0x1800105A8 (sub_1800105A8.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180027964 @ 0x180027964 (sub_180027964.c)
 */

void **__fastcall sub_18009BF90(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-10h] BYREF

  *a1 = &Spectre::Engine::ImageProcessingEffectBlur::`vftable';
  v9 = 0LL;
  sub_180011020(a1 + 9, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_180010530(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011020(a1 + 36, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_180010530(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011020(a1 + 40, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_180010530(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011020(a1 + 34, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_180010530(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011020(a1 + 25, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_180010530(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011020(a1 + 23, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_180010530(*((__int64 *)&v9 + 1));
  sub_180027964(a1 + 27);
  sub_180011B24((__int64)(a1 + 42));
  v2 = a1[41];
  if ( v2 )
    sub_180010530(v2);
  v3 = a1[39];
  if ( v3 )
    sub_180010530(v3);
  v4 = a1[37];
  if ( v4 )
    sub_180010530(v4);
  v5 = a1[35];
  if ( v5 )
    sub_180010530(v5);
  sub_1800105A8((__int64)(a1 + 30));
  sub_180013300((__int64)(a1 + 27));
  v6 = a1[26];
  if ( v6 )
    sub_180010530(v6);
  v7 = a1[24];
  if ( v7 )
    sub_180010530(v7);
  return sub_180097DAC(a1);
}
