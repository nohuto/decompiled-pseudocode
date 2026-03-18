/*
 * XREFs of SymCryptFdefModulusInitMontgomeryInternal @ 0x140405370
 * Callers:
 *     SymCryptFdefModulusInitMontgomery @ 0x140405320 (SymCryptFdefModulusInitMontgomery.c)
 *     SymCryptFdefModulusInitMontgomery256 @ 0x140405350 (SymCryptFdefModulusInitMontgomery256.c)
 *     SymCryptFdef369ModulusInitMontgomery @ 0x140409A00 (SymCryptFdef369ModulusInitMontgomery.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F6508 (SymCryptWipe.c)
 *     SymCryptFdefRawDivMod @ 0x1404038A8 (SymCryptFdefRawDivMod.c)
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x140405B60 (SymCryptFdefSizeofDivisorFromDigits.c)
 *     SymCryptInverseMod2e64 @ 0x140405B98 (SymCryptInverseMod2e64.c)
 */

__int64 __fastcall SymCryptFdefModulusInitMontgomeryInternal(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v3; // ebp
  void *v7; // rsi
  __int64 v8; // r14
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 4);
  v7 = (void *)((unsigned int)SymCryptFdefSizeofDivisorFromDigits(v3) + a1 + 64);
  v8 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 40) = v7;
  SymCryptWipe((__int64)a3, (v3 << 7) + 64);
  a3[2 * a2] = 1;
  SymCryptFdefRawDivMod(a3, 2 * v3 + 1, (_DWORD *)(a1 + 64), 0LL, v7, &a3[32 * v3 + 16]);
  result = -SymCryptInverseMod2e64(v8);
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
