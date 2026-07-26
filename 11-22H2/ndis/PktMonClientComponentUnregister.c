/*
 * XREFs of PktMonClientComponentUnregister @ 0x1C001C3D8
 * Callers:
 *     ndisPktMonFilterRegister @ 0x1C0111CA4 (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C0111E00 (ndisPktMonOpenRegister.c)
 *     ndisPktMonMiniportRegister @ 0x1C011B7CC (ndisPktMonMiniportRegister.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0145D4C (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0147F18 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisCloseAdapter @ 0x1C0148730 (NdisCloseAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038580 (memset.c)
 */

void __fastcall PktMonClientComponentUnregister(_QWORD *a1)
{
  _QWORD *v2; // rcx
  void **v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  if ( a1[5] )
  {
    KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
    if ( a1[5] )
    {
      if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)&xmmword_1C00F53B0 + 1) + 16LL))(xmmword_1C00F53B0, a1[5]);
        ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
      }
      v2 = (_QWORD *)*a1;
      if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (void **)a1[1], *v3 != a1) )
LABEL_14:
        __fastfail(3u);
      --PktMonCompCount;
      *v3 = v2;
      v2[1] = v3;
      v4 = a1 + 2;
      while ( (_QWORD *)*v4 != v4 )
      {
        v5 = a1[3];
        if ( *(_QWORD **)v5 != v4 )
          goto LABEL_14;
        v6 = *(_QWORD **)(v5 + 8);
        if ( *v6 != v5 )
          goto LABEL_14;
        a1[3] = v6;
        *v6 = v4;
        *(_OWORD *)v5 = 0LL;
        *(_OWORD *)(v5 + 16) = 0LL;
        *(_QWORD *)(v5 + 32) = 0LL;
      }
      memset(a1, 0, 0x40uLL);
    }
    KeReleaseMutex(&PktMonCompMutex, 0);
  }
}
