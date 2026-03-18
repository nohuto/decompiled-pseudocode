/*
 * XREFs of SymCryptFatal @ 0x14056D1A4
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403F3340 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403F3418 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptInitEnvCommon @ 0x1403F645C (SymCryptInitEnvCommon.c)
 *     SymCryptFdefModSetRandomGeneric @ 0x140404E4C (SymCryptFdefModSetRandomGeneric.c)
 * Callees:
 *     SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x1403F3314 (SymCryptFatalEnvWindowsKernelmodeWin8_1nLater.c)
 */

void __fastcall __noreturn SymCryptFatal(ULONG_PTR a1)
{
  SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(a1);
}
