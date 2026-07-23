/*
 * XREFs of XmPopOp @ 0x1403B9230
 * Callers:
 *     XmEmulateStream @ 0x1403BE6C0 (XmEmulateStream.c)
 * Callees:
 *     XmPopStack @ 0x1403B9654 (XmPopStack.c)
 *     XmStoreResult @ 0x1403B97E8 (XmStoreResult.c)
 */

__int64 __fastcall XmPopOp(__int64 a1)
{
  unsigned int v2; // eax

  v2 = XmPopStack(a1);
  return XmStoreResult(a1, v2);
}
