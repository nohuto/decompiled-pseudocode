/*
 * XREFs of SymCryptEcpointMaskedCopy @ 0x1403FF228
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE8B0 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptShortWeierstrassAdd @ 0x140401250 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     SymCryptFdefMaskedCopy @ 0x1404059BC (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptEcpointMaskedCopy(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  *a3 &= *a2;
  return SymCryptFdefMaskedCopy(a2 + 32, a3 + 32, *(_DWORD *)(a1 + 16) * (*(_DWORD *)(a1 + 8) & 0xFu));
}
