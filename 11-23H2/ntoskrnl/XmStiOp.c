/*
 * XREFs of XmStiOp @ 0x1403724C0
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStiOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 0x200u;
}
