/*
 * XREFs of CmpCreateSiloKeyLockEntry @ 0x140847800
 * Callers:
 *     CmLockKeyForWrite @ 0x1408475CC (CmLockKeyForWrite.c)
 * Callees:
 *     CmpAllocatePool @ 0x14022CFFC (CmpAllocatePool.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406D92F8 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1407690E0 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpCreateSiloKeyLockEntry(volatile signed __int64 *a1)
{
  __int64 Pool; // rax
  __int64 v3; // rbx

  CmpReferenceKeyControlBlockUnsafe(a1);
  Pool = CmpAllocatePool(256LL, 32LL, 876039491LL);
  v3 = Pool;
  if ( Pool )
    *(_QWORD *)(Pool + 16) = a1;
  else
    CmpDereferenceKeyControlBlockUnsafe(a1);
  return v3;
}
