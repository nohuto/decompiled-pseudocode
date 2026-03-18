/*
 * XREFs of ??1?$PagedPoolArray@G$0IA@@@QEAA@XZ @ 0x1C00BD668
 * Callers:
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00BD3B8 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005500 (--3@YAXPEAX@Z.c)
 */

void __fastcall PagedPoolArray<unsigned short,128>::~PagedPoolArray<unsigned short,128>(void **a1)
{
  if ( *a1 != a1 + 1 )
    operator delete(*a1);
}
