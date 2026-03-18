/*
 * XREFs of XmStiOp @ 0x140372DD0
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStiOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 0x200u;
}
