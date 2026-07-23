/*
 * XREFs of XmSubOp @ 0x1403B0090
 * Callers:
 *     XmEmulateStream @ 0x1403BE6C0 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x1403B9058 (XmSubOperands.c)
 */

__int64 __fastcall XmSubOp(__int64 a1)
{
  return XmSubOperands(a1, 0LL);
}
