/*
 * XREFs of XmNegOp @ 0x140535760
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x1403A2C48 (XmSubOperands.c)
 */

__int64 __fastcall XmNegOp(_DWORD *a1)
{
  int v1; // eax

  v1 = a1[26];
  a1[26] = 0;
  a1[27] = v1;
  return XmSubOperands(a1, 0);
}
