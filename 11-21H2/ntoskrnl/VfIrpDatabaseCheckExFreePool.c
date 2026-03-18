/*
 * XREFs of VfIrpDatabaseCheckExFreePool @ 0x140A7FA0C
 * Callers:
 *     VfPoolCheckIncorrectFreeApi @ 0x140A9A2D0 (VfPoolCheckIncorrectFreeApi.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockShared @ 0x1406022B8 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x140602358 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140A81A74 (VfUtilAddressRangeFitNoLock.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 *     ViIrpDatabaseFindPointer @ 0x140AA5DA4 (ViIrpDatabaseFindPointer.c)
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
