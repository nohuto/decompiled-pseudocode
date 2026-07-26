/*
 * XREFs of ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C011CBAC
 * Callers:
 *     _lambda_cf61730e764cafb5fbe53142b0d3259b_::operator() @ 0x1C011CAEC (_lambda_cf61730e764cafb5fbe53142b0d3259b_--operator().c)
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C013C5C4 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 *     ndisBuildMonitoringLwfBindings @ 0x1C013C7F8 (ndisBuildMonitoringLwfBindings.c)
 * Callees:
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0034EF8 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 *     ??1?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAA@XZ @ 0x1C0069A14 (--1-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C011CC18 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 */

__int64 __fastcall Ndis::BindStack::AddStaticFilterBinding(
        Ndis::BindStack *this,
        const struct _GUID *a2,
        unsigned int a3)
{
  unsigned int v4; // edx
  NDIS_BIND_FILTER_LINK *v5; // rsi
  unsigned __int64 m_bufferSize; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v9; // rdx
  NDIS_BIND_FILTER_LINK *v10; // [rsp+48h] [rbp+20h] BYREF

  Ndis::BindStack::BuildFilterLink(this, &v10, a2, a3);
  v5 = v10;
  if ( !v10 )
    goto LABEL_9;
  m_bufferSize = this->Filters.m_bufferSize;
  v7 = this->Filters.m_numElements + 1;
  if ( m_bufferSize >= v7 )
    goto LABEL_3;
  if ( v7 < 4 )
    v7 = 4LL;
  v9 = ((unsigned int)m_bufferSize >> 1) + (unsigned int)m_bufferSize;
  if ( v7 >= v9 )
    v9 = v7;
  if ( Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
         &this->Filters.m_bufferSize,
         v9) )
  {
LABEL_3:
    this->Filters._p[this->Filters.m_numElements++].__ptr_.__value_ = v5;
    ++this->ChangeEpoch;
    return 0LL;
  }
  else
  {
LABEL_9:
    wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::~unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>(
      &v10,
      v4);
    return 3221225626LL;
  }
}
