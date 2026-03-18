/*
 * XREFs of SymCryptModElementSetValueUint32 @ 0x1403F978C
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F80AC (SymCryptEcurveAllocate.c)
 *     SymCryptEcpointTransform @ 0x1403FF464 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsSetZero @ 0x1404007F0 (SymCryptTwistedEdwardsSetZero.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140400E40 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassSetZero @ 0x140402B70 (SymCryptShortWeierstrassSetZero.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140409254 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140409380 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefModElementSetValueUint32Generic @ 0x1404043E0 (SymCryptFdefModElementSetValueUint32Generic.c)
 */

__int64 __fastcall SymCryptModElementSetValueUint32(int a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  SymCryptFdefModElementSetValueUint32Generic(a1, (_DWORD)a2, a3, a4, a5);
  return (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))((char *)off_1400064D0 + (*a2 & 0x380)))(
           a2,
           a3,
           a4,
           a5);
}
