/*
 * XREFs of sub_180062708 @ 0x180062708
 * Callers:
 *     sub_180061C08 @ 0x180061C08 (sub_180061C08.c)
 *     sub_1800623D0 @ 0x1800623D0 (sub_1800623D0.c)
 *     sub_1800A47E4 @ 0x1800A47E4 (sub_1800A47E4.c)
 * Callees:
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_180063158 @ 0x180063158 (sub_180063158.c)
 *     sub_180063574 @ 0x180063574 (sub_180063574.c)
 */

_QWORD *__fastcall sub_180062708(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  sub_18003E330(a1);
  sub_180063574(&v5, *(_QWORD *)(a1 + 376), *(_QWORD *)(a1 + 384));
  if ( v5 == *(_QWORD *)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180063158(a2);
  }
  return a2;
}
