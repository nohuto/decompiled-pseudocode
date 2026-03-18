/*
 * XREFs of XmClcOp @ 0x140372430
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmClcOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~1u;
}
