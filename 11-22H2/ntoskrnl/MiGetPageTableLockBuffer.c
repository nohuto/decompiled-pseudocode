/*
 * XREFs of MiGetPageTableLockBuffer @ 0x1403195F8
 * Callers:
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiWalkPageTablesRecursively @ 0x14025C050 (MiWalkPageTablesRecursively.c)
 *     MiQueryAddressState @ 0x140271AE0 (MiQueryAddressState.c)
 *     MiPageTableLockIsContended @ 0x1402E6A30 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiIsPageTableLocked @ 0x14035DA4C (MiIsPageTableLocked.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetPageTableLockBuffer(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int64 v3; // r9
  int v4; // edx
  unsigned __int64 v5; // r9
  char *v6; // rax
  char *result; // rax

  v3 = 2 * (unsigned int)((a2 + 0x90482413000LL) >> 3);
  v4 = (2 * (unsigned __int8)((a2 + 0x90482413000LL) >> 3)) & 0x1F;
  v5 = v3 >> 5;
  v6 = (char *)&unk_140C670A4;
  if ( (*(_BYTE *)(a1 + 184) & 7u) < 2 )
    v6 = (char *)(a1 + 424);
  result = &v6[4 * v5];
  *a3 = v4;
  return result;
}
