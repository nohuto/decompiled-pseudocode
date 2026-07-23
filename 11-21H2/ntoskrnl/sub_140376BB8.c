/*
 * XREFs of sub_140376BB8 @ 0x140376BB8
 * Callers:
 *     sub_140376B48 @ 0x140376B48 (sub_140376B48.c)
 *     sub_1405FCF84 @ 0x1405FCF84 (sub_1405FCF84.c)
 * Callees:
 *     sub_14037D2EC @ 0x14037D2EC (sub_14037D2EC.c)
 */

__int64 __fastcall sub_140376BB8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  if ( a5 )
  {
    a5[1] = 0LL;
    *a5 = a4;
  }
  *(_QWORD *)(a3 + 32) = a5;
  sub_14037D2EC(a2, a3, 0LL);
  return 259LL;
}
