/*
 * XREFs of sub_18001872C @ 0x18001872C
 * Callers:
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_18004D458 @ 0x18004D458 (sub_18004D458.c)
 *     sub_18004EABC @ 0x18004EABC (sub_18004EABC.c)
 *     sub_180065B00 @ 0x180065B00 (sub_180065B00.c)
 *     sub_18006B3A0 @ 0x18006B3A0 (sub_18006B3A0.c)
 *     sub_18006B4A4 @ 0x18006B4A4 (sub_18006B4A4.c)
 *     sub_1800E0390 @ 0x1800E0390 (sub_1800E0390.c)
 *     sub_1800EC130 @ 0x1800EC130 (sub_1800EC130.c)
 *     sub_1800ED330 @ 0x1800ED330 (sub_1800ED330.c)
 *     sub_1800EFC50 @ 0x1800EFC50 (sub_1800EFC50.c)
 *     sub_1800EFF90 @ 0x1800EFF90 (sub_1800EFF90.c)
 *     sub_1800F02D0 @ 0x1800F02D0 (sub_1800F02D0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001872C(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  v3 = *a2;
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  a1[1] = v2;
  result = a1;
  *a1 = v3;
  return result;
}
