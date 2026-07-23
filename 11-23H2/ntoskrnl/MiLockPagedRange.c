/*
 * XREFs of MiLockPagedRange @ 0x140748530
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x1402ED6C0 (MiInsertNewCombineBlocks.c)
 *     MiCreatePatchTableProtos @ 0x140A36980 (MiCreatePatchTableProtos.c)
 *     MiBuildNewCloneDescriptor @ 0x140A48AA8 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     MiLockPagedAddress @ 0x1402ED780 (MiLockPagedAddress.c)
 *     MiUnlockPagedAddress @ 0x14035B444 (MiUnlockPagedAddress.c)
 */

__int64 __fastcall MiLockPagedRange(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = 0LL;
  if ( !a2 )
    return 1LL;
  while ( (unsigned int)MiLockPagedAddress(v2 + a1) )
  {
    v2 += 4096LL;
    if ( v2 >= a2 )
      return 1LL;
  }
  while ( v2 )
  {
    v2 -= 4096LL;
    MiUnlockPagedAddress(v2 + a1);
  }
  return 0LL;
}
