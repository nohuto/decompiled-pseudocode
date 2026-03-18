/*
 * XREFs of SymCryptFdefModAddGeneric @ 0x140403F90
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E3C0 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawAdd @ 0x14040385C (SymCryptFdefRawAdd.c)
 *     SymCryptFdefRawSub @ 0x140403D3C (SymCryptFdefRawSub.c)
 *     SymCryptFdefMaskedCopy @ 0x1404059BC (SymCryptFdefMaskedCopy.c)
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
