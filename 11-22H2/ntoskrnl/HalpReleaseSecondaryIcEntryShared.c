/*
 * XREFs of HalpReleaseSecondaryIcEntryShared @ 0x14037D520
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x140519E38 (HalpDisableSecondaryInterrupt.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x140519FC4 (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x14051A31C (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x14051A600 (HalpUnregisterSecondaryIcInterface.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x14082099C (HalpQueryPrimaryInterruptInformation.c)
 *     HalpEnableSecondaryInterrupt @ 0x140862474 (HalpEnableSecondaryInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     HalpInsertSecondarySignalList @ 0x14051A0A8 (HalpInsertSecondarySignalList.c)
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
