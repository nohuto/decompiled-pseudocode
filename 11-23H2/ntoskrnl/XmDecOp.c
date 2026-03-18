/*
 * XREFs of XmDecOp @ 0x1403B8900
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x1403B8E78 (XmSubOperands.c)
 */

__int64 __fastcall XmDecOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmSubOperands(a1, 0LL);
}
