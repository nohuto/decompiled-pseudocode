/*
 * XREFs of ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C0113840
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C0113970 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 */

void __fastcall ndisFindAdjacentFilters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2,
        struct _NDIS_FILTER_BLOCK **a3,
        struct _NDIS_FILTER_BLOCK **a4)
{
  struct _NDIS_FILTER_BLOCK *BindContext; // rdi
  unsigned int m_numElements; // r8d
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned int v12; // edx
  struct NDIS_BIND_FILTER_LINK *value; // rcx
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // r10

  BindContext = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&a1->BindEngine.m_lock, 0LL);
  m_numElements = a1->Bindings.Filters.m_numElements;
  v10 = 0LL;
  if ( m_numElements )
  {
    LODWORD(v11) = a1->Bindings.Filters.m_numElements;
    while ( 1 )
    {
      v12 = v11;
      if ( v10 >= (unsigned int)v11 )
LABEL_16:
        __fastfail(5u);
      value = a1->Bindings.Filters._p[v10].__ptr_.__value_;
      if ( value == a2 )
        break;
      if ( Ndis::BindState::GetBindContext(&value->BindState) )
        BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(*(Ndis::BindState **)(v14 + 8 * v15));
      v11 = a1->Bindings.Filters.m_numElements;
      v10 = v15 + 1;
      if ( v10 >= v11 )
        goto LABEL_14;
      m_numElements = a1->Bindings.Filters.m_numElements;
    }
    v16 = v10 + 1;
    *a4 = BindContext;
    if ( v16 < m_numElements )
    {
      while ( 1 )
      {
        if ( v16 >= v12 )
          goto LABEL_16;
        if ( Ndis::BindState::GetBindContext(&a1->Bindings.Filters._p[v16].__ptr_.__value_->BindState) )
          break;
        v16 = v18 + 1;
        if ( v16 >= a1->Bindings.Filters.m_numElements )
          goto LABEL_14;
        v12 = a1->Bindings.Filters.m_numElements;
      }
      *a3 = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(*(Ndis::BindState **)(v17 + 8 * v18));
    }
  }
LABEL_14:
  KeLeaveCriticalRegion();
  ExReleasePushLockEx(&a1->BindEngine.m_lock, 0LL);
}
