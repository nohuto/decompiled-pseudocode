/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x1407BA690
 * Callers:
 *     ExLockHandleTableEntry @ 0x1402BEAD4 (ExLockHandleTableEntry.c)
 *     ExFastReferenceHandleTableEntry @ 0x1402F4F24 (ExFastReferenceHandleTableEntry.c)
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     ObWaitForMultipleObjects @ 0x1406E3890 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6300 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     PspReferenceCidTableEntry @ 0x1406FB1B0 (PspReferenceCidTableEntry.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     AlpcpLookupMessage @ 0x1407388B0 (AlpcpLookupMessage.c)
 *     ExSweepHandleTable @ 0x14073FC60 (ExSweepHandleTable.c)
 *     ExEnumHandleTable @ 0x1407ADF70 (ExEnumHandleTable.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1403486A0 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock((volatile __int64 *)(a1 + 48), a2, &v4, 8uLL, 0LL);
}
