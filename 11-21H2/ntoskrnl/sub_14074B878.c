/*
 * XREFs of sub_14074B878 @ 0x14074B878
 * Callers:
 *     sub_1402D2BD8 @ 0x1402D2BD8 (sub_1402D2BD8.c)
 *     sub_1403770A8 @ 0x1403770A8 (sub_1403770A8.c)
 *     sub_14074C2EC @ 0x14074C2EC (sub_14074C2EC.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x1402D2AA0 (ExFreeCacheAwareRundownProtection.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1407B1200 (FsRtlTeardownPerStreamContexts.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14074B878(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  void *QuadPart; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *FastMutex; // rcx

  QuadPart = (void *)AdvancedHeader[2].AllocationSize.QuadPart;
  if ( QuadPart )
  {
    ExFreePoolWithTag(QuadPart, 0);
    AdvancedHeader[2].AllocationSize.QuadPart = 0LL;
  }
  else if ( (AdvancedHeader[1].AllocationSize.LowPart & 8) != 0 )
  {
    ExFreePoolWithTag(AdvancedHeader[2].PagingIoResource, 0);
    AdvancedHeader[2].PagingIoResource = 0LL;
  }
  if ( (AdvancedHeader[1].AllocationSize.LowPart & 0x10) != 0 )
    FsRtlTeardownPerStreamContexts(AdvancedHeader);
  FastMutex = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)AdvancedHeader[2].FastMutex;
  if ( FastMutex )
    ExFreeCacheAwareRundownProtection(FastMutex);
  AdvancedHeader[2].FastMutex = 0LL;
}
