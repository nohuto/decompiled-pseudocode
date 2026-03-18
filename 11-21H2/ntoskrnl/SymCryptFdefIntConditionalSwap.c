/*
 * XREFs of SymCryptFdefIntConditionalSwap @ 0x14040D144
 * Callers:
 *     SymCryptIntConditionalSwap @ 0x140400B74 (SymCryptIntConditionalSwap.c)
 * Callees:
 *     SymCryptFdefConditionalSwapC @ 0x14040CF60 (SymCryptFdefConditionalSwapC.c)
 */

void __fastcall SymCryptFdefIntConditionalSwap(__int64 a1, __int64 a2, char a3)
{
  SymCryptFdefConditionalSwapC(a1 + 32, a2 + 32, *(_DWORD *)(a1 + 4), a3);
}
