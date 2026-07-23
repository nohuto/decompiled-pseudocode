/*
 * XREFs of XmStdOp @ 0x140372650
 * Callers:
 *     XmEmulateStream @ 0x1403BE6C0 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStdOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 0x400u;
}
