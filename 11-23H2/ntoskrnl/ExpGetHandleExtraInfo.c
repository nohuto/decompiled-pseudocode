/*
 * XREFs of ExpGetHandleExtraInfo @ 0x1408AB4CA
 * Callers:
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6300 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     ExpFreeHandleTableEntry @ 0x140740398 (ExpFreeHandleTableEntry.c)
 *     ExpDuplicateSingleHandle @ 0x1407B0458 (ExpDuplicateSingleHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407BD364 (ObpReferenceProcessObjectByHandle.c)
 *     ObpAuditObjectAccess @ 0x14097C114 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1406E6930 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExpGetHandleExtraInfo(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9

  v2 = (_QWORD *)ExpLookupHandleTableEntry(a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  if ( v2 && *v2 )
    return *v2 + 8 * v3;
  else
    return 0LL;
}
