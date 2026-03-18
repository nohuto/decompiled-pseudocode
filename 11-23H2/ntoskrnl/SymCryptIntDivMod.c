/*
 * XREFs of SymCryptIntDivMod @ 0x1403F9360
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F75C8 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptEckeySetValue @ 0x1403F8A98 (SymCryptEckeySetValue.c)
 *     SymCryptIntExtendedGcd @ 0x1403FDD64 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntDivMod @ 0x140403228 (SymCryptFdefIntDivMod.c)
 */

__int64 __fastcall SymCryptIntDivMod(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return SymCryptFdefIntDivMod(a1, a2, a3, a4, a5, a6);
}
