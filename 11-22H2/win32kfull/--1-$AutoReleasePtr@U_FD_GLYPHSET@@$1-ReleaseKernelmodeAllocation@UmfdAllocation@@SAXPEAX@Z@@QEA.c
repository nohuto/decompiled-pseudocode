/*
 * XREFs of ??1?$AutoReleasePtr@U_FD_GLYPHSET@@$1?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z@@QEAA@XZ @ 0x1C0306600
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C008CB90 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C00B8848 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 */

void __fastcall AutoReleasePtr<_FD_GLYPHSET,&public: static void UmfdAllocation::ReleaseKernelmodeAllocation(void *)>::~AutoReleasePtr<_FD_GLYPHSET,&public: static void UmfdAllocation::ReleaseKernelmodeAllocation(void *)>(
        char **a1)
{
  char *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    UmfdAllocation::ReleaseKernelmodeAllocation(v2);
    *a1 = 0LL;
  }
}
