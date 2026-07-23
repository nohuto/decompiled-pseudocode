/*
 * XREFs of ExpLookupHandleTableEntry @ 0x1406E6960
 * Callers:
 *     NtWriteFile @ 0x1406B6BD0 (NtWriteFile.c)
 *     ObWaitForMultipleObjects @ 0x1406E38C0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E76B0 (ObpCloseHandle.c)
 *     PspReferenceCidTableEntry @ 0x1406FB3C0 (PspReferenceCidTableEntry.c)
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 *     AlpcpLookupMessage @ 0x140738AA0 (AlpcpLookupMessage.c)
 *     ExMapHandleToPointer @ 0x14073FE00 (ExMapHandleToPointer.c)
 *     ExSweepHandleTable @ 0x14073FE50 (ExSweepHandleTable.c)
 *     ObpReferenceObjectByHandle @ 0x14074A12C (ObpReferenceObjectByHandle.c)
 *     ExEnumHandleTable @ 0x1407AE160 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x1407AE27C (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1407B02CC (ExDupHandleTable.c)
 *     ExpGetHandleExtraInfo @ 0x1408AB71A (ExpGetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x1408AB762 (ExpSnapShotHandleTables.c)
 *     ExpSetHandleExtraInfo @ 0x1409F9430 (ExpSetHandleExtraInfo.c)
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
