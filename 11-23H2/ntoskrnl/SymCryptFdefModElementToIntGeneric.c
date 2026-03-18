/*
 * XREFs of SymCryptFdefModElementToIntGeneric @ 0x140404464
 * Callers:
 *     SymCryptModElementToInt @ 0x1403F97FC (SymCryptModElementToInt.c)
 *     SymCryptFdefModInvGeneric @ 0x1404044E0 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E3C0 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x1403F6508 (SymCryptWipe.c)
 *     memmove @ 0x140435700 (memmove.c)
 */

void __fastcall SymCryptFdefModElementToIntGeneric(__int64 a1, const void *a2, __int64 a3)
{
  memmove((void *)(a3 + 32), a2, (unsigned int)(*(_DWORD *)(a1 + 4) << 6));
  SymCryptWipe(
    a3 + 32 + 4LL * (unsigned int)(16 * *(_DWORD *)(a1 + 4)),
    (unsigned int)((*(_DWORD *)(a3 + 4) - *(_DWORD *)(a1 + 4)) << 6));
  xHalTimerWatchdogStop();
}
