/*
 * XREFs of XmBswapOp @ 0x140534A00
 * Callers:
 *     XmEmulateStream @ 0x1403BE6C0 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B97E8 (XmStoreResult.c)
 */

_WORD *__fastcall XmBswapOp(__int64 a1)
{
  return XmStoreResult(a1, _byteswap_ulong(*(_DWORD *)(a1 + 108)));
}
