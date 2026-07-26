/*
 * XREFs of ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1C009349C
 * Callers:
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0099314 (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0099B0C (-ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 */

struct _NDIS_PACKET_PATTERN_ENTRY *__fastcall ndisCreateWakeUpPatternEntry(
        struct _NDIS_PM_PACKET_PATTERN *Src,
        unsigned int a2)
{
  __int64 MaskSize; // r8
  unsigned int v5; // esi
  __int64 Pool2; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v7; // rbx
  struct _NDIS_PACKET_PATTERN_ENTRY *result; // rax

  MaskSize = Src->MaskSize;
  v5 = MaskSize + 24;
  if ( MaskSize + 24 <= (unsigned __int64)(Src->PatternOffset + Src->PatternSize) )
    v5 = Src->PatternOffset + Src->PatternSize;
  Pool2 = ExAllocatePool2(64LL, v5 + 296, 1802519630);
  v7 = (struct _NDIS_PACKET_PATTERN_ENTRY *)Pool2;
  if ( Pool2 )
  {
    memmove((void *)(Pool2 + 48), Src, v5);
    v7->Priority = Src->Priority;
    result = v7;
    v7->Size = v5 + 296;
    v7->PortNumber = a2;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x1Cu,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids);
    return 0LL;
  }
  return result;
}
