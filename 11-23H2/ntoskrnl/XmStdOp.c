/*
 * XREFs of XmStdOp @ 0x1403724B0
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStdOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 0x400u;
}
