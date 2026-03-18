/*
 * XREFs of HalpReleaseSecondaryIcEntryShared @ 0x1404593D2
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x14051D1A0 (HalpDisableSecondaryInterrupt.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14051D410 (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x14051D768 (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x14051DAC0 (HalpUnregisterSecondaryIcInterface.c)
 *     HalpEnableSecondaryInterrupt @ 0x140909678 (HalpEnableSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140909764 (HalpQueryPrimaryInterruptInformation.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     HalpInsertSecondarySignalList @ 0x14051D4F4 (HalpInsertSecondarySignalList.c)
 */

LONG __fastcall HalpReleaseSecondaryIcEntryShared(__int64 a1, __int64 a2)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 112));
  if ( (_BYTE)a2 )
  {
    if ( result == 1 )
    {
      result = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 116), 0, 0);
      if ( result )
      {
        if ( KeGetCurrentIrql() <= 2u )
          return KeSetEvent((PRKEVENT)(a1 + 120), 0, 0);
        else
          return HalpInsertSecondarySignalList(a1, a2, 0LL);
      }
    }
  }
  return result;
}
