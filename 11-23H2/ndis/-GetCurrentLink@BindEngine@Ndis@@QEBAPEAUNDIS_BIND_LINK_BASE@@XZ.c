/*
 * XREFs of ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C010C678
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C34C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisCloseAdapter @ 0x1C0148730 (NdisCloseAdapter.c)
 *     NdisOpenAdapterEx @ 0x1C0149DA0 (NdisOpenAdapterEx.c)
 * Callees:
 *     <none>
 */

struct NDIS_BIND_LINK_BASE *__fastcall Ndis::BindEngine::GetCurrentLink(Ndis::BindEngine *this)
{
  return this->m_currentOperation;
}
