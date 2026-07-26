/*
 * XREFs of ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C0111394
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C32C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x1C0149DA0 (NdisOpenAdapterEx.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?grow@?$KArray@PEAX$00@Rtl@@AEAA_N_K@Z @ 0x1C01113DC (-grow@-$KArray@PEAX$00@Rtl@@AEAA_N_K@Z.c)
 */

char __fastcall Ndis::BindState::AddBindContext(Ndis::BindState *this, void *a2)
{
  Rtl::KArray<void *,1> *p_m_bindContext; // rbx
  char v4; // al
  char v5; // cl

  p_m_bindContext = &this->m_bindContext;
  v4 = Rtl::KArray<void *,1>::grow(&this->m_bindContext, this->m_bindContext.m_numElements + 1);
  v5 = 0;
  if ( v4 )
  {
    p_m_bindContext->_p[p_m_bindContext->m_numElements] = a2;
    v5 = 1;
    ++p_m_bindContext->m_numElements;
  }
  return v5;
}
