/*
 * XREFs of MiSetPfnOriginalPte @ 0x14040F2A0
 * Callers:
 *     SymCryptModExpWindowed @ 0x140409560 (SymCryptModExpWindowed.c)
 *     MmFreeNonCachedMemory @ 0x140A2DDB0 (MmFreeNonCachedMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
