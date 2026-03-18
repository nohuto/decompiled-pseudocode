/*
 * XREFs of CmpAddToDelayedClose @ 0x14073E5C8
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14073E4A8 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     CmpArmDelayedCloseTimer @ 0x1402B956C (CmpArmDelayedCloseTimer.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __fastcall CmpAddToDelayedClose(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  bool v4; // bl

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = (_QWORD *)(BugCheckParameter2 + 224);
  if ( (_QWORD *)*v2 != v2 )
    KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
  v3 = CmpDelayedLRUListHead;
  if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
    __fastfail(3u);
  *v2 = CmpDelayedLRUListHead;
  *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
  *(_QWORD *)(v3 + 8) = v2;
  CmpDelayedLRUListHead = BugCheckParameter2 + 224;
  *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
  ++qword_140D552B8;
  v4 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
  ExReleaseFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  if ( v4 )
    CmpArmDelayedCloseTimer();
}
