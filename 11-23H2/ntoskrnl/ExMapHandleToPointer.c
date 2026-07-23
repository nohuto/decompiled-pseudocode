/*
 * XREFs of ExMapHandleToPointer @ 0x14073FE00
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     RtlpFreeHandleForAtom @ 0x14069ED40 (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1407151C0 (RtlpInsertStringAtom.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14073FA38 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObSetHandleAttributes @ 0x14073FAE0 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x14073FCF0 (ObQueryObjectAuditingByHandle.c)
 *     PspThreadDelete @ 0x1407475B0 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     PspClearProcessThreadCidRefs @ 0x14076E4C8 (PspClearProcessThreadCidRefs.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407BD634 (ObpReferenceProcessObjectByHandle.c)
 *     ExMapHandleToPointerEx @ 0x1407C6508 (ExMapHandleToPointerEx.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x1402BED64 (ExLockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1406E6960 (ExpLookupHandleTableEntry.c)
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
