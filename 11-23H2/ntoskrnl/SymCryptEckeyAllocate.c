/*
 * XREFs of SymCryptEckeyAllocate @ 0x1403F8874
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A771D4 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyCreate @ 0x1403F88C8 (SymCryptEckeyCreate.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x1403F8F1C (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptCallbackAlloc @ 0x14067D9E0 (SymCryptCallbackAlloc.c)
 */

__int64 __fastcall SymCryptEckeyAllocate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rax

  v2 = 0LL;
  v3 = (unsigned int)SymCryptSizeofEckeyFromCurve();
  v4 = SymCryptCallbackAlloc(v3);
  if ( v4 )
    return SymCryptEckeyCreate(v4, (unsigned int)v3, a1);
  return v2;
}
