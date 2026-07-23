/*
 * XREFs of VfInitDifWithoutReboot @ 0x140AC2C24
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x140ADDC0C (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14025A6D0 (MmUnlockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x1406AD5E0 (MmLockPagableDataSection.c)
 */

char VfInitDifWithoutReboot()
{
  char v0; // bl

  v0 = 0;
  if ( ViFullyInitialized )
    return 0;
  ViCodeSectionHandle = MmLockPagableDataSection(VfInitVerifierComponents);
  if ( ViCodeSectionHandle )
  {
    ViDataSectionHandle = MmLockPagableDataSection(&ViLoadedDriversCount);
    if ( ViDataSectionHandle )
    {
      v0 = 1;
      *((_QWORD *)&ViVerifierDriverAddedThunkListHead + 1) = &ViVerifierDriverAddedThunkListHead;
      *(_QWORD *)&ViVerifierDriverAddedThunkListHead = &ViVerifierDriverAddedThunkListHead;
      *(&ViVerifierDriverAddedSpecialThunkListHead + 1) = &ViVerifierDriverAddedSpecialThunkListHead;
      ViVerifierDriverAddedSpecialThunkListHead = &ViVerifierDriverAddedSpecialThunkListHead;
    }
    else
    {
      MmUnlockPagableImageSection(ViCodeSectionHandle);
    }
  }
  return v0;
}
