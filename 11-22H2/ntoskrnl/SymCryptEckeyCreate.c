/*
 * XREFs of SymCryptEckeyCreate @ 0x1403F8268
 * Callers:
 *     SymCryptEckeyAllocate @ 0x1403F8214 (SymCryptEckeyAllocate.c)
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x1403F81B4 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptIntCreate @ 0x1403F8CE8 (SymCryptIntCreate.c)
 *     SymCryptSizeofIntFromDigits @ 0x1403F9410 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptEcpointCreate @ 0x1403FE9C0 (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x1403FF334 (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptEckeyCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // ebx

  v5 = SymCryptEcurveDigitsofScalarMultiplier(a3);
  v6 = (unsigned int)SymCryptSizeofEcpointFromCurve(a3);
  v8 = SymCryptSizeofIntFromDigits(v5, v7);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = SymCryptEcpointCreate(a1 + 64, (unsigned int)v6, a3);
  *(_QWORD *)(a1 + 24) = SymCryptIntCreate(v6 + a1 + 64, v8, v5);
  return a1;
}
