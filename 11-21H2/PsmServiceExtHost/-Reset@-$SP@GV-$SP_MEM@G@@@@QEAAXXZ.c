/*
 * XREFs of ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x18004D59C
 * Callers:
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x1800458AC (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180040978 (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall SP<unsigned short,SP_MEM<unsigned short>>::Reset(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    MemoryFree(v2);
    *a1 = 0LL;
  }
}
