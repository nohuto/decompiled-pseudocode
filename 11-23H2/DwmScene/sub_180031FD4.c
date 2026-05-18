/*
 * XREFs of sub_180031FD4 @ 0x180031FD4
 * Callers:
 *     sub_180038230 @ 0x180038230 (sub_180038230.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 */

__int64 __fastcall sub_180031FD4(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 )
    sub_180010530(v2);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 56));
  sub_180013300(a1 + 24);
  return sub_180013300(a1);
}
