/*
 * XREFs of XmStcOp @ 0x1403724A0
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStcOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 1u;
}
