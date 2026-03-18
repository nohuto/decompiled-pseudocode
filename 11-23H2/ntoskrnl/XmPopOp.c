/*
 * XREFs of XmPopOp @ 0x1403B9050
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     XmPopStack @ 0x1403B9474 (XmPopStack.c)
 *     XmStoreResult @ 0x1403B9608 (XmStoreResult.c)
 */

__int64 __fastcall XmPopOp(__int64 a1)
{
  unsigned int v2; // eax

  v2 = XmPopStack(a1);
  return XmStoreResult(a1, v2);
}
