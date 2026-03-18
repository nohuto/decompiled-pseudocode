/*
 * XREFs of XmTestOp @ 0x1403A2750
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmSetLogicalResult @ 0x1403A2A38 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmTestOp(__int64 a1)
{
  return XmSetLogicalResult(a1, (unsigned int)(*(_DWORD *)(a1 + 104) & *(_DWORD *)(a1 + 108)));
}
