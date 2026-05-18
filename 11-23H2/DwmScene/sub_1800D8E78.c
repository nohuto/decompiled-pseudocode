/*
 * XREFs of sub_1800D8E78 @ 0x1800D8E78
 * Callers:
 *     sub_1800D8F20 @ 0x1800D8F20 (sub_1800D8F20.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 */

__int64 __fastcall sub_1800D8E78(__int64 a1)
{
  __int64 v2; // rcx

  sub_180027FD4((void **)(a1 + 552));
  v2 = *(_QWORD *)(a1 + 544);
  if ( v2 )
    sub_180010530(v2);
  sub_18000E72C((__int64 *)(a1 + 528));
  sub_18000E72C((__int64 *)(a1 + 520));
  sub_18000E72C((__int64 *)(a1 + 512));
  return sub_18002B9A8(a1);
}
