/*
 * XREFs of sub_1405B2D58 @ 0x1405B2D58
 * Callers:
 *     sub_140978990 @ 0x140978990 (sub_140978990.c)
 * Callees:
 *     sub_1405B2D80 @ 0x1405B2D80 (sub_1405B2D80.c)
 */

__int64 __fastcall sub_1405B2D58(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = sub_1405B2D80(a1, *(_QWORD *)(a1 + 144));
  if ( v1 )
    return *(_QWORD *)(v1 + 8);
  return v2;
}
