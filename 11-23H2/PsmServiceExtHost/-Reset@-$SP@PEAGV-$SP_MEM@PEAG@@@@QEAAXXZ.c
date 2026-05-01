/*
 * XREFs of ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x180098064
 * Callers:
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x1800418CC (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180076BD0 (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    MemoryFree(v2);
    *a1 = 0LL;
  }
}
