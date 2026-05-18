/*
 * XREFs of sub_180090760 @ 0x180090760
 * Callers:
 *     sub_180092B70 @ 0x180092B70 (sub_180092B70.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180090760(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 1184);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 1184);
  }
  *a2 = *(_QWORD *)(a1 + 1176);
  result = a2;
  a2[1] = v2;
  return result;
}
