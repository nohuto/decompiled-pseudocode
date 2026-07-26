/*
 * XREFs of ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1C009357C
 * Callers:
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094BC0 (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009A1C8 (-ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQU.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x1C00939E0 (-ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z.c)
 */

struct _NDIS_PACKET_PATTERN_ENTRY *__fastcall ndisCreateWoLPatternEntry(
        struct _NDIS_PM_WOL_PATTERN *Src,
        unsigned int a2)
{
  unsigned int WoLPatternSize; // eax
  size_t v5; // rbp
  unsigned int v6; // edi
  __int64 Pool2; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v8; // rbx
  unsigned __int16 v9; // r9
  struct _NDIS_PACKET_PATTERN_ENTRY *result; // rax

  WoLPatternSize = ndisGetWoLPatternSize(Src);
  v5 = WoLPatternSize;
  v6 = WoLPatternSize + 108;
  if ( WoLPatternSize + 108 < 0x130 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = 59;
      goto LABEL_8;
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, v6, 2003846222);
    v8 = (struct _NDIS_PACKET_PATTERN_ENTRY *)Pool2;
    if ( Pool2 )
    {
      memmove((void *)(Pool2 + 48), Src, v5);
      v8->Priority = v8->Pattern.MaskSize;
      result = v8;
      v8->Size = v6;
      v8->PortNumber = a2;
      return result;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = 60;
LABEL_8:
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v9,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids);
    }
  }
  return 0LL;
}
