/*
 * XREFs of sub_18005273C @ 0x18005273C
 * Callers:
 *     sub_180052860 @ 0x180052860 (sub_180052860.c)
 *     sub_180052904 @ 0x180052904 (sub_180052904.c)
 *     sub_1800529A8 @ 0x1800529A8 (sub_1800529A8.c)
 *     sub_180052A50 @ 0x180052A50 (sub_180052A50.c)
 *     sub_180053CC0 @ 0x180053CC0 (sub_180053CC0.c)
 *     sub_180053D40 @ 0x180053D40 (sub_180053D40.c)
 *     sub_180053E20 @ 0x180053E20 (sub_180053E20.c)
 *     sub_180053EC0 @ 0x180053EC0 (sub_180053EC0.c)
 *     sub_1800C446C @ 0x1800C446C (sub_1800C446C.c)
 *     sub_1800C4514 @ 0x1800C4514 (sub_1800C4514.c)
 *     sub_1800C7B90 @ 0x1800C7B90 (sub_1800C7B90.c)
 *     sub_1800C7C10 @ 0x1800C7C10 (sub_1800C7C10.c)
 *     sub_1800C7C90 @ 0x1800C7C90 (sub_1800C7C90.c)
 *     sub_1800C7D10 @ 0x1800C7D10 (sub_1800C7D10.c)
 *     sub_1800C7D90 @ 0x1800C7D90 (sub_1800C7D90.c)
 *     sub_1800C7E10 @ 0x1800C7E10 (sub_1800C7E10.c)
 *     sub_1800C7E90 @ 0x1800C7E90 (sub_1800C7E90.c)
 *     sub_1800C7F10 @ 0x1800C7F10 (sub_1800C7F10.c)
 *     sub_1800C7F90 @ 0x1800C7F90 (sub_1800C7F90.c)
 *     sub_1800C8010 @ 0x1800C8010 (sub_1800C8010.c)
 *     sub_1800C8090 @ 0x1800C8090 (sub_1800C8090.c)
 *     sub_1800C8110 @ 0x1800C8110 (sub_1800C8110.c)
 *     sub_1800C81B0 @ 0x1800C81B0 (sub_1800C81B0.c)
 *     sub_1800C8230 @ 0x1800C8230 (sub_1800C8230.c)
 *     sub_1800C82D0 @ 0x1800C82D0 (sub_1800C82D0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18005273C(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v2 )
  {
    v3 = a2[1];
    if ( v3 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    a1[1] = a2[1];
    *a1 = v2;
  }
  return a1;
}
