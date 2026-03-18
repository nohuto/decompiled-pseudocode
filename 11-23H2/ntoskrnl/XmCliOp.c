/*
 * XREFs of XmCliOp @ 0x140372450
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmCliOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x200u;
}
