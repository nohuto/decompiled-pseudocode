/*
 * XREFs of SymCryptFdefModElementConditionalSwap @ 0x140404340
 * Callers:
 *     SymCryptModElementConditionalSwap @ 0x1403F981C (SymCryptModElementConditionalSwap.c)
 * Callees:
 *     SymCryptFdefConditionalSwap @ 0x140405774 (SymCryptFdefConditionalSwap.c)
 */

__int64 __fastcall SymCryptFdefModElementConditionalSwap(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefConditionalSwap(a2, a3, *(unsigned int *)(a1 + 4));
}
