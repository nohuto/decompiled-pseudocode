/*
 * XREFs of XmStcOp @ 0x140372DB0
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStcOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 1u;
}
