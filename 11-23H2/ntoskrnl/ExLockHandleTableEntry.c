/*
 * XREFs of ExLockHandleTableEntry @ 0x1402BEAD4
 * Callers:
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     ObWaitForMultipleObjects @ 0x1406E3890 (ObWaitForMultipleObjects.c)
 *     PspReferenceCidTableEntry @ 0x1406FB1B0 (PspReferenceCidTableEntry.c)
 *     ExMapHandleToPointer @ 0x14073FC10 (ExMapHandleToPointer.c)
 *     ObpReferenceObjectByHandle @ 0x140749F3C (ObpReferenceObjectByHandle.c)
 *     ExDupHandleTable @ 0x1407B00DC (ExDupHandleTable.c)
 *     ExpSnapShotHandleTables @ 0x1408AB512 (ExpSnapShotHandleTables.c)
 *     ObpAuditObjectAccess @ 0x14097C114 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x1409F8ED4 (ExQueryProcessHandleInformation.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1407BA690 (ExpBlockOnLockedHandleEntry.c)
 */

char __fastcall ExLockHandleTableEntry(__int64 a1, _QWORD *a2)
{
  signed __int64 v4; // rax
  __int64 v5; // rtt

  do
  {
    while ( 1 )
    {
      _m_prefetchw(a2);
      v4 = *a2;
      if ( (*a2 & 1) != 0 )
        break;
      if ( !v4 )
        return v4;
      ExpBlockOnLockedHandleEntry(a1, a2, *a2);
    }
    v5 = *a2;
  }
  while ( v5 != _InterlockedCompareExchange64(a2, v4 - 1, v4) );
  LOBYTE(v4) = 1;
  return v4;
}
