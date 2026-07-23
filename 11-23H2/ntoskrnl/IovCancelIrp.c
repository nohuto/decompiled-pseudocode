/*
 * XREFs of IovCancelIrp @ 0x140AC1438
 * Callers:
 *     IoCancelIrp @ 0x140352030 (IoCancelIrp.c)
 * Callees:
 *     IovpLogStackTrace @ 0x140AC1DF8 (IovpLogStackTrace.c)
 *     ViWdBeforeCancelIrp @ 0x140ADE25C (ViWdBeforeCancelIrp.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140AE1788 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AE190C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall IovCancelIrp(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  IovpLogStackTrace(a1);
  result = VfIrpDatabaseEntryFindAndLock(a1);
  v3 = result;
  if ( result )
  {
    if ( *(_QWORD *)(result + 248) )
      ViWdBeforeCancelIrp();
    return VfIrpDatabaseEntryReleaseLock(v3);
  }
  return result;
}
