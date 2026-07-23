/*
 * XREFs of sub_1405E47C4 @ 0x1405E47C4
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     sub_1409B75F8 @ 0x1409B75F8 (sub_1409B75F8.c)
 */

__int64 __fastcall sub_1405E47C4(__int64 a1, __int64 a2, _QWORD *a3)
{
  if ( a3 )
    return sub_1409B75F8(*a3, a3[1], a3[2]);
  else
    return 3221225713LL;
}
