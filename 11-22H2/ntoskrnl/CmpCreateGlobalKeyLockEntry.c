/*
 * XREFs of CmpCreateGlobalKeyLockEntry @ 0x14084945C
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x1408492DC (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     CmpAllocatePool @ 0x14022CF0C (CmpAllocatePool.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406D9378 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140769400 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpCreateGlobalKeyLockEntry(volatile signed __int64 *a1)
{
  __int64 Pool; // rax
  __int64 v3; // rbx

  CmpReferenceKeyControlBlockUnsafe(a1);
  Pool = CmpAllocatePool(256LL, 32LL, 859262275LL);
  v3 = Pool;
  if ( Pool )
  {
    *(_QWORD *)(Pool + 16) = 1LL;
    *(_QWORD *)(Pool + 24) = a1;
  }
  else
  {
    CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  return v3;
}
