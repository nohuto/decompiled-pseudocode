/*
 * XREFs of ?RemoveAll@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAXXZ @ 0x140027880
 * Callers:
 *     _dynamic_atexit_destructor_for__CVpoContext::s_mapVpoContext__ @ 0x140036DE0 (_dynamic_atexit_destructor_for__CVpoContext--s_mapVpoContext__.c)
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x140090294 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x1400913B4 (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    free(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
