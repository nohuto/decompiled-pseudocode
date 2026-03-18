/*
 * XREFs of CmpCreateSiloKeyLockEntry @ 0x140847500
 * Callers:
 *     CmLockKeyForWrite @ 0x1408472CC (CmLockKeyForWrite.c)
 * Callees:
 *     CmpAllocatePool @ 0x14022CEEC (CmpAllocatePool.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406D92C8 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140768EF0 (CmpDereferenceKeyControlBlockUnsafe.c)
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
