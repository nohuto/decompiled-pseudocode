/*
 * XREFs of SymCryptFdefIntConditionalSwap @ 0x140405958
 * Callers:
 *     SymCryptIntConditionalSwap @ 0x1403F94E0 (SymCryptIntConditionalSwap.c)
 * Callees:
 *     SymCryptFdefConditionalSwapC @ 0x14040578C (SymCryptFdefConditionalSwapC.c)
 */

void __fastcall SymCryptFdefIntConditionalSwap(__int64 a1, __int64 a2, char a3)
{
  SymCryptFdefConditionalSwapC(a1 + 32, a2 + 32, *(_DWORD *)(a1 + 4), a3);
}
