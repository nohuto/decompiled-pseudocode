/*
 * XREFs of sub_18005221C @ 0x18005221C
 * Callers:
 *     sub_18008AC50 @ 0x18008AC50 (sub_18008AC50.c)
 *     sub_18008E1E0 @ 0x18008E1E0 (sub_18008E1E0.c)
 *     sub_1800AC330 @ 0x1800AC330 (sub_1800AC330.c)
 *     sub_1800AC370 @ 0x1800AC370 (sub_1800AC370.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18005221C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 96);
  }
  *a2 = *(_QWORD *)(a1 + 88);
  result = a2;
  a2[1] = v2;
  return result;
}
