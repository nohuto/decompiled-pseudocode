/*
 * XREFs of SymCryptFdefSizeofDivisorFromDigits @ 0x140405B60
 * Callers:
 *     SymCryptSizeofDivisorFromDigits @ 0x1403F9A58 (SymCryptSizeofDivisorFromDigits.c)
 *     SymCryptFdefModulusCopyFixupMontgomery @ 0x140405270 (SymCryptFdefModulusCopyFixupMontgomery.c)
 *     SymCryptFdefModulusInitMontgomeryInternal @ 0x140405370 (SymCryptFdefModulusInitMontgomeryInternal.c)
 *     SymCryptFdefSizeofModulusFromDigits @ 0x14040549C (SymCryptFdefSizeofModulusFromDigits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefSizeofDivisorFromDigits(int a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    return 0LL;
  else
    return (unsigned int)((a1 + 1) << 6);
}
