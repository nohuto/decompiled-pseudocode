/*
 * XREFs of sub_18002B9A8 @ 0x18002B9A8
 * Callers:
 *     sub_18002BC60 @ 0x18002BC60 (sub_18002BC60.c)
 *     sub_1800C9020 @ 0x1800C9020 (sub_1800C9020.c)
 *     sub_1800D8E78 @ 0x1800D8E78 (sub_1800D8E78.c)
 *     sub_1800F1846 @ 0x1800F1846 (sub_1800F1846.c)
 *     unknown_libname_74 @ 0x1800F1BD9 (unknown_libname_74.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180027804 @ 0x180027804 (sub_180027804.c)
 *     sub_18002B908 @ 0x18002B908 (sub_18002B908.c)
 *     sub_18002D584 @ 0x18002D584 (sub_18002D584.c)
 */

__int64 __fastcall sub_18002B9A8(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rcx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::RenderOutput::`vftable';
  *(_OWORD *)v11 = 0LL;
  sub_180011020((_QWORD *)(a1 + 208), v11);
  if ( v11[1] )
    sub_180010530(v11[1]);
  v2 = *(volatile signed __int32 **)(a1 + 496);
  if ( v2 )
    sub_180010574(v2);
  sub_18002B908((_QWORD *)(a1 + 472));
  v3 = *(_QWORD *)(a1 + 464);
  if ( v3 )
    sub_180010530(v3);
  v4 = *(_QWORD *)(a1 + 448);
  if ( v4 )
    sub_180010530(v4);
  sub_18002D584(a1 + 416);
  v5 = *(_QWORD *)(a1 + 392);
  if ( v5 )
    sub_180010530(v5);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 304));
  v6 = *(_QWORD *)(a1 + 264);
  if ( v6 )
    sub_180010530(v6);
  v7 = *(_QWORD *)(a1 + 248);
  if ( v7 )
    sub_180010530(v7);
  v8 = *(_QWORD *)(a1 + 216);
  if ( v8 )
    sub_180010530(v8);
  sub_180027804(a1 + 128);
  v9 = *(volatile signed __int32 **)(a1 + 88);
  if ( v9 )
    sub_180010574(v9);
  return sub_18002B970((_QWORD *)a1);
}
