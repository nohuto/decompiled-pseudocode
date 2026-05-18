/*
 * XREFs of sub_1800CF5A0 @ 0x1800CF5A0
 * Callers:
 *     sub_1800CF834 @ 0x1800CF834 (sub_1800CF834.c)
 *     sub_1800CFAA0 @ 0x1800CFAA0 (sub_1800CFAA0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800CF5A0(_QWORD *a1, __int64 a2, __int64 a3)
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
