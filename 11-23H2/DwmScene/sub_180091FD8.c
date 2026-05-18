/*
 * XREFs of sub_180091FD8 @ 0x180091FD8
 * Callers:
 *     sub_1800920D0 @ 0x1800920D0 (sub_1800920D0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

void **__fastcall sub_180091FD8(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::ViewerCamera::`vftable';
  v3 = a1[224];
  if ( v3 )
    sub_180010530(v3);
  v4 = a1[222];
  if ( v4 )
    sub_180010530(v4);
  return sub_180059984((__int64)a1, a2);
}
