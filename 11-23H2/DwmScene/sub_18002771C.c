/*
 * XREFs of sub_18002771C @ 0x18002771C
 * Callers:
 *     sub_180025108 @ 0x180025108 (sub_180025108.c)
 *     sub_180051F74 @ 0x180051F74 (sub_180051F74.c)
 *     sub_180052044 @ 0x180052044 (sub_180052044.c)
 *     sub_180052114 @ 0x180052114 (sub_180052114.c)
 *     sub_1800521E4 @ 0x1800521E4 (sub_1800521E4.c)
 *     sub_1800522B4 @ 0x1800522B4 (sub_1800522B4.c)
 *     sub_180052384 @ 0x180052384 (sub_180052384.c)
 *     sub_180052454 @ 0x180052454 (sub_180052454.c)
 *     sub_180052524 @ 0x180052524 (sub_180052524.c)
 *     sub_180059C94 @ 0x180059C94 (sub_180059C94.c)
 *     sub_180061784 @ 0x180061784 (sub_180061784.c)
 *     sub_1800915D4 @ 0x1800915D4 (sub_1800915D4.c)
 *     sub_18009BD28 @ 0x18009BD28 (sub_18009BD28.c)
 *     sub_1800C207C @ 0x1800C207C (sub_1800C207C.c)
 *     sub_1800C214C @ 0x1800C214C (sub_1800C214C.c)
 *     sub_1800C221C @ 0x1800C221C (sub_1800C221C.c)
 *     sub_1800C22EC @ 0x1800C22EC (sub_1800C22EC.c)
 *     sub_1800C23BC @ 0x1800C23BC (sub_1800C23BC.c)
 *     sub_1800C248C @ 0x1800C248C (sub_1800C248C.c)
 *     sub_1800C255C @ 0x1800C255C (sub_1800C255C.c)
 *     sub_1800C262C @ 0x1800C262C (sub_1800C262C.c)
 *     sub_1800C26FC @ 0x1800C26FC (sub_1800C26FC.c)
 *     sub_1800C27CC @ 0x1800C27CC (sub_1800C27CC.c)
 *     sub_1800C289C @ 0x1800C289C (sub_1800C289C.c)
 *     sub_1800C296C @ 0x1800C296C (sub_1800C296C.c)
 *     sub_1800C2A3C @ 0x1800C2A3C (sub_1800C2A3C.c)
 *     sub_1800C2B0C @ 0x1800C2B0C (sub_1800C2B0C.c)
 *     sub_1800C2BDC @ 0x1800C2BDC (sub_1800C2BDC.c)
 *     sub_1800C2CAC @ 0x1800C2CAC (sub_1800C2CAC.c)
 *     sub_1800C2D7C @ 0x1800C2D7C (sub_1800C2D7C.c)
 *     sub_1800D57BC @ 0x1800D57BC (sub_1800D57BC.c)
 *     sub_1800E0400 @ 0x1800E0400 (sub_1800E0400.c)
 * Callees:
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_18002771C(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      sub_18001DE1C(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
