/*
 * XREFs of sub_180059984 @ 0x180059984
 * Callers:
 *     sub_180059DC0 @ 0x180059DC0 (sub_180059DC0.c)
 *     sub_18008DAF4 @ 0x18008DAF4 (sub_18008DAF4.c)
 *     sub_180091FD8 @ 0x180091FD8 (sub_180091FD8.c)
 *     sub_180097A18 @ 0x180097A18 (sub_180097A18.c)
 *     sub_1800EA744 @ 0x1800EA744 (sub_1800EA744.c)
 *     sub_1800EAAF7 @ 0x1800EAAF7 (sub_1800EAAF7.c)
 *     sub_1800EAC77 @ 0x1800EAC77 (sub_1800EAC77.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_18001F750 @ 0x18001F750 (sub_18001F750.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 *     sub_1800598B0 @ 0x1800598B0 (sub_1800598B0.c)
 *     sub_18005E880 @ 0x18005E880 (sub_18005E880.c)
 */

void **__fastcall sub_180059984(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Camera::`vftable';
  sub_18001DE1C(a1 + 1704, a2);
  v3 = *(_QWORD *)(a1 + 1688);
  if ( v3 )
    sub_180010530(v3);
  v4 = *(_QWORD *)(a1 + 1672);
  if ( v4 )
    sub_180010530(v4);
  v5 = *(_QWORD *)(a1 + 1656);
  if ( v5 )
    sub_180010530(v5);
  v6 = *(_QWORD *)(a1 + 1640);
  if ( v6 )
    sub_180010530(v6);
  sub_1800598B0((void **)(a1 + 1616));
  sub_180027FD4((void **)(a1 + 448));
  sub_18001F750(a1 + 416);
  if ( *(_BYTE *)(a1 + 388) )
    *(_BYTE *)(a1 + 388) = 0;
  sub_180011B24(a1 + 248);
  sub_180011B24(a1 + 216);
  sub_180011B24(a1 + 184);
  v7 = *(_QWORD *)(a1 + 160);
  if ( v7 )
    sub_180010530(v7);
  v8 = *(_QWORD *)(a1 + 144);
  if ( v8 )
    sub_180010530(v8);
  sub_18005E880(a1 + 104);
  return sub_180042F3C((_QWORD *)a1);
}
