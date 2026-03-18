/*
 * XREFs of XmXorOp @ 0x1403D5C90
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmSetLogicalResult @ 0x1403A2A38 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmXorOp(__int64 a1)
{
  return XmSetLogicalResult(a1, *(_DWORD *)(a1 + 104) ^ *(_DWORD *)(a1 + 108));
}
