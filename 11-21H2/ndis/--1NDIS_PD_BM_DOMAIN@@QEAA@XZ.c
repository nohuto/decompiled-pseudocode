/*
 * XREFs of ??1NDIS_PD_BM_DOMAIN@@QEAA@XZ @ 0x1C01248B4
 * Callers:
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x1C0124AA0 (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NDIS_PD_BM_DOMAIN::~NDIS_PD_BM_DOMAIN(void (**this)(void))
{
  if ( this[4] )
  {
    this[10]();
    this[4] = 0LL;
  }
}
