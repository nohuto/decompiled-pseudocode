/*
 * XREFs of PnpQueuePendingEject @ 0x14094774C
 * Callers:
 *     IopEjectDevice @ 0x1409585A4 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_140C46148;
  if ( *(__int64 **)qword_140C46148 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_140C46148 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
