/*
 * XREFs of ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C010F0B8
 * Callers:
 *     _lambda_cf61730e764cafb5fbe53142b0d3259b_::operator() @ 0x1C010F000 (_lambda_cf61730e764cafb5fbe53142b0d3259b_--operator().c)
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0130784 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 *     ndisBuildMonitoringLwfBindings @ 0x1C0130978 (ndisBuildMonitoringLwfBindings.c)
 * Callees:
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C010F138 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0112EC4 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 *     ??_GNDIS_BIND_FILTER_LINK@@QEAAPEAXI@Z @ 0x1C0121CA0 (--_GNDIS_BIND_FILTER_LINK@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall Ndis::BindStack::AddStaticFilterBinding(
        Ndis::BindStack *this,
        const struct _GUID *a2,
        unsigned int a3)
{
  NDIS_BIND_FILTER_LINK *v4; // rdx
  NDIS_BIND_FILTER_LINK *v5; // rbx
  unsigned __int64 m_bufferSize; // rdx
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned __int64 v10; // rdx
  NDIS_BIND_FILTER_LINK *v11; // [rsp+48h] [rbp+20h] BYREF

  Ndis::BindStack::BuildFilterLink(this, &v11, a2, a3);
  v5 = v11;
  if ( !v11 )
    goto LABEL_7;
  m_bufferSize = this->Filters.m_bufferSize;
  v7 = this->Filters.m_numElements + 1;
  if ( m_bufferSize >= v7 )
    goto LABEL_3;
  if ( v7 < 4 )
    v7 = 4LL;
  v10 = ((unsigned int)m_bufferSize >> 1) + (unsigned int)m_bufferSize;
  if ( v7 >= v10 )
    v10 = v7;
  if ( (unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
                          &this->Filters,
                          v10) )
  {
LABEL_3:
    v4 = v5;
    v5 = 0LL;
    this->Filters._p[this->Filters.m_numElements++].__ptr_.__value_ = v4;
    ++this->ChangeEpoch;
    v8 = 0;
  }
  else
  {
LABEL_7:
    v8 = -1073741670;
  }
  if ( v5 )
    NDIS_BIND_FILTER_LINK::`scalar deleting destructor'(v5, (unsigned int)v4);
  return v8;
}
