/*
 * XREFs of sub_18006958C @ 0x18006958C
 * Callers:
 *     sub_180049AF0 @ 0x180049AF0 (sub_180049AF0.c)
 *     sub_180049BBC @ 0x180049BBC (sub_180049BBC.c)
 *     sub_180068BC0 @ 0x180068BC0 (sub_180068BC0.c)
 *     sub_180069018 @ 0x180069018 (sub_180069018.c)
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 *     sub_1800953A0 @ 0x1800953A0 (sub_1800953A0.c)
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 *     sub_1800ACF60 @ 0x1800ACF60 (sub_1800ACF60.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18006958C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 448);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 448);
  }
  *a2 = *(_QWORD *)(a1 + 440);
  result = a2;
  a2[1] = v2;
  return result;
}
