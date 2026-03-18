/*
 * XREFs of ExMapHandleToPointer @ 0x14073FC10
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     RtlpFreeHandleForAtom @ 0x14069ED40 (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x140714FB0 (RtlpInsertStringAtom.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14073F848 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObSetHandleAttributes @ 0x14073F8F0 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x14073FB00 (ObQueryObjectAuditingByHandle.c)
 *     PspThreadDelete @ 0x1407473C0 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     PspClearProcessThreadCidRefs @ 0x14076E2D8 (PspClearProcessThreadCidRefs.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407BD364 (ObpReferenceProcessObjectByHandle.c)
 *     ExMapHandleToPointerEx @ 0x1407C6238 (ExMapHandleToPointerEx.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x1402BEAD4 (ExLockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1406E6930 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExMapHandleToPointer(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9

  if ( (a2 & 0x3FC) != 0 && (v2 = ExpLookupHandleTableEntry(a1, a2)) != 0 )
    return v2 & -(__int64)(ExLockHandleTableEntry(v3, (_QWORD *)v2) != 0);
  else
    return 0LL;
}
