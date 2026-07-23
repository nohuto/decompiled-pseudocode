/*
 * XREFs of PopAllocatePages @ 0x140AA18B8
 * Callers:
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 *     PopBuildMemoryImageHeader @ 0x140AA1A28 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     PopGenerateMdl @ 0x14058EFC8 (PopGenerateMdl.c)
 */

PVOID __fastcall PopAllocatePages(__int64 a1)
{
  PVOID v1; // rbx
  struct _MDL *Mdl; // rax

  PopNumberOfPagesForHibernateProcess += a1;
  v1 = 0LL;
  Mdl = PopGenerateMdl(a1);
  if ( !Mdl
    || (v1 = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 1u, 0x40000020u)) == 0LL
    || *(int *)(qword_140C3CDC0 + 188) < 0 )
  {
    *(_DWORD *)(qword_140C3CDC0 + 188) = -1073741670;
  }
  return v1;
}
