/*
 * XREFs of sub_180097628 @ 0x180097628
 * Callers:
 *     sub_18006FE14 @ 0x18006FE14 (sub_18006FE14.c)
 *     sub_1800701E0 @ 0x1800701E0 (sub_1800701E0.c)
 *     sub_18007048C @ 0x18007048C (sub_18007048C.c)
 *     sub_1800E84E2 @ 0x1800E84E2 (sub_1800E84E2.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180097628(__int64 a1)
{
  __int64 v2; // rcx

  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 48));
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_180010530(v2);
  return sub_180013300(a1);
}
