/*
 * XREFs of ExpLookupHandleTableEntry @ 0x1406E69E0
 * Callers:
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     ObWaitForMultipleObjects @ 0x1406E3940 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E7730 (ObpCloseHandle.c)
 *     PspReferenceCidTableEntry @ 0x1406FB260 (PspReferenceCidTableEntry.c)
 *     ObDuplicateObject @ 0x1406FB9A0 (ObDuplicateObject.c)
 *     AlpcpLookupMessage @ 0x140738DC0 (AlpcpLookupMessage.c)
 *     ExMapHandleToPointer @ 0x140740120 (ExMapHandleToPointer.c)
 *     ExSweepHandleTable @ 0x140740170 (ExSweepHandleTable.c)
 *     ObpReferenceObjectByHandle @ 0x14074A44C (ObpReferenceObjectByHandle.c)
 *     ExEnumHandleTable @ 0x1407AE520 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x1407AE63C (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1407B068C (ExDupHandleTable.c)
 *     ExpGetHandleExtraInfo @ 0x1408AB9AA (ExpGetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x1408AB9F2 (ExpSnapShotHandleTables.c)
 *     ExpSetHandleExtraInfo @ 0x1409F9250 (ExpSetHandleExtraInfo.c)
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
