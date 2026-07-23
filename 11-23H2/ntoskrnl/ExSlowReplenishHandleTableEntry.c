/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x14022EFA0
 * Callers:
 *     NtWriteFile @ 0x1406B6BD0 (NtWriteFile.c)
 *     ObWaitForMultipleObjects @ 0x1406E38C0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     PspReferenceCidTableEntry @ 0x1406FB3C0 (PspReferenceCidTableEntry.c)
 *     ObpReferenceObjectByHandle @ 0x14074A12C (ObpReferenceObjectByHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSlowReplenishHandleTableEntry(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *a1;
  if ( (*a1 & 0x1FFFE) >= 0xFFFE )
    return 0LL;
  result = 0x7FFF - (unsigned int)(unsigned __int16)(v1 >> 1);
  *a1 = v1 & 0xFFFFFFFFFFFE0001uLL | 0xFFFE;
  return result;
}
