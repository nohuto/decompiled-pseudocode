/*
 * XREFs of SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater @ 0x1403F34C8
 * Callers:
 *     SymCryptCpuidExFunc @ 0x1403B6C68 (SymCryptCpuidExFunc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater(_DWORD *a1, unsigned int a2)
{
  __int64 result; // rax

  _RAX = a2;
  __asm { cpuid }
  *a1 = result;
  a1[1] = _RBX;
  a1[2] = _RCX;
  a1[3] = _RDX;
  return result;
}
