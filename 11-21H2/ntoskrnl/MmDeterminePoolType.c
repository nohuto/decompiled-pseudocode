/*
 * XREFs of MmDeterminePoolType @ 0x140367A44
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140A9D4F0 (VfPtAddStackInfoIfNotExist.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140AA44A0 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     ExFreePoolSanityChecks @ 0x140AA7018 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiDeterminePoolType @ 0x140366FB0 (MiDeterminePoolType.c)
 */

__int64 __fastcall MmDeterminePoolType(unsigned __int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = MiDeterminePoolType(a1);
  result = 0LL;
  if ( v1 != 32 )
    return v1;
  return result;
}
