/*
 * XREFs of VfIrpDatabaseCheckExFreePool @ 0x140AC0876
 * Callers:
 *     VfPoolCheckIncorrectFreeApi @ 0x140ADA130 (VfPoolCheckIncorrectFreeApi.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockShared @ 0x1405D2578 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x1405D2618 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140AC2434 (VfUtilAddressRangeFitNoLock.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2B4 (VerifierBugCheckIfAppropriate.c)
 *     ViIrpDatabaseFindPointer @ 0x140AE1AF4 (ViIrpDatabaseFindPointer.c)
 */

void __fastcall VfIrpDatabaseCheckExFreePool(ULONG_PTR BugCheckParameter2)
{
  __int64 Pointer; // rbx
  KIRQL v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  if ( VfIrpDatabaseInitialized )
  {
    if ( (unsigned int)VfUtilAddressRangeFitNoLock(
                         ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (BugCheckParameter2 >> 12)),
                         BugCheckParameter2,
                         BugCheckParameter2 + 1) )
    {
      ViIrpDatabaseAcquireLockShared(&v3);
      Pointer = ViIrpDatabaseFindPointer(BugCheckParameter2);
      ViIrpDatabaseReleaseLockShared(v3);
      if ( Pointer )
      {
        if ( (MmVerifierData & 0x10) != 0 )
          VerifierBugCheckIfAppropriate(0xC4u, 0x105uLL, BugCheckParameter2, 0LL, 0LL);
      }
    }
  }
}
