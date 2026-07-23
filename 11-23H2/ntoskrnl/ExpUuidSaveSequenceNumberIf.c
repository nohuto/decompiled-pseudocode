/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x140687ED0
 * Callers:
 *     NtAllocateUuids @ 0x140681EE0 (NtAllocateUuids.c)
 *     ExUuidCreate @ 0x140688920 (ExUuidCreate.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x14085F2E0 (ExpUuidSaveSequenceNumber.c)
 */

__int64 ExpUuidSaveSequenceNumberIf()
{
  __int64 result; // rax

  result = 0LL;
  if ( ExpUuidSequenceNumberNotSaved == 1 )
  {
    result = ExpUuidSaveSequenceNumber();
    if ( (int)result >= 0 )
      ExpUuidSequenceNumberNotSaved = 0;
  }
  return result;
}
