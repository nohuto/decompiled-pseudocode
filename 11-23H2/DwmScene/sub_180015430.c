/*
 * XREFs of sub_180015430 @ 0x180015430
 * Callers:
 *     sub_18001762C @ 0x18001762C (sub_18001762C.c)
 *     sub_1800CF8FC @ 0x1800CF8FC (sub_1800CF8FC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180015430(_QWORD *a1, __int64 a2, __int64 a3)
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
