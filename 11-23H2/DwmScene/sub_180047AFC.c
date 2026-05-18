/*
 * XREFs of sub_180047AFC @ 0x180047AFC
 * Callers:
 *     sub_1800473C0 @ 0x1800473C0 (sub_1800473C0.c)
 *     sub_18006296C @ 0x18006296C (sub_18006296C.c)
 *     sub_180062A60 @ 0x180062A60 (sub_180062A60.c)
 *     sub_180097908 @ 0x180097908 (sub_180097908.c)
 *     sub_1800C9FBC @ 0x1800C9FBC (sub_1800C9FBC.c)
 *     sub_1800D4730 @ 0x1800D4730 (sub_1800D4730.c)
 *     sub_1800D55C0 @ 0x1800D55C0 (sub_1800D55C0.c)
 *     sub_1800D7480 @ 0x1800D7480 (sub_1800D7480.c)
 *     sub_1800D7720 @ 0x1800D7720 (sub_1800D7720.c)
 *     sub_1800D79D0 @ 0x1800D79D0 (sub_1800D79D0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180047AFC(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  v3 = *a2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a1[1] = a2[1];
  result = a1;
  *a1 = v3;
  return result;
}
