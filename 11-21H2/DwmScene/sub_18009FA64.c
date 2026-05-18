/*
 * XREFs of sub_18009FA64 @ 0x18009FA64
 * Callers:
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18009FA64(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 104);
  }
  *a2 = *(_QWORD *)(a1 + 96);
  result = a2;
  a2[1] = v2;
  return result;
}
