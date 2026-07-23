/*
 * XREFs of XmCldOp @ 0x1403725E0
 * Callers:
 *     XmEmulateStream @ 0x1403BE6C0 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmCldOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x400u;
}
