/*
 * XREFs of SymCryptFdefModSquareGeneric @ 0x14040C930
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawDivMod @ 0x14040B1B0 (SymCryptFdefRawDivMod.c)
 *     SymCryptFdefRawSquare @ 0x14040B5F0 (SymCryptFdefRawSquare.c)
 */

void __fastcall SymCryptFdefModSquareGeneric(__int64 a1, __int64 a2, void *a3, void *a4)
{
  unsigned int v4; // r14d

  v4 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  SymCryptFdefRawSquare(a2, v4, (__int64)a4);
  SymCryptFdefRawDivMod(a4, 2 * v4, (_DWORD *)(a1 + 64), 0LL, a3, (_DWORD *)a4 + 32 * v4);
}
