/*
 * XREFs of sub_180024724 @ 0x180024724
 * Callers:
 *     sub_180025178 @ 0x180025178 (sub_180025178.c)
 *     sub_18005927C @ 0x18005927C (sub_18005927C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180024724(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a1 = a3;
  a1[1] = *(_QWORD *)(a2 + 8);
  return a1;
}
