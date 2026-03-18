/*
 * XREFs of CmpAllocate @ 0x140702F30
 * Callers:
 *     CmpCreateHive @ 0x1407023CC (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140A1CAC0 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     CmpClaimGlobalQuota @ 0x140702F9C (CmpClaimGlobalQuota.c)
 *     CmpReleaseGlobalQuota @ 0x140709928 (CmpReleaseGlobalQuota.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocate(unsigned int a1, char a2, unsigned int a3)
{
  __int64 Pool2; // rdi

  if ( !(unsigned __int8)CmpClaimGlobalQuota() )
    return 0LL;
  Pool2 = ExAllocatePool2(a2 != 0 ? 264LL : 256LL, a1, a3);
  if ( !Pool2 )
    CmpReleaseGlobalQuota(a1);
  return Pool2;
}
