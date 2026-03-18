/*
 * XREFs of HalpReleaseSecondaryIcEntryShared @ 0x14037CED0
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x140519D78 (HalpDisableSecondaryInterrupt.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x140519F04 (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x14051A25C (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x14051A540 (HalpUnregisterSecondaryIcInterface.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x14081E41C (HalpQueryPrimaryInterruptInformation.c)
 *     HalpEnableSecondaryInterrupt @ 0x140862314 (HalpEnableSecondaryInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     HalpInsertSecondarySignalList @ 0x140519FE8 (HalpInsertSecondarySignalList.c)
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
