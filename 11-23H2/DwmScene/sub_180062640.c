/*
 * XREFs of sub_180062640 @ 0x180062640
 * Callers:
 *     sub_1800618F8 @ 0x1800618F8 (sub_1800618F8.c)
 *     sub_180061EF0 @ 0x180061EF0 (sub_180061EF0.c)
 * Callees:
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_180063088 @ 0x180063088 (sub_180063088.c)
 *     sub_180063760 @ 0x180063760 (sub_180063760.c)
 */

_QWORD *__fastcall sub_180062640(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  sub_18003E330(a1);
  sub_180063760(&v5, *(_QWORD *)(a1 + 376), *(_QWORD *)(a1 + 384));
  if ( v5 == *(_QWORD *)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180063088(a2);
  }
  return a2;
}
