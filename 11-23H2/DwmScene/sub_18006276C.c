/*
 * XREFs of sub_18006276C @ 0x18006276C
 * Callers:
 *     sub_180061D28 @ 0x180061D28 (sub_180061D28.c)
 *     sub_180062508 @ 0x180062508 (sub_180062508.c)
 * Callees:
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_180063228 @ 0x180063228 (sub_180063228.c)
 *     sub_1800636BC @ 0x1800636BC (sub_1800636BC.c)
 */

_QWORD *__fastcall sub_18006276C(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  sub_18003E330(a1);
  sub_1800636BC(&v5, *(_QWORD *)(a1 + 376), *(_QWORD *)(a1 + 384));
  if ( v5 == *(_QWORD *)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180063228(a2);
  }
  return a2;
}
