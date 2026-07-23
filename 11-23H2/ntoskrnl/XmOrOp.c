/*
 * XREFs of XmOrOp @ 0x1403B8B20
 * Callers:
 *     XmEmulateStream @ 0x1403BE6C0 (XmEmulateStream.c)
 * Callees:
 *     XmSetLogicalResult @ 0x1403B8FD0 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmOrOp(__int64 a1)
{
  return XmSetLogicalResult(a1, (unsigned int)(*(_DWORD *)(a1 + 104) | *(_DWORD *)(a1 + 108)));
}
