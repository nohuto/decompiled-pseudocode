/*
 * XREFs of VfInitDifWithoutReboot @ 0x140AC2C34
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x140ADDC1C (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14025A440 (MmUnlockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x1406AD5B0 (MmLockPagableDataSection.c)
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
