/*
 * XREFs of ExpLookupHandleTableEntry @ 0x1406E6930
 * Callers:
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     ObWaitForMultipleObjects @ 0x1406E3890 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6300 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     PspReferenceCidTableEntry @ 0x1406FB1B0 (PspReferenceCidTableEntry.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     AlpcpLookupMessage @ 0x1407388B0 (AlpcpLookupMessage.c)
 *     ExMapHandleToPointer @ 0x14073FC10 (ExMapHandleToPointer.c)
 *     ExSweepHandleTable @ 0x14073FC60 (ExSweepHandleTable.c)
 *     ObpReferenceObjectByHandle @ 0x140749F3C (ObpReferenceObjectByHandle.c)
 *     ExEnumHandleTable @ 0x1407ADF70 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x1407AE08C (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1407B00DC (ExDupHandleTable.c)
 *     ExpGetHandleExtraInfo @ 0x1408AB4CA (ExpGetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x1408AB512 (ExpSnapShotHandleTables.c)
 *     ExpSetHandleExtraInfo @ 0x1409F91A0 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLookupHandleTableEntry(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax

  v2 = a2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 >= *a1 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 3) == 1 )
  {
    v4 = *(_QWORD *)(v3 + 8 * (v2 >> 10) - 1);
    return v4 + 4 * (v2 & 0x3FF);
  }
  if ( (v3 & 3) != 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8 * (v2 >> 19) - 2) + 8 * ((v2 >> 10) & 0x1FF));
    return v4 + 4 * (v2 & 0x3FF);
  }
  return v3 + 4 * v2;
}
