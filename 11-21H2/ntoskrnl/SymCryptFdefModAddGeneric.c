/*
 * XREFs of SymCryptFdefModAddGeneric @ 0x14040B8A0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawAdd @ 0x14040B164 (SymCryptFdefRawAdd.c)
 *     SymCryptFdefRawSub @ 0x14040B644 (SymCryptFdefRawSub.c)
 *     SymCryptFdefMaskedCopy @ 0x14040D3B0 (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptFdefModAddGeneric(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d

  v5 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  SymCryptFdefRawAdd(a2, a3, a4, v5);
  SymCryptFdefRawSub(a4, a1 + 128, a5, v5);
  return SymCryptFdefMaskedCopy(a5, a4, v5);
}
