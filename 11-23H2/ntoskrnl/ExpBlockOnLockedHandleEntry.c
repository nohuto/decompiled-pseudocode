/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x1407BA970
 * Callers:
 *     ExLockHandleTableEntry @ 0x1402BED64 (ExLockHandleTableEntry.c)
 *     ExFastReferenceHandleTableEntry @ 0x1402F51B4 (ExFastReferenceHandleTableEntry.c)
 *     NtWriteFile @ 0x1406B6BD0 (NtWriteFile.c)
 *     ObWaitForMultipleObjects @ 0x1406E38C0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E76B0 (ObpCloseHandle.c)
 *     PspReferenceCidTableEntry @ 0x1406FB3C0 (PspReferenceCidTableEntry.c)
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 *     AlpcpLookupMessage @ 0x140738AA0 (AlpcpLookupMessage.c)
 *     ExSweepHandleTable @ 0x14073FE50 (ExSweepHandleTable.c)
 *     ExEnumHandleTable @ 0x1407AE160 (ExEnumHandleTable.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140348930 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock((volatile __int64 *)(a1 + 48), a2, &v4, 8uLL, 0LL);
}
