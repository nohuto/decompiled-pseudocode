/*
 * XREFs of ExpLookupHandleTableEntry @ 0x140733340
 * Callers:
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x14066B42C (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1406A6520 (ExDupHandleTable.c)
 *     ObReferenceFileObjectForWrite @ 0x14071E230 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     ExMapHandleToPointer @ 0x1407A1AC0 (ExMapHandleToPointer.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407A2680 (ObpReferenceProcessObjectByHandle.c)
 *     ExSweepHandleTable @ 0x1407A2CB0 (ExSweepHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x1407A8900 (PspReferenceCidTableEntry.c)
 *     AlpcpLookupMessage @ 0x1407ABD80 (AlpcpLookupMessage.c)
 *     ExpGetHandleExtraInfo @ 0x140883EDC (ExpGetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x140883F24 (ExpSnapShotHandleTables.c)
 *     ExpSetHandleExtraInfo @ 0x1409F9244 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLookupHandleTableEntry(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8

  v2 = a2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 >= *a1 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 3) == 1 )
    return *(_QWORD *)(v3 + 8 * (v2 >> 10) - 1) + 4 * (v2 & 0x3FF);
  if ( (v3 & 3) != 0 )
    return *(_QWORD *)(*(_QWORD *)(v3 + 8 * (v2 >> 19) - 2) + 8 * ((v2 >> 10) & 0x1FF)) + 4 * (v2 & 0x3FF);
  return v3 + 4 * v2;
}
