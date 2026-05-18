/*
 * XREFs of sub_180064190 @ 0x180064190
 * Callers:
 *     sub_180064B20 @ 0x180064B20 (sub_180064B20.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18003FF34 @ 0x18003FF34 (sub_18003FF34.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_180064190(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v2 = *(_QWORD *)(a1 + 320);
  if ( v2 )
    sub_180010530(v2);
  v3 = *(_QWORD *)(a1 + 304);
  if ( v3 )
    sub_180010530(v3);
  v4 = *(_QWORD *)(a1 + 288);
  if ( v4 )
    sub_180010530(v4);
  v5 = *(_QWORD *)(a1 + 272);
  if ( v5 )
    sub_180010530(v5);
  v6 = *(_QWORD *)(a1 + 256);
  if ( v6 )
    sub_180010530(v6);
  v7 = *(_QWORD *)(a1 + 240);
  if ( v7 )
    sub_180010530(v7);
  v8 = *(_QWORD *)(a1 + 224);
  if ( v8 )
    sub_180010530(v8);
  v9 = *(_QWORD *)(a1 + 208);
  if ( v9 )
    sub_180010530(v9);
  v10 = *(_QWORD *)(a1 + 192);
  if ( v10 )
    sub_180010530(v10);
  sub_18000B4B0(a1 + 136, 16LL, 3LL);
  v11 = *(_QWORD *)(a1 + 128);
  if ( v11 )
    sub_180010530(v11);
  sub_18003FF34((void **)(a1 + 104));
  sub_18000B4B0(a1 + 56, 16LL, 3LL);
  sub_18000B4B0(a1 + 8, 16LL, 3LL);
  return sub_1800400BC((_QWORD *)a1);
}
