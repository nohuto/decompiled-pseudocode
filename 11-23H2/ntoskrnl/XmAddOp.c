/*
 * XREFs of XmAddOp @ 0x14039BDC0
 * Callers:
 *     XmEmulateStream @ 0x1403BE6C0 (XmEmulateStream.c)
 * Callees:
 *     XmAddOperands @ 0x1403B8E68 (XmAddOperands.c)
 */

__int64 __fastcall XmAddOp(__int64 a1)
{
  return XmAddOperands(a1, 0LL);
}
