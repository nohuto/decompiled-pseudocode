/*
 * XREFs of XmXaddOp @ 0x140533380
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     XmAddOperands @ 0x1403B8C88 (XmAddOperands.c)
 *     XmStoreResult @ 0x1403B9608 (XmStoreResult.c)
 */

_WORD *__fastcall XmXaddOp(__int64 a1)
{
  int v1; // ebx

  v1 = *(_DWORD *)(a1 + 104);
  XmAddOperands(a1, 0);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 96);
  return XmStoreResult(a1, v1);
}
