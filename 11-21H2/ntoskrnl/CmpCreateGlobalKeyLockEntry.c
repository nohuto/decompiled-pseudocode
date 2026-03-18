/*
 * XREFs of CmpCreateGlobalKeyLockEntry @ 0x14080FD00
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x14080FBCC (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14071BC64 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071C0FC (CmpDereferenceKeyControlBlockUnsafe.c)
 */

_QWORD *__fastcall CmpCreateGlobalKeyLockEntry(volatile signed __int64 *a1)
{
  PLOOKASIDE_LIST_EX v2; // r9
  _QWORD *TransientPoolWithTag; // rax
  _QWORD *v4; // rbx

  CmpReferenceKeyControlBlockUnsafe(a1);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x20uLL, 0x33374D43u, v2);
  v4 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    *TransientPoolWithTag = 0LL;
    TransientPoolWithTag[1] = 0LL;
    TransientPoolWithTag[2] = 1LL;
    TransientPoolWithTag[3] = a1;
  }
  else
  {
    CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  return v4;
}
