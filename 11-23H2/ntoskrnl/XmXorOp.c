/*
 * XREFs of XmXorOp @ 0x1403A3A20
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     XmSetLogicalResult @ 0x1403B8DF0 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmXorOp(__int64 a1)
{
  return XmSetLogicalResult(a1, (unsigned int)(*(_DWORD *)(a1 + 104) ^ *(_DWORD *)(a1 + 108)));
}
