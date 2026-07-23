/*
 * XREFs of PnpQueuePendingEject @ 0x14095945C
 * Callers:
 *     IopEjectDevice @ 0x14096CF18 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406C992C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C99C0 (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_140C5CA88;
  if ( *(__int64 **)qword_140C5CA88 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_140C5CA88 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
