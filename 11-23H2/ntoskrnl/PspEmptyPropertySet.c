/*
 * XREFs of PspEmptyPropertySet @ 0x14076E4A4
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x1403C4E38 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty(a1, result[2], 0LL);
  return result;
}
