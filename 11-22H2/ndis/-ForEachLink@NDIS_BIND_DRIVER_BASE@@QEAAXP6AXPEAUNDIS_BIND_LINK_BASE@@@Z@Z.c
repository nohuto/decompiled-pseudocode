/*
 * XREFs of ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C011E8E0
 * Callers:
 *     NdisReEnumerateProtocolBindings @ 0x1C009D6C0 (NdisReEnumerateProtocolBindings.c)
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C011E888 (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     _lambda_9f85fcd2040f04b850747010404e3e47_::_lambda_invoker_cdecl_ @ 0x1C0121000 (_lambda_9f85fcd2040f04b850747010404e3e47_--_lambda_invoker_cdecl_.c)
 *     NdisFRetryAttach @ 0x1C012D530 (NdisFRetryAttach.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C011207C (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C0117474 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::ForEachLink(NDIS_BIND_DRIVER_BASE *this, void (__fastcall *a2)(_LIST_ENTRY *))
{
  _LIST_ENTRY *p_BindLinks; // rsi
  _LIST_ENTRY *i; // rbx
  _LIST_ENTRY *Flink; // rdi
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  v7.m_State = Unlocked;
  v7.m_Lock = (KPushLockBase *)(qword_1C00F5728 + 8);
  v7.m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(&v7);
  p_BindLinks = &this->BindLinks;
  for ( i = p_BindLinks->Flink; i != p_BindLinks; i = i->Flink )
  {
    Flink = i[-4].Flink;
    if ( LODWORD(Flink[95].Flink) && ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)i[-4].Flink, 0x20u) )
    {
      KLockHolder::ReleaseShared(&v7);
      a2(i - 4);
      KLockHolder::AcquireShared(&v7);
      ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)Flink, 0x20u);
    }
  }
  KLockHolder::~KLockHolder(&v7);
}
