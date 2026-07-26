/*
 * XREFs of ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x1C008D2DC
 * Callers:
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C008E9CC (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094040 (-ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x1C008D9B8 (-ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z.c)
 */

struct _NDIS_PACKET_PATTERN_ENTRY *__fastcall ndisCreatePMProtocolOffloadEntry(
        struct _NDIS_PM_PROTOCOL_OFFLOAD *Src,
        unsigned int a2)
{
  size_t PMProtocolOffloadSize; // rbp
  __int64 Pool2; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v6; // rbx
  struct _NDIS_PACKET_PATTERN_ENTRY *result; // rax

  PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize(Src);
  Pool2 = ExAllocatePool2(64LL, 304LL, 1886340174);
  v6 = (struct _NDIS_PACKET_PATTERN_ENTRY *)Pool2;
  if ( Pool2 )
  {
    memmove((void *)(Pool2 + 48), Src, PMProtocolOffloadSize);
    v6->Priority = v6->Pattern.MaskSize;
    result = v6;
    v6->Size = 304;
    v6->PortNumber = a2;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x5Fu,
        (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids);
    return 0LL;
  }
  return result;
}
