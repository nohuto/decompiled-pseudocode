/*
 * XREFs of PspEmptyPropertySet @ 0x1407A08FC
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x1403882F0 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty(a1, result[2], 0LL);
  return result;
}
